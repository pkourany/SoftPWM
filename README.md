SoftPWM Library
================

Arduino and wiring library adapted for Particle Core/Photon to produce PWM signals on any arbitrary pin.
	https://code.google.com/p/rogue-code/wiki/SoftPWMLibraryDocumentation

Adapted for Spark by Paul Kourany, August 12, 2014
Updated for Core/Photon by Paul Kourany, Oct 3, 2015
Updated for Libraries 2.0, Jan 29, 2017

Spark Adaptation
---
The Particle adaptation uses the SparkIntervalTimer library for timing.  The timer is set
to the same 66us period as the Arduino code.

There are a maximum of 16 pins which can be configured with SoftPWM, namely D0-D7 and
A0-A7.

Requirements
---
The SparkIntervalTimer library is used.
