#include <stdio.h>
struct control_message
{
    int opcode;
    int statuscode;
};
union Packet
{
    struct control_message controlmsg;
    char data_payload[100];
};
enum flag
{
    Control,
    DataPayload
};
struct DataPacket
{
    enum flag f;
    union Packet pkt;
}datapkt;
void assign()
{
    if (datapkt.f == Control)
    {
        printf("Enter opcode: ");
        scanf("%d", &datapkt.pkt.controlmsg.opcode);
        printf("Enter status code: ");
        scanf("%d", &datapkt.pkt.controlmsg.statuscode);
    }
    if (datapkt.f == DataPayload)
    {
        fflush(stdin);
        printf("Enter string: ");
        gets(datapkt.pkt.data_payload);
    }
}
void printPacket()
{
    if (datapkt.f == Control)
    {
        printf("Control Message\n");
        printf("Opcode: %d\n",datapkt.pkt.controlmsg.opcode);
        printf("Status code: %d\n",datapkt.pkt.controlmsg.statuscode);
    }
    if (datapkt.f == DataPayload)
    {
        printf("Data Payload\n");
        printf("String: %s\n",datapkt.pkt.data_payload);
    }
}
int main()
{
    printf("1.Control\n2.Data\n");
    printf("Enter choice: ");
    int n;
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        datapkt.f = Control;
        assign(datapkt);
        break;
    case 2:
        datapkt.f = DataPayload;
        assign(datapkt);
        break;
    default:
        printf("Wrong choice");
        return 0;    
    }
    printf("Printing data: \n");
    printPacket();
    return 0;
}