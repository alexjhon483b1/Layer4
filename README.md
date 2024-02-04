Networking Concepts Cheat Sheet
OSI Model:

    Layer 1 (Physical):
        Deals with physical connections and hardware.
        Examples: Cables, hubs.

    Layer 2 (Data Link):
        Responsible for data framing and error detection.
        Examples: Ethernet, MAC addresses.

    Layer 3 (Network):
        Manages logical addressing and routing.
        Examples: IP addresses, routers.

    Layer 4 (Transport):
        Ensures reliable communication between devices.
        Examples: TCP (reliable) and UDP (connectionless).

    Layer 7 (Application):
        Deals with application-level protocols.
        Examples: HTTP, FTP, SMTP.

Protocols:

    TCP (Transmission Control Protocol):
        Connection-oriented, reliable communication.

    UDP (User Datagram Protocol):
        Connectionless, lightweight communication.

    HTTP (Hypertext Transfer Protocol):
        Application layer protocol for web communication.

    FTP (File Transfer Protocol):
        Application layer protocol for file transfer.

    SMTP (Simple Mail Transfer Protocol):
        Application layer protocol for email communication.

Attacks (Layer 4):

    TCP SYN Flood:
        Overwhelms servers with SYN requests.

    UDP Flood:
        Floods a target with UDP packets.

    TCP RST Attack:
        Sends forged TCP reset packets.

    TCP ACK Attack:
        Sends a large number of forged TCP acknowledgment packets.

Security:

    RCE (Remote Code Execution):
        Allows attackers to execute arbitrary code on a target system.

    Security Best Practices:
        Regular patching, input validation, secure coding, and the principle of least privilege.

Tools:

    Wireshark (Layer 2-7):
        Network protocol analyzer.

    Nmap (Layer 3):
        Network scanning tool.

    Netcat (nc) (Layer 4):
        Versatile networking utility.

    RouterOS (MikroTik) (Layer 3):
        Operating system for MikroTik routers.

Port:

    Port:
        Numerical identifier for distinguishing services on a device.
        Examples: HTTP (port 80), HTTPS (port 443).

OS (Layer 3 and 4):

    Operating System (OS):
        Manages networking, file systems, and processes.
        Interacts with Layer 3 (Network) and Layer 4 (Transport).

Other Concepts:

    Firmware:
        Software embedded in hardware devices, responsible for low-level control.
