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
#define shares_per_adr 250
#define dollar_per_position 10000
#define adr_def max2(day_range_ext, adrs)
#define ref_price_def last
#define size_factor 1
#define max_risk_mgt_shares 2000

#define position_size position_size_pv

// stop
#define hard_stop execution * 1000
#define stop_trigger time_in_position_sec > 300
#define trail_price minute_high(20) + minute_range(3)

// target
#define target_trigger last < execution * .9
#define target_price bid - .01
