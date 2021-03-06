#ifndef _OPERATOR_H_
#define _OPERATOR_H_

#include "errors.h"
#include "parameters.h"

/* TASK PRIORITY  */
#define TASK_PRIO_MAIN	98
#define TASK_PRIO_CTRL	99

#define TASK_MODE	T_FPU | T_CPU(0)
#define TASK_STKSZ	0

/* Real-Time TASK PERIOD */
#define TASK_PERIOD_1hz		 1000000000
#define TASK_PERIOD_2hz		  500000000
#define TASK_PERIOD_3hz		  333333333
#define TASK_PERIOD_4hz		  250000000
#define TASK_PERIOD_5hz		  200000000
#define TASK_PERIOD_10hz	  100000000
#define TASK_PERIOD_20hz	   50000000
#define TASK_PERIOD_30hz	   33333333
#define TASK_PERIOD_40hz	   25000000
#define TASK_PERIOD_50hz	   20000000
#define TASK_PERIOD_100hz	   10000000
#define TASK_PERIOD_200hz	    5000000
#define TASK_PERIOD_300hz	    3333333
#define TASK_PERIOD_400hz	    2500000
#define TASK_PERIOD_500hz	    2000000
#define TASK_PERIOD_1khz	    1000000
#define TASK_PERIOD_2khz	     500000
#define TASK_PERIOD_4khz	     250000
#define TASK_PERIOD_5khz	     200000
#define TASK_PERIOD_10khz	     100000
#define TASK_PERIOD_20khz	      50000

#define TASK_PERIOD_1000ms	 1000000000
#define TASK_PERIOD_900ms	  900000000
#define TASK_PERIOD_800ms	  800000000
#define TASK_PERIOD_700ms	  700000000
#define TASK_PERIOD_600ms	  600000000
#define TASK_PERIOD_500ms	  500000000
#define TASK_PERIOD_400ms	  400000000
#define TASK_PERIOD_300ms	  300000000
#define TASK_PERIOD_200ms	  200000000
#define TASK_PERIOD_100ms	  100000000
#define TASK_PERIOD_90ms	   90000000
#define TASK_PERIOD_80ms	   80000000
#define TASK_PERIOD_70ms	   70000000
#define TASK_PERIOD_60ms	   60000000
#define TASK_PERIOD_50ms	   50000000
#define TASK_PERIOD_40ms	   40000000
#define TASK_PERIOD_30ms	   30000000
#define TASK_PERIOD_20ms	   20000000
#define TASK_PERIOD_10ms	   10000000
#define TASK_PERIOD_9ms		    9000000
#define TASK_PERIOD_8ms		    8000000
#define TASK_PERIOD_7ms		    7000000
#define TASK_PERIOD_6ms		    6000000
#define TASK_PERIOD_5ms		    5000000
#define TASK_PERIOD_4ms		    4000000
#define TASK_PERIOD_3ms		    3000000
#define TASK_PERIOD_2ms		    2000000
#define TASK_PERIOD_1ms		    1000000

#define TASK_PERIOD_900us	     900000
#define TASK_PERIOD_800us	     800000
#define TASK_PERIOD_700us	     700000
#define TASK_PERIOD_600us	     600000
#define TASK_PERIOD_500us	     500000
#define TASK_PERIOD_400us	     400000
#define TASK_PERIOD_300us	     300000
#define TASK_PERIOD_250us	     250000
#define TASK_PERIOD_200us	     200000
#define TASK_PERIOD_100us	     100000
#define TASK_PERIOD_50us	      50000

/* Real-Time Task Declaration */
RT_TASK MAIN_TASK;
RT_TASK CTRL_TASK;

/* Real-Time Pipe Declaration */
RT_PIPE CMD_PIPE;
RT_PIPE RECD_PIPE;
RT_PIPE DISP_PIPE;

/* device file descriptor */
FILE *dev_file_disp = NULL;
FILE *dev_file_recd = NULL;

/* Used RT TASK PERIOD */
#define TASK_PERIOD_MAIN	TASK_PERIOD_1khz
#define TASK_PERIOD_CTRL	TASK_PERIOD_4khz

/* FLAG Initialization */
enum EXAM_FLAG MAIN_TASK_FLAG		= EXAM_FLAG_OFF;
enum EXAM_FLAG EMM_LOAD_STAT_FLAG	= EXAM_FLAG_OFF;
enum EXAM_FLAG NODE_STAT_FLAG		= EXAM_FLAG_OFF;
enum EXAM_FLAG DIST_CLK_STAT_FLAG	= EXAM_FLAG_OFF;
enum EXAM_FLAG RDNC_STAT_FLAG		= EXAM_FLAG_OFF;
enum EXAM_FLAG ELMO_STAT_FLAG		= EXAM_FLAG_OFF;
enum EXAM_FLAG RECD_STAT_FLAG		= EXAM_FLAG_OFF;
enum EXAM_FLAG DISP_STAT_FLAG		= EXAM_FLAG_OFF;
enum EXAM_FLAG SERV_STAT_FLAG 		= EXAM_FLAG_OFF;
enum EXAM_FLAG POS_MODE_FLAG		= EXAM_FLAG_OFF;
enum EXAM_FLAG VEL_MODE_FLAG		= EXAM_FLAG_OFF;
enum EXAM_FLAG CUR_MODE_FLAG		= EXAM_FLAG_OFF;
enum EXAM_FLAG POS_CTRL_FLAG		= EXAM_FLAG_OFF;
enum EXAM_FLAG VEL_CTRL_FLAG		= EXAM_FLAG_OFF;
enum EXAM_FLAG CUR_CTRL_FLAG		= EXAM_FLAG_OFF;
enum EXAM_FLAG TRQ_CTRL_FLAG		= EXAM_FLAG_OFF;
enum EXAM_FLAG CTRL_TASK_FLAG		= EXAM_FLAG_OFF;

/* Operated Function */
static void cleanALL(void);
static void catchSGNL(int signal);
static void mainTASK_routine(void *cookie);
static void ctrlTASK_routine(void *cookie);
static void performCMD(const cmd_t cmd);

#endif /*_OPERATES_H_*/
