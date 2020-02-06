#include "../functions.h"
#include "vars.h"
entry_trigger =
{
  entry_trig and server_crash_fail_safe
}
entry_order_type = LIMIT
entry_order_side = SHORT
entry_destination = PATHFINDER
entry_size = 100
entry_tif = SECONDS
entry_tif_seconds = 60
entry_order_limit =
{
  entry_price
}

entry_aggregated_TIF = FALSE
entry_calculate_limit_during_placement = FALSE
entry_tif2 =
entry_tif2_seconds =
entry_order_stop =
{

}
