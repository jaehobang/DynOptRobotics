void init_default_parameters( SIM *s );
PARAMETER *read_parameter_file( char *name );
int process_parameters( PARAMETER *p, SIM *s, int verbose );
int reinit_sim( SIM *s );
int init_sim( SIM *s );
double get_score( SIM *s );
void parameters_to_dvector( PARAMETER *p, double *v );
void init_data( SIM *s );
int save_data( SIM *s );
int write_the_mrdplot_file( SIM *s );
int controller( SIM *s );
void integrate_one_time_step( SIM *s );
int compute_ankle_angles( SIM *s );
void init_state_two_feet_on_ground( SIM *s );
void init_dynamics( SIM *s );
float call_many_func( float *x );
double call_many_func_d( double *x );

//Jaeho's functions
double update_parameters(SIM *s, double sigma);
