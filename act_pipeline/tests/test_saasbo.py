"""Test file for SaasboCalibrationOptimizer in saasbo.py."""


from act_pipeline.kernel.optimization.saasbo import SaasboCalibrationOptimizer

def test_saasbo_optimizer_random_and_gp():
    """Test SaasboCalibrationOptimizer's ask and tell methods."""
    # Minimal param_specs for 2 parameters
    param_specs = {
        'group_name': {
            'param1': {'min': 0, 'max': 10},
            'param2': {'min': 5, 'max': 15},
        }
    }
    optimizer = SaasboCalibrationOptimizer(param_specs, n_initial_random=2)

    # Test random ask (should use random for first n_initial_random calls)
    params1 = optimizer.ask()
    assert set(params1.keys()) == set(param_specs['group_name'].keys())
    assert param_specs['group_name']['param1']['min'] <= params1['param1'] <= param_specs['group_name']['param1']['max']
    assert param_specs['group_name']['param2']['min'] <= params1['param2'] <= param_specs['group_name']['param2']['max']

    optimizer.tell(params1, loss=1.0)
    params2 = optimizer.ask()
    optimizer.tell(params2, loss=2.0)

    # Now ask should use GP (not random)
    params3 = optimizer.ask()
    assert set(params3.keys()) == set(param_specs['group_name'].keys())
    assert param_specs['group_name']['param1']['min'] <= params3['param1'] <= param_specs['group_name']['param1']['max']
    assert param_specs['group_name']['param2']['min'] <= params3['param2'] <= param_specs['group_name']['param2']['max']

    # Test tell with a new loss
    optimizer.tell(params3, loss=0.5)
    assert len(optimizer.X) == 3
    assert len(optimizer.y) == 3
