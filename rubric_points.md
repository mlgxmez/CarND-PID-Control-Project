## Rubric points writeup

We can distinguish the P, I, D components of the PID controller and explain the impact of each of them on the behavior of the car on the track:
* The P (proportional) component helps the car to move around the target trajectory. In this particular case it's not recommended to assign a large value to the coefficient because the oscillation effect may increase, and since the track's width is quite small, that could make the car to go off the track. After several attempts, the current value was chosen for the proportional controller. On the opposite side, if we assign a value too small to the coefficient, due to the speed of the car on the straight sections of the track, as soon as it gets to a turn the steering angle will move so slowly with respect to the curvature of the track that it will make the car to leave the safe region of the road.
* It is required to implement the I (integral) component in case the car remains with a constant offset from the target trajectory. This component can benefit from the rough momvements when the car steers. For a few seconds after the car turns, the tangential movement of the car makes the car to move away from the center of the track. This component help the car to crrect this deviation.
* And the D (differential) component helps the car to stabilize its trajectory along the correct car. It prevents the car to keep oscillating around the center of the track, taking into account that this effect is increased in every turn that the car makes. If a large value is set for this coefficient it can make the car to have a slow response against abrupt turn and consequently make the car to leave the track

You can set the coefficients of the controller by manual tuning as I did.
* Start tuning the P controller so that the car is able to follow the targe trajectory before the first left turn.
* Play around the coefficients I and D until the car doesn't make weird turns or something similar.

I lose control of the car on the section where there is ground (brown area) after crossing the bridge few times, but since I could recognize the unexpected behavior of the car I ended up knowing which parameters I had to tweak and how much.

In addition, the throttle has been modified so that when the car turns its speed goes down to a third of its regular speed: 30 mph.

A video has been added in the `video` folder, of the lap run by the car in the simulator.
