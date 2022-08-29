
# Fire Forecasting
The company has decided to invest into forest fire forecasting having:
- ***Server*** node (temperature sensor placed in the forest)
    - Send temperature reading every 1 second.
    - Allow multi-clients to connect and get the temperature data (not applicable yet).

    GitHub repo for ***server node*** can be found at **[Server](https://github.com/JosephSelim/fire-forecasting-server.git)**.

- ***Client*** node
     - Calculate average temperature over time.
     - Calculate accumulated temperature over time.
     - Print a report every 5 seconds with the previous calculations.
     - Send the calculated results to a visualization tool (not applicable yet). 

    GitHub repo for ***client node*** can be found at **[Client](https://github.com/JosephSelim/fire-forecasting.git)**.

![1](https://user-images.githubusercontent.com/30760959/187175834-495c479f-c7ae-4330-a03c-9c2d2ccf262b.PNG)
### Implementation methods:

 - Used **web Sockets** as a communication method.
 - Created ***Server Node*** and get and send a random temperature between 20 and 25 degree Celsius every 1 second.
 - Created ***Client Node*** to receive a new temperature value as long as it is running.
 - Calculate average temperature over time.
 - Calculate accumulated temperature over time.
 - Report every 5 seconds the previous calculations.
 - Used ***multi-threading*** to allow the system to print every 5 seconds and continue receiving new temperature values and calculate the desired data.
 - Used ***C-make*** to automate my build environment and run all the desired tests during development.
 - Communication method can be easily changed by just modifying the client and server nodes without any more changes for the rest of the system.

### Future feautures to be added:

 - Use a visualization tool and integrate it with the report every 5 seconds to view the results on a graphical model.
 - Multiple-clients can be added and get the temperature readings to make several calculations and predict a possible fire at the forest.
 - A docker image containing the full project.

