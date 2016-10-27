/**
 * @file tasks_s9_full/tasks_s9.c
 *
 * @section desc File description
 *
 * @section copyright Copyright
 *
 * Trampoline Test Suite
 *
 * Trampoline Test Suite is copyright (c) IRCCyN 2005-2007
 * Trampoline Test Suite is protected by the French intellectual property law.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; version 2
 * of the License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 *
 * @section infos File informations
 *
 * $Date$
 * $Rev$
 * $Author$
 * $URL$
 */

#include "tpl_os.h"

TestRef TaskManagementTest_seq9_t1_instance(void);
TestRef TaskManagementTest_seq9_t2_instance(void);
TestRef TaskManagementTest_seq9_t3_instance1(void);
TestRef TaskManagementTest_seq9_t3_instance2(void);

unsigned char instance_t3 = 0;

int main(void)
{
	StartOS(OSDEFAULTAPPMODE);
	return 0;
}

void ShutdownHook(StatusType error)
{
	TestRunner_end();
}

TASK(t1)
{
	TestRunner_start();
	TestRunner_runTest(TaskManagementTest_seq9_t1_instance());
}

TASK(t2)
{
	TestRunner_runTest(TaskManagementTest_seq9_t2_instance());
}

TASK(t3)
{
	instance_t3 ++;
	switch(instance_t3)
	{ 
		case 1:	
		{
			TestRunner_runTest(TaskManagementTest_seq9_t3_instance1());
			break;
		}
		case 2:
		{
			TestRunner_runTest(TaskManagementTest_seq9_t3_instance2());
			ShutdownOS(E_OK);
			break;
		}
		default:
		{
			addFailure("Instance error \n", __LINE__, __FILE__);
			break;
		}
	}
}

/* End of file tasks_s9_full/tasks_s9.c */
