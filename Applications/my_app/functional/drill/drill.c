/*2024-03-18T15:45:01-01:00*/

/********************************************************************
 * drill.c
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#include "cb_comp.h"
#include "iec_1131.h"

#include "drill.h"


/**************************** Variables *****************************/

CB_Index drill__num = 0;

/**************************** Variables *****************************/



/************************ Components offsets ************************/


/********************* Initialization function **********************/

int _my_app__drill_init(void)
{


	return 0;
}


/************************ Behavior function *************************/

int my_app__drill(void)
{
	if (exec_mac_node(self_num)) {

		/*********************** Internals variables ************************/


		/********************* Pre-conditions execution *********************/

		/*no Pre-conditions*/

		/************************ Behavior execution ************************/

		{

		}


		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/


	return 0;
}

