int is_finished();
void init(int x, int y, int random_bg,int max_moves,float living_reward,float miss_penalty, float hit_reward, int ammo);
float get_summary_reward();
void new_episode();
float make_action(int* action);
int* get_state_format();
float** get_image_state();
float* get_misc_state();
float average_best_result();