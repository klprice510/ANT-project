    // begin workout 
    create_wo_timer(); 
    workoutIndex = 0;
    workoutCnt = 0;
    err_code = app_timer_start(wo_timer_id, APP_TIMER_TICKS(200, APP_TIMER_PRESCALER), NULL);
    APP_ERROR_CHECK(err_code);
