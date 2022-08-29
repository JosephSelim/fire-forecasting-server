
# Fire Forecasting

The company has decided to invest into forest fire forecasting
having: 
>***server*** node (temperature sensor placed in the forest )
>> - send temperature reading every 1 second
>> - allow multi-clients to connect and get the temperature data (not applicable yet)  

> GitHub repo for ***server node*** can be found at **[Server](https://github.com/JosephSelim/fire-forecasting-server.git)**.


###


> ***client*** node
>> - calculate average temperature over time 
>> - calculate accumulated temperature over time
>> - print a report every 5 seconds with the previous calculations
>> - send the calculated results to a visualization tool (not applicable yet)  

> GitHub repo for ***client node*** can be found at **[Client](https://github.com/JosephSelim/fire-forecasting.git)**.

###

## Implementation methods:

>> - used **web Sockets** as a communication method
>> - created ***Server Node*** and get and send a random temperature between 20 and 25 degree celsius every 1 second
>> - created ***Client Node*** to receive a new temperature value as long as it is running
>> - calculate average temperature over time
>> - calculate accumulated temperature over time 
>> - report every 5 seconds the previous calculations 
>> - used ***multi-threading*** to allow the system to print every 5 seconds and continue receiving new temperature values and calculate the desired data
>> - used ***C-make*** to automate my build environment and run all the desired tests during development
>> - communication method can be easily changed by just modifying the client and server nodes without any more changes for the rest of the system.

##

## Future feautures to be added:

>> - use a visualization tool and integrate it with the report every 5 seconds to view the results on a graphical model
>> - multiple-clients can be added and get the temperature readings to make several calculations and predict a possible fire at the forest
>> - a docker image containing the full project

