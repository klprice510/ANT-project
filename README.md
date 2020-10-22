# ANT-project
Code snippets from the ANT+ thesis project for MS Computer Science.

Dynastream Innovations developed a proprietary multi-cast network protocol called Advanced and Adaptive Network Technology (ANT).  This protocol has gained popularity for applications in the exercise industry.  Bicycle smart trainers can now use a prescribed workout and feedback communicated by ANT to precisely control resistance.

These files are code snippets that use the ANT protocol to control an eddy current braked bicycle trainer.  The project included an eddy current brake which was controlled by an DC power relays which were controlled by an Arduino Uno.  The Arduino Uno communicated with a Nordic Semiconductor nRF51 development kit.  The nR51 was able to use the ANT protocol to analyze power feedback in order to tell Arudino whether to raise or lower the power level to the eddy current brake.
