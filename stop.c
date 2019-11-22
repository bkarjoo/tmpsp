#include "../functions.h"
#include "vars.h"
stop_order_type = PRIMUS_STOP
stop_order_side = BUY
stop_size = 100
stop_price =
{
  day_high
}
enable_trailing = TRUE
trail_after_entry_complete = TRUE
trail_once = FALSE
trail_trigger =
{
  time_from_open_sec > 60
}
trail_how =
{
  minute_high(20) + minute_range(3)
}
trail_increment =
{
 .03
}
