// create app timer for workout updates
APP_TIMER_DEF(wo_timer_id);

int wattArray[5] = {50, 125, 225, 300, 0}; // -klp rolling hill watt level

// timeout handler for repeat timer
static void timer_a_handler(void * p_context)
{
        // Rolling Hills
        // we set workout Watts here
        // 4 x 20 seconds intervals
        // watts start at 50 and increase with each interval (50, 125, 225, 300)
        // after 4 x 20 seconds there is final 20 seconds with 0 W (downhill)
        // repeat

        workoutCnt++;
        if(workoutCnt > 100)
        {
            //we're at 20 seconds
            workoutCnt = 0;
            requestedLoad = wattArray[workoutIndex] + intensityOffset;
            workoutIndex++;
            if(workoutIndex > 4)
            {
                // repeat 80 second at different levels for rolling hills
                // then 20 seconds for the downhill
                workoutIndex = 0;
            }
        }
        // reset all outputs
        output_off(LOAD_TOO_HI);
        output_off(LOAD_TOO_LOW);
}


// Create timers
static void create_wo_timer(void)
{
        uint32_t err_code;
        // create timers
        err_code = app_timer_create(&wo_timer_id, APP_TIMER_MODE_REPEATED, timer_a_handler);
        APP_ERROR_CHECK(err_code);
}


