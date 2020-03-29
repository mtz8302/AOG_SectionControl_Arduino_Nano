# AOG_Section_control

<b>Section Control running on Arduino for AgOpenGPS PC Software.<br>
For existing Nano boards, the Upgrade to Nano33iot, to get WiFi is a good solution. Here use this code: https://github.com/mtz8302/AOG_SectionControl_SW_ESP32_Nano33iot
 <b>!!!The ESP32 and the Nano33 iot use 3.3V for any in-/outputs, so change and be careful, when upgrading !!!</b> 
 
 
Supports: <br>- Section control, 16 sections
          <br>- hardware input switches (Main ON/OFF, OFF/Auto/ON for each section, +/- pressure (only motor driven, no rate control in V4 so far))
          <br>- documentation only (e.g. for machinery with hydraulic gates)
   <br>and most combinations of it</b>

The settings are done directly in firts part of the code, especially the pin assignment.

Works with the circuit (by WEder) based on Arduino nano, see PDFs.

A suggestion for ESP32 pinout is in the PDF. Don't use pins GPIO 0, 6-12. The pins 33-39 are input only, and don't have pullup resistors.

NO rate control in AOG V4 at the moment (not supported by AOG)

Suggestion for documentation only: https://agopengps.discourse.group/t/section-control-documentation-for-ferilizer-spreader/1360

Suggestion for upgrading Mueller spray controller: https://agopengps.discourse.group/t/muller-spray-controll-with-motor-valves/1303

Video how to use switches: https://youtu.be/kI321iBwe4U
