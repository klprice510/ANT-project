/* trainer_control.h
 *
 * Globals used to determine and control output to
 * the Arduino
 */

/* plus or minus Watt difference allowed in feedback (0-240) */
#define LOAD_HYSTERESIS             10 
#define LOAD_TOO_LOW                    7       // Arduino pin 7
#define LOAD_TOO_HI                     30  // Arduino pin 2

static int requestedLoad = 50; // watt load that the workout is requiring
static int intensityOffset = 0; // user can raise or lower the total intensity by 50 Watts
//static int 
static uint8_t workoutIndex = 0; // selects watt level from array
static int workoutCnt = 0; // interrupt count used to estimate 20 seconds