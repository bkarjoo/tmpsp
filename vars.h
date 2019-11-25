// define vars shared between files
#include "../functions.h"

// general
#define name some name
#define version 0.0
#define desc some description

// basket
#define basket_rule adrs > 1

// entry
#define entry_trig new_high
#define entry_price new_high + 1 * adrs

// launch rules
#define launch_filter not half_day

// position sizing
#define position_size ps_pv
#define max_shares 2000

// stop
#define hard_stop execution * 1000
#define stop_trigger time_in_position_sec > 300
#define trail_price minute_high(20) + minute_range(3)

// target
#define target_trigger last < execution * .9
#define target_price bid - .01
