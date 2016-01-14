# Arduino_Boards

Arduino IDE support repository for PatternAgents Boards

#### ESP8266 Boards

* [TSOC-ESP8266](http://www.patternagents.com/store/)


Each board will be added as an entry to the Arduino **Tools** > **Board** menu.

### Installation Instructions

To add board support for our products, go to **File** > **Preferences**, and paste this URL into the 'Additional Boards Manager URLs' input field:

	https://raw.githubusercontent.com/PatternAgents/Arduino_Boards/master/BoardsManager/package_patternagents_index.json

![Adding a board manager list](https://raw.githubusercontent.com/PatternAgents/Arduino_Boards/master/images/arduino_preferences.png?raw=true)

This field can be found in 'Preferences...' under the Arduino File menu.

Now, under the **Tools** > **Board** > **Boards Manager...**, if you type in "patternagents", you will see an option to install board files for PatternAgents Arduino compatible boards. 
Select "Install" to add these to your list of supported boards.

![PatternAgents Board](https://raw.githubusercontent.com/PatternAgents/Arduino_Boards/master/images/arduino_boardsmanager.png?raw=true)

Now, when you select the Boards list, you will see a collection of new boards for PatternAgents.

![PatternAgents Boards List](https://raw.githubusercontent.com/PatternAgents/Arduino_Boards/master/images/arduino_board.png?raw=true)

### Notes

* **Please note: This will only work under Arduino IDE versions 1.5 and up.**
* If you are using Arduino 1.6.6 and the link isn't working for you, change "https" at the beginning of the link to "http" and try again.
* Information on compiling and programming the bootloaders can be found in the bootloaders directory.
