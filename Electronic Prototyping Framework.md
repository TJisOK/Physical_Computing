**2024-11-25 
Electronic Prototyping Framework**
- 
- **Desired functions**  
Brainstorm I/O and Schematics based on the input from design;  


- **Schematics 1**  
MCU, Basic I/O;  
Start with a basic framework to move forward;  
Figure out basic requirements based on common sense, experience, and brief research;  
*Push everything to go wrong faster  


- **Breadboard Prototyping**   
Test each component: wiring and coding;
Creatively use breadboard and tape as a ‘representation’ for the desired prototype;
Temporarily fix hardware together and quickly reconfigure it;  
*Crocodile clips are helpful
Create simple functions that test the coordination of all components;  
*Group 2 of them at a time  
*Maintain the consistency of pin numbers.  It is easy to inherit different branches of coding  

- **Draft of the shell**  
Create the first physical housing for the breadboard prototype;  
*It offers insights of the tolerance of the machinery and ‘mounting structure’ of each components  
*Push everything to go wrong faster  

- **Schematics 2**  
Refine the schematics, components used, wiring of each;  
*Make a diagram that clarifies the relationship of all components  
*It would help a lot when removing components from breadboard  

- **Making a ghost**  
Remove all components from breadboard;  
*Dupont connector could help to create robust soldering joint  
*Visually separate power supply and signals. Use Dupont female connector as VCC/GND; Dupont male connector as signals  

- **Iterating the shell**  
Based on the new configuration, house everything together and measure the groups and lengths of wires;  
*House each module separately. Create a chamber for all the wiring around MCU. Reversed tree structure (or maybe stream structure).   

- **Fitting the ghost in the shell**  
Fit the ghost in the shell. If the space is tight, remove temporary Dupont connection and solder wires onto MCU board directly.   
*Each unit at a time. Tape other wires away from the target wires that will be soldered  
*It is very easy to create a short circuit at this stage   
*It is very easy to overheat the MCU or other components with soldering iron at this stage   

- **Iteration of all**  
Reconfiguring the shell:  
Tolerance, space for wiring, mechanical functions, screw lengths;  

- **Reconfiguring the ghost:**  
Wire groups, lengths and joints; 
testing hardware configuration with simple coding to make sure everything is coordinated;  

- **Software dev stage**  
Refine the coding structure for the designed function.   
 
