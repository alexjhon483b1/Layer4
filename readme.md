Making a TCP flooder that makes a server
temporarily unuseable
It is a attack where i am sending the server SYN packet
server responding with SYN-ACK packet and waiting for me
to reply with ACK packet. But I am not responding back 
instead sending the server even with more SYN packet. 
Thus the server becomes exhusted of servering it's resource
for ACK reply. and eventually becomes unresponsive.

I am using tcpdump to monitor the communication between server
and my device.
sudo tcpdump host 103.221.255.104 -v

then i ran my first test with telnet to see if i can 
capture the traffic properly
sudo telnet 103.221.255.104 80

telnet creates a tcp session and i can also send furter
request(that are written in plain text with request header, protocol and method) from there.

the l4 uses raw socket. and the telnet uses user level
connection socket. that's why first code need sudo access and 
telnet doesn't need that.

then the l42 and flood uses the user level socket

Raw Socket:

    Low-Level Access: Raw sockets provide a low-level interface that allows applications to access and manipulate the network stack at a lower level than traditional sockets.
    Access to IP Headers: With raw sockets, applications can construct and send custom packets, including the IP header. This level of control allows for tasks like protocol development, packet crafting, and network diagnostics.
    Privileged Access: Creating raw sockets often requires elevated privileges, such as root or sudo access, due to the potential security risks associated with low-level network manipulation.

User-Level Socket:

    High-Level Interface: User-level sockets, or simply "sockets," typically refer to the sockets used at the user level for communication over a network. This includes the use of higher-level socket APIs provided by the operating system, such as the Berkeley Sockets API.
    Abstraction of Network Protocols: User-level sockets abstract away the complexities of the underlying network protocols. Applications interact with sockets through a higher-level API, allowing for simplified communication without dealing directly with protocol-specific details.
    Common Protocols: User-level sockets are commonly used for communication using high-level protocols like TCP, UDP, and others
