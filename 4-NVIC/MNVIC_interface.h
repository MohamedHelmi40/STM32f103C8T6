#ifndef MNVIC_INTERFACE_H
#define MNVIC_INTERFACE_H




void MNVIC_voidEnablePeripheral (u8 copy_u8InterruptID);
void MNVIC_voidDisablePeripheral(u8 copy_u8InterruptID);
void MNVIC_voidSetPendingFlag   (u8 copy_u8InterruptID);
void MNVIC_voidClrPendingFlag   (u8 copy_u8InterruptID);
u8   MNVIC_u8GetActiveFlag      (u8 copy_u8InterruptID);












#endif