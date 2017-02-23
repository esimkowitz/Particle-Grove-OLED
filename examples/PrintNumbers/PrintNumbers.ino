/*
||
|| @file PrintNumbers.cpp
|| @version 1.0
|| @author Seeed Technologies Inc., Evan Simkowitz
|| @contact esimkowitz@wustl.edu
||
|| @description
|| | This demonstrates the library's ability to convert numbers of various formats
|| | (i.e., Hex) to decimal.
|| #
||
|| @license
|| | This library is free software; you can redistribute it and/or
|| | modify it under the terms of the GNU General Public
|| | License as published by the Free Software Foundation; version
|| | 3 of the License.
|| |
|| | This library is distributed in the hope that it will be useful,
|| | but WITHOUT ANY WARRANTY; without even the implied warranty of
|| | MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
|| | General Public License for more details.
|| |
|| | You should have received a copy of the GNU General Public
|| | License along with this library; if not, write to the Free Software
|| | Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
|| #
||
*/

#include "Grove_OLED_128x64.h"

#if defined (SPARK)
// Nothing to include if Spark
#else
#include <Wire.h>
#endif

void setup()
{
  Wire.begin();
  SeeedOled.init();  //initialze SEEED OLED display

  SeeedOled.clearDisplay();           //clear the screen and set start position to top left corner
  SeeedOled.setNormalDisplay();       //Set display to Normal mode
  SeeedOled.setPageMode();            //Set addressing mode to Page Mode
  SeeedOled.setTextXY(0,0);           //Set the cursor to 0th Page, 0th Column
  SeeedOled.putNumber(123);           //Print number
  SeeedOled.setTextXY(1,0);           //Set the cursor to 1st Page, 0th Column
  SeeedOled.putNumber(0xFFFF);        //Print number
  SeeedOled.setTextXY(2,0);           //Set the cursor to 2nd Page, 0th Column
  SeeedOled.putNumber(0xFFFFFFFF);    //Print number
  SeeedOled.setTextXY(3,0);           //Set the cursor to 3rd Page, 0th Column
  SeeedOled.putNumber(-12345);        //Print number
}

void loop()
{

}
