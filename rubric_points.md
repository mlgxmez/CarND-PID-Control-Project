## Rubric points explanation

We can distinguish the P, I, D components of the PID controller:
* The P (proportional) component helps the car to move around the target trajectory.
* It is required to implement the I (integral) component in case the car remains with a constant offset from the target trajectory.
* And the D (differential) component helps the car to stabilize its trajectory along the correct car.

You can set the coefficients of the controller by manual tuning as I did.
* Start tuning the P controller so that the car is able to follow the targe trajectory before the first left turn.
* Play around the coefficients I and D until the car doesn't make weird turns or something similar.

I lose control of the car on the section where there is ground (brown area) after crossing the bridge few times, but since I could recognize the unexpected behavior of the car I ended up knowing which parameters I had to tweak and how much.

In addition, the throttle has been modified so that when the car turns its speed goes down to a third of its regular speed: 30 mph.

A video has been added in the `video` folder, of the lap run by the car in the simulator.
