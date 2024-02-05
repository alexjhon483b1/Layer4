#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

#define BUFFER_SIZE 1024

int main() {
    // Create a socket
    int sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd == -1) {
        perror("socket");
        exit(EXIT_FAILURE);
    }

    // Specify the server address and port
    struct sockaddr_in server_addr;
    memset(&server_addr, 0, sizeof(server_addr));
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(80);  // Replace with the desired port
    inet_pton(AF_INET, "103.221.255.104", &(server_addr.sin_addr));  // Replace with the server's IP address

    // Connect to the server
    if (connect(sockfd, (struct sockaddr*)&server_addr, sizeof(server_addr)) == -1) {
        perror("connect");
        close(sockfd);
        exit(EXIT_FAILURE);
    }

    // Connection established; perform operations here

    // Send SYN packet
    char syn_packet[] = "SYN";
    send(sockfd, syn_packet, sizeof(syn_packet), 0);

    // Receive SYN-ACK packet
    char syn_ack_buffer[BUFFER_SIZE];
    recv(sockfd, syn_ack_buffer, sizeof(syn_ack_buffer), 0);
    printf("Received SYN-ACK: %s\n", syn_ack_buffer);

    // Send ACK packet
    char ack_packet[] = "ACK";
    send(sockfd, ack_packet, sizeof(ack_packet), 0);

    // Perform further operations...

    // Send FIN packet
    char fin_packet[] = "FIN";
    send(sockfd, fin_packet, sizeof(fin_packet), 0);

    // Receive FIN-ACK packet
    char fin_ack_buffer[BUFFER_SIZE];
    recv(sockfd, fin_ack_buffer, sizeof(fin_ack_buffer), 0);
    printf("Received FIN-ACK: %s\n", fin_ack_buffer);

    // Send ACK for FIN-ACK
    char fin_ack_ack_packet[] = "ACK";
    send(sockfd, fin_ack_ack_packet, sizeof(fin_ack_ack_packet), 0);

    // Connection termination complete

    // Close the socket
    close(sockfd);

    return 0;
}

