#!/bin/bash

count=1

while [ $count -le 8 ]
do
    #!/bin/bash

# Start the program in the background
./get.sh &

# Get the process ID (PID) of the last background process
pid=$!

# Suspend the process using SIGSTOP
sleep 10
kill -STOP $pid

echo "Program suspended with PID $pid"
  ((count++))
done

