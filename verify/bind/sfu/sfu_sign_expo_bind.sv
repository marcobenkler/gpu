bind sfu_sign_expo sfu_sign_expo_assertions u_sfu_sign_expo_props (
    .op(op),
    .sign_in(sign_in),
    .exp_in(exp_in),
    .sign_out(sign_out),
    .exp_out(exp_out),
    .is_nan(is_nan),
    .is_inf(is_inf),
    .is_zero(is_zero),
    .is_denorm(is_denorm),
    .is_normal(is_normal)
);