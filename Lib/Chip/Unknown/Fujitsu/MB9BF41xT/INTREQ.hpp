#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Interrupts
    namespace IntreqDrqsel{    ///<DMA Request Selection Register
        using Addr = Register::Address<0x40031000,0x00000000,0x00000000,unsigned>;
        ///The interrupt signal of the external interrupt ch.3 is output as a transfer request to the DMAC (including extension).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> exint3{}; 
        ///The interrupt signal of the external interrupt ch.2 is output as a transfer request to the DMAC (including extension).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> exint2{}; 
        ///The interrupt signal of the external interrupt ch.1 is output as a transfer request to the DMAC (including extension).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> exint1{}; 
        ///The interrupt signal of the external interrupt ch.0 is output as a transfer request to the DMAC (including extension).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> exint0{}; 
        ///The transmission interrupt signal of the MFS ch.7 is output as a transfer request to the DMAC (including extension).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> mfs7tx{}; 
        ///The reception interrupt signal of the MFS ch.7 is output as a transfer request to the DMAC (including extension).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> mfs7rx{}; 
        ///The transmission interrupt signal of the MFS ch.6 is output as a transfer request to the DMAC (including extension).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> mfs6tx{}; 
        ///The reception interrupt signal of the MFS ch.6 is output as a transfer request to the DMAC (including extension).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> mfs6rx{}; 
        ///The transmission interrupt signal of the MFS ch.5 is output as a transfer request to the DMAC (including extension).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mfs5tx{}; 
        ///The reception interrupt signal of the MFS ch.5 is output as a transfer request to the DMAC (including extension).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> mfs5rx{}; 
        ///The transmission interrupt signal of the MFS ch.4 is output as a transfer request to the DMAC (including extension).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> mfs4tx{}; 
        ///The reception interrupt signal of the MFS ch.4 is output as a transfer request to the DMAC (including extension).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mfs4rx{}; 
        ///The transmission interrupt signal of the MFS ch.3 is output as a transfer request to the DMAC (including extension).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> mfs3tx{}; 
        ///The reception interrupt signal of the MFS ch.3 is output as a transfer request to the DMAC (including extension).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mfs3rx{}; 
        ///The transmission interrupt signal of the MFS ch.2 is output as a transfer request to the DMAC (including extension).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mfs2tx{}; 
        ///The reception interrupt signal of the MFS ch.2 is output as a transfer request to the DMAC (including extension).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> mfs2rx{}; 
        ///The transmission interrupt signal of the MFS ch.1 is output as a transfer request to the DMAC (including extension).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> mfs1tx{}; 
        ///The reception interrupt signal of the MFS ch.1 is output as a transfer request to the DMAC (including extension).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mfs1rx{}; 
        ///The transmission interrupt signal of the MFS ch.0 is output as a transfer request to the DMAC (including extension).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mfs0tx{}; 
        ///The reception interrupt signal of the MFS ch.0 is output as a transfer request to the DMAC (including extension).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mfs0rx{}; 
        ///The IRQ0 interrupt signal of the base timer ch.6 is output as a transfer request to the DMAC.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> irq0bt6{}; 
        ///The IRQ0 interrupt signal of the base timer ch.4 is output as a transfer request to the DMAC.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> irq0bt4{}; 
        ///The IRQ0 interrupt signal of the base timer ch.3 is output as a transfer request to the DMAC.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> irq0bt2{}; 
        ///The IRQ0 interrupt signal of the base timer ch.0 is output as a transfer request to the DMAC.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> irq0bt0{}; 
        ///The scan conversion interrupt signal of the A/D converter unit 2 is output as a transfer request to the DMAC.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> adcscan2{}; 
        ///The scan conversion interrupt signal of the A/D converter unit 1 is output as a transfer request to the DMAC.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> adcscan1{}; 
        ///The scan conversion interrupt signal of the A/D converter unit 0 is output as a transfer request to the DMAC.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> adcscan0{}; 
        ///The EP5 DRQ interrupt signal of the USB ch.0 is output as a transfer request to the DMAC.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> usbep5{}; 
        ///The EP4 DRQ interrupt signal of the USB ch.0 is output as a transfer request to the DMAC.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> usbep4{}; 
        ///The EP3 DRQ interrupt signal of the USB ch.0 is output as a transfer request to the DMAC.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> usbep3{}; 
        ///The EP2 DRQ interrupt signal of the USB ch.0 is output as a transfer request to the DMAC.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> usbep2{}; 
        ///The EP1 DRQ interrupt signal of the USB ch.0 is output as a transfer request to the DMAC.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> usbep1{}; 
    }
    namespace IntreqExc02mon{    ///<EXC02 batch read register
        using Addr = Register::Address<0x40031010,0xfffffffc,0x00000000,unsigned>;
        ///Hardware watchdog timer interrupt request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hwint{}; 
        ///External NMIX pin interrupt request 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nmi{}; 
    }
    namespace IntreqIrq00mon{    ///<IRQ00 Batch Read Register
        using Addr = Register::Address<0x40031014,0xfffffffe,0x00000000,unsigned>;
        ///Anomalous frequency detection by CSV interrupt request 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fcsint{}; 
    }
    namespace IntreqIrq01mon{    ///<IRQ01 Batch Read Register
        using Addr = Register::Address<0x40031018,0xfffffffe,0x00000000,unsigned>;
        ///Software watchdog timer interrupt request 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swwdtint{}; 
    }
    namespace IntreqIrq02mon{    ///<IRQ02 Batch Read Register
        using Addr = Register::Address<0x4003101c,0xfffffffe,0x00000000,unsigned>;
        ///Low voltage detection (LVD) interrupt request 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lvdint{}; 
    }
    namespace IntreqIrq03mon{    ///<IRQ03 Batch Read Register
        using Addr = Register::Address<0x40031020,0xfffff000,0x00000000,unsigned>;
        ///WFG timer 54 interrupt request in MFT unit 2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wave2int3{}; 
        ///WFG timer 32 interrupt request in MFT unit 2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wave2int2{}; 
        ///WFG timer 10 interrupt request in MFT unit 2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wave2int1{}; 
        ///DTIF (motor emergency stop) interrupt request in MFT unit 2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wave2int0{}; 
        ///WFG timer 54 interrupt request in MFT unit 1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wave1int3{}; 
        ///WFG timer 32 interrupt request in MFT unit 1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wave1int2{}; 
        ///WFG timer 10 interrupt request in MFT unit 1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wave1int1{}; 
        ///DTIF (motor emergency stop) interrupt request in MFT unit 1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wave1int0{}; 
        ///WFG timer 54 interrupt request in MFT unit 0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wave0int3{}; 
        ///WFG timer 32 interrupt request in MFT unit 0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wave0int2{}; 
        ///WFG timer 10 interrupt request in MFT unit 0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wave0int1{}; 
        ///DTIF (motor emergency stop) interrupt request in MFT unit 0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wave0int0{}; 
    }
    namespace IntreqIrq04mon{    ///<IRQ04 Batch Read Register
        using Addr = Register::Address<0x40031024,0xffffff00,0x00000000,unsigned>;
        ///Interrupt request on external interrupt ch.7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint7{}; 
        ///Interrupt request on external interrupt ch.6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint6{}; 
        ///Interrupt request on external interrupt ch.5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint5{}; 
        ///Interrupt request on external interrupt ch.4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint4{}; 
        ///Interrupt request on external interrupt ch.3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint3{}; 
        ///Interrupt request on external interrupt ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint2{}; 
        ///Interrupt request on external interrupt ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint1{}; 
        ///Interrupt request on external interrupt ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint0{}; 
    }
    namespace IntreqIrq05mon{    ///<IRQ05 Batch Read Register
        using Addr = Register::Address<0x40031028,0xff000000,0x00000000,unsigned>;
        ///Interrupt request on external interrupt ch.31
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint23{}; 
        ///Interrupt request on external interrupt ch.30
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint22{}; 
        ///Interrupt request on external interrupt ch.29
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint21{}; 
        ///Interrupt request on external interrupt ch.28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint20{}; 
        ///Interrupt request on external interrupt ch.27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint19{}; 
        ///Interrupt request on external interrupt ch.26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint18{}; 
        ///Interrupt request on external interrupt ch.25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint17{}; 
        ///Interrupt request on external interrupt ch.24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint16{}; 
        ///Interrupt request on external interrupt ch.23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint15{}; 
        ///Interrupt request on external interrupt ch.22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint14{}; 
        ///Interrupt request on external interrupt ch.21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint13{}; 
        ///Interrupt request on external interrupt ch.20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint12{}; 
        ///Interrupt request on external interrupt ch.19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint11{}; 
        ///Interrupt request on external interrupt ch.18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint10{}; 
        ///Interrupt request on external interrupt ch.17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint9{}; 
        ///Interrupt request on external interrupt ch.16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint8{}; 
        ///Interrupt request on external interrupt ch.15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint7{}; 
        ///Interrupt request on external interrupt ch.14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint6{}; 
        ///Interrupt request on external interrupt ch.13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint5{}; 
        ///Interrupt request on external interrupt ch.12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint4{}; 
        ///Interrupt request on external interrupt ch.11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint3{}; 
        ///Interrupt request on external interrupt ch.10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint2{}; 
        ///Interrupt request on external interrupt ch.9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint1{}; 
        ///Interrupt request on external interrupt ch.8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint0{}; 
    }
    namespace IntreqIrq06mon{    ///<IRQ06 Batch Read Register
        using Addr = Register::Address<0x4003102c,0xfff00000,0x00000000,unsigned>;
        ///PC match and RC match interrupt request on QPRC ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qud2int5{}; 
        ///Interrupt request detected RC out of range on QPRC ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qud2int4{}; 
        ///PC count invert interrupt request on QPRC ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qud2int3{}; 
        ///Overflow/underflow/zero index interrupt request on QPRC ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qud2int2{}; 
        ///PC and RC match interrupt request on QPRC ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qud2int1{}; 
        ///PC match interrupt request on QPRC ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qud2int0{}; 
        ///PC match and RC match interrupt request on QPRC ch.1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qud1int5{}; 
        ///Interrupt request detected RC out of range on QPRC ch.1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qud1int4{}; 
        ///PC count invert interrupt request on QPRC ch.1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qud1int3{}; 
        ///Overflow/underflow/zero index interrupt request on QPRC ch.1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qud1int2{}; 
        ///PC and RC match interrupt request on QPRC ch.1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qud1int1{}; 
        ///PC match interrupt request on QPRC ch.1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qud1int0{}; 
        ///PC match and RC match interrupt request on QPRC ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qud0int5{}; 
        ///Interrupt request detected RC out of range on QPRC ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qud0int4{}; 
        ///PC count invert interrupt request on QPRC ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qud0int3{}; 
        ///Overflow/underflow/zero index interrupt request on QPRC ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qud0int2{}; 
        ///PC and RC match interrupt request on QPRC ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qud0int1{}; 
        ///PC match interrupt request on QPRC ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qud0int0{}; 
        ///Dual timer 2 interrupt request 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> timint2{}; 
        ///Dual timer 1 interrupt request 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> timint1{}; 
    }
    namespace IntreqIrq07mon{    ///<IRQ07 Batch Read Register
        using Addr = Register::Address<0x40031030,0xfffffffe,0x00000000,unsigned>;
        ///Reception interrupt request on MFS ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint{}; 
    }
    namespace IntreqIrq08mon{    ///<IRQ08 Batch Read Register
        using Addr = Register::Address<0x40031034,0xfffffffc,0x00000000,unsigned>;
        ///Status interrupt request on MFS ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint1{}; 
        ///Transmission interrupt request on MFS ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint0{}; 
    }
    namespace IntreqIrq09mon{    ///<IRQ09 Batch Read Register
        using Addr = Register::Address<0x40031038,0xfffffffe,0x00000000,unsigned>;
        ///Reception interrupt request on MFS ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint{}; 
    }
    namespace IntreqIrq10mon{    ///<IRQ10 Batch Read Register
        using Addr = Register::Address<0x4003103c,0xfffffffc,0x00000000,unsigned>;
        ///Status interrupt request on MFS ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint1{}; 
        ///Transmission interrupt request on MFS ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint0{}; 
    }
    namespace IntreqIrq11mon{    ///<IRQ11 Batch Read Register
        using Addr = Register::Address<0x40031040,0xfffffffe,0x00000000,unsigned>;
        ///Reception interrupt request on MFS ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint{}; 
    }
    namespace IntreqIrq12mon{    ///<IRQ12 Batch Read Register
        using Addr = Register::Address<0x40031044,0xfffffffc,0x00000000,unsigned>;
        ///Status interrupt request on MFS ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint1{}; 
        ///Transmission interrupt request on MFS ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint0{}; 
    }
    namespace IntreqIrq13mon{    ///<IRQ13 Batch Read Register
        using Addr = Register::Address<0x40031048,0xfffffffe,0x00000000,unsigned>;
        ///Reception interrupt request on MFS ch.3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint{}; 
    }
    namespace IntreqIrq14mon{    ///<IRQ14 Batch Read Register
        using Addr = Register::Address<0x4003104c,0xfffffffc,0x00000000,unsigned>;
        ///Status interrupt request on MFS ch.3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint1{}; 
        ///Transmission interrupt request on MFS ch.3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint0{}; 
    }
    namespace IntreqIrq15mon{    ///<IRQ15 Batch Read Register
        using Addr = Register::Address<0x40031050,0xfffffffe,0x00000000,unsigned>;
        ///Reception interrupt request on MFS ch.4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint{}; 
    }
    namespace IntreqIrq16mon{    ///<IRQ16 Batch Read Register
        using Addr = Register::Address<0x40031054,0xfffffffc,0x00000000,unsigned>;
        ///Status interrupt request on MFS ch.4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint1{}; 
        ///Transmission interrupt request on MFS ch.4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint0{}; 
    }
    namespace IntreqIrq17mon{    ///<IRQ17 Batch Read Register
        using Addr = Register::Address<0x40031058,0xfffffffe,0x00000000,unsigned>;
        ///Reception interrupt request on MFS ch.5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint{}; 
    }
    namespace IntreqIrq18mon{    ///<IRQ18 Batch Read Register
        using Addr = Register::Address<0x4003105c,0xfffffffc,0x00000000,unsigned>;
        ///Status interrupt request on MFS ch.5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint1{}; 
        ///Transmission interrupt request on MFS ch.5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint0{}; 
    }
    namespace IntreqIrq19mon{    ///<IRQ19 Batch Read Register
        using Addr = Register::Address<0x40031060,0xfffffffe,0x00000000,unsigned>;
        ///Reception interrupt request on MFS ch.6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint{}; 
    }
    namespace IntreqIrq20mon{    ///<IRQ20 Batch Read Register
        using Addr = Register::Address<0x40031064,0xfffffffc,0x00000000,unsigned>;
        ///Status interrupt request on MFS ch.6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint1{}; 
        ///Transmission interrupt request on MFS ch.6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint0{}; 
    }
    namespace IntreqIrq21mon{    ///<IRQ21 Batch Read Register
        using Addr = Register::Address<0x40031068,0xfffffffe,0x00000000,unsigned>;
        ///Reception interrupt request on MFS ch.7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint{}; 
    }
    namespace IntreqIrq22mon{    ///<IRQ22 Batch Read Register
        using Addr = Register::Address<0x4003106c,0xfffffffc,0x00000000,unsigned>;
        ///Status interrupt request on MFS ch.7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint1{}; 
        ///Transmission interrupt request on MFS ch.7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint0{}; 
    }
    namespace IntreqIrq23mon{    ///<IRQ23 Batch Read Register
        using Addr = Register::Address<0x40031070,0xfffffe00,0x00000000,unsigned>;
        ///Interrupt request on PPG ch.20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ppgint8{}; 
        ///Interrupt request on PPG ch.18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ppgint7{}; 
        ///Interrupt request on PPG ch.16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ppgint6{}; 
        ///Interrupt request on PPG ch.12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ppgint5{}; 
        ///Interrupt request on PPG ch.10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ppgint4{}; 
        ///Interrupt request on PPG ch.8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ppgint3{}; 
        ///Interrupt request on PPG ch.4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ppgint2{}; 
        ///Interrupt request on PPG ch.2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ppgint1{}; 
        ///Interrupt request on PPG ch.0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ppgint0{}; 
    }
    namespace IntreqIrq24mon{    ///<IRQ24 Batch Read Register
        using Addr = Register::Address<0x40031074,0xffffffe0,0x00000000,unsigned>;
        ///Watch counter interrupt request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wcint{}; 
        ///Stabilization wait completion interrupt request for USB or USB/Ethernet PLL oscillation.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> upllint{}; 
        ///Stabilization wait completion interrupt request for main PLL oscillation 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mpllint{}; 
        ///Stabilization wait completion interrupt request for sub-clock oscillation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> soscint{}; 
        ///Stabilization wait completion interrupt request for main clock oscillation 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> moscint{}; 
    }
    namespace IntreqIrq25mon{    ///<IRQ25 Batch Read Register
        using Addr = Register::Address<0x40031078,0xfffffff0,0x00000000,unsigned>;
        ///Conversion result comparison interrupt request in the corresponding A/D unit 0. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adcint3{}; 
        ///FIFO overrun interrupt request in the corresponding A/D unit 0. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adcint2{}; 
        ///Scan conversion interrupt request in the corresponding A/D unit 0. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adcint1{}; 
        ///Priority conversion interrupt request in the corresponding A/D unit 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adcint0{}; 
    }
    namespace IntreqIrq26mon{    ///<IRQ26 Batch Read Register
        using Addr = Register::Address<0x4003107c,0xfffffff0,0x00000000,unsigned>;
        ///Conversion result comparison interrupt request in the corresponding A/D unit 1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adcint3{}; 
        ///FIFO overrun interrupt request in the corresponding A/D unit 1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adcint2{}; 
        ///Scan conversion interrupt request in the corresponding A/D unit 1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adcint1{}; 
        ///Priority conversion interrupt request in the corresponding A/D unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adcint0{}; 
    }
    namespace IntreqIrq27mon{    ///<IRQ27 Batch Read Register
        using Addr = Register::Address<0x40031080,0xfffffff0,0x00000000,unsigned>;
        ///Conversion result comparison interrupt request in the corresponding A/D unit 2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adcint3{}; 
        ///FIFO overrun interrupt request in the corresponding A/D unit 2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adcint2{}; 
        ///Scan conversion interrupt request in the corresponding A/D unit 2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adcint1{}; 
        ///Priority conversion interrupt request in the corresponding A/D unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adcint0{}; 
    }
    namespace IntreqIrq28mon{    ///<IRQ28 Batch Read Register
        using Addr = Register::Address<0x40031084,0xfffc0000,0x00000000,unsigned>;
        ///Zero detection interrupt request on the free run timer ch.2 in the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frt2int5{}; 
        ///Zero detection interrupt request on the free run timer ch.1 in the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frt2int4{}; 
        ///Zero detection interrupt request on the free run timer ch.0 in the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frt2int3{}; 
        ///Peak value detection interrupt request on the free run timer ch.2 in the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frt2int2{}; 
        ///Peak value detection interrupt request on the free run timer ch.1 in the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frt2int1{}; 
        ///Peak value detection interrupt request on the free run timer ch.0 in the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frt2int0{}; 
        ///Zero detection interrupt request on the free run timer ch.2 in the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frt1int5{}; 
        ///Zero detection interrupt request on the free run timer ch.1 in the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frt1int4{}; 
        ///Zero detection interrupt request on the free run timer ch.0 in the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frt1int3{}; 
        ///Peak value detection interrupt request on the free run timer ch.2 in the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frt1int2{}; 
        ///Peak value detection interrupt request on the free run timer ch.1 in the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frt1int1{}; 
        ///Peak value detection interrupt request on the free run timer ch.0 in the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frt1int0{}; 
        ///Zero detection interrupt request on the free run timer ch.2 in the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frt0int5{}; 
        ///Zero detection interrupt request on the free run timer ch.1 in the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frt0int4{}; 
        ///Zero detection interrupt request on the free run timer ch.0 in the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frt0int3{}; 
        ///Peak value detection interrupt request on the free run timer ch.2 in the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frt0int2{}; 
        ///Peak value detection interrupt request on the free run timer ch.1 in the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frt0int1{}; 
        ///Peak value detection interrupt request on the free run timer ch.0 in the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frt0int0{}; 
    }
    namespace IntreqIrq29mon{    ///<IRQ29 Batch Read Register
        using Addr = Register::Address<0x40031088,0xfffff000,0x00000000,unsigned>;
        ///Interrupt request on the input capture ch.3 in the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> icu2int3{}; 
        ///Interrupt request on the input capture ch.2 in the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> icu2int2{}; 
        ///Interrupt request on the input capture ch.1 in the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> icu2int1{}; 
        ///Interrupt request on the input capture ch.0 in the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> icu2int0{}; 
        ///Interrupt request on the input capture ch.3 in the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> icu1int3{}; 
        ///Interrupt request on the input capture ch.2 in the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> icu1int2{}; 
        ///Interrupt request on the input capture ch.1 in the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> icu1int1{}; 
        ///Interrupt request on the input capture ch.0 in the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> icu1int0{}; 
        ///Interrupt request on the input capture ch.3 in the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> icu0int3{}; 
        ///Interrupt request on the input capture ch.2 in the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> icu0int2{}; 
        ///Interrupt request on the input capture ch.1 in the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> icu0int1{}; 
        ///Interrupt request on the input capture ch.0 in the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> icu0int0{}; 
    }
    namespace IntreqIrq30mon{    ///<IRQ30 Batch Read Register
        using Addr = Register::Address<0x4003108c,0xfffc0000,0x00000000,unsigned>;
        ///Interrupt request on the output compare ch.5 in the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ocu2int5{}; 
        ///Interrupt request on the output compare ch.4 in the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ocu2int4{}; 
        ///Interrupt request on the output compare ch.3 in the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ocu2int3{}; 
        ///Interrupt request on the output compare ch.2 in the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ocu2int2{}; 
        ///Interrupt request on the output compare ch.1 in the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ocu2int1{}; 
        ///Interrupt request on the output compare ch.0 in the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ocu2int0{}; 
        ///Interrupt request on the output compare ch.5 in the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ocu1int5{}; 
        ///Interrupt request on the output compare ch.4 in the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ocu1int4{}; 
        ///Interrupt request on the output compare ch.3 in the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ocu1int3{}; 
        ///Interrupt request on the output compare ch.2 in the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ocu1int2{}; 
        ///Interrupt request on the output compare ch.1 in the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ocu1int1{}; 
        ///Interrupt request on the output compare ch.0 in the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ocu1int0{}; 
        ///Interrupt request on the output compare ch.5 in the MFT unit 0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ocu0int5{}; 
        ///Interrupt request on the output compare ch.4 in the MFT unit 0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ocu0int4{}; 
        ///Interrupt request on the output compare ch.3 in the MFT unit 0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ocu0int3{}; 
        ///Interrupt request on the output compare ch.2 in the MFT unit 0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ocu0int2{}; 
        ///Interrupt request on the output compare ch.1 in the MFT unit 0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ocu0int1{}; 
        ///Interrupt request on the output compare ch.0 in the MFT unit 0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ocu0int0{}; 
    }
    namespace IntreqIrq31mon{    ///<IRQ31 Batch Read Register
        using Addr = Register::Address<0x40031090,0xffff0000,0x00000000,unsigned>;
        ///IRQ1 interrupt request on the base timer ch.7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint15{}; 
        ///IRQ0 interrupt request on the base timer ch.7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint14{}; 
        ///IRQ1 interrupt request on the base timer ch.6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint13{}; 
        ///IRQ0 interrupt request on the base timer ch.6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint12{}; 
        ///IRQ1 interrupt request on the base timer ch.5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint11{}; 
        ///IRQ0 interrupt request on the base timer ch.5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint10{}; 
        ///IRQ1 interrupt request on the base timer ch.4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint9{}; 
        ///IRQ0 interrupt request on the base timer ch.4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint8{}; 
        ///IRQ1 interrupt request on the base timer ch.3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint7{}; 
        ///IRQ0 interrupt request on the base timer ch.3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint6{}; 
        ///IRQ1 interrupt request on the base timer ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint5{}; 
        ///IRQ0 interrupt request on the base timer ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint4{}; 
        ///IRQ1 interrupt request on the base timer ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint3{}; 
        ///IRQ0 interrupt request on the base timer ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint2{}; 
        ///IRQ1 interrupt request on the base timer ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint1{}; 
        ///IRQ0 interrupt request on the base timer ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint0{}; 
    }
    namespace IntreqIrq32mon{    ///<IRQ32 Batch Read Register
        using Addr = Register::Address<0x40031094,0xfffffffe,0x00000000,unsigned>;
        ///Interrupt request of CAN ch.0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> can0int{}; 
    }
    namespace IntreqIrq33mon{    ///<IRQ33 Batch Read Register
        using Addr = Register::Address<0x40031098,0xfffffffe,0x00000000,unsigned>;
        ///Interrupt request of CAN ch.1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> can1int{}; 
    }
    namespace IntreqIrq34mon{    ///<IRQ34 Batch Read Register
        using Addr = Register::Address<0x4003109c,0xffffffff,0x00000000,unsigned>;
    }
    namespace IntreqIrq35mon{    ///<IRQ35 Batch Read Register
        using Addr = Register::Address<0x400310a0,0xffffffff,0x00000000,unsigned>;
    }
    namespace IntreqIrq36mon{    ///<IRQ36 Batch Read Register
        using Addr = Register::Address<0x400310a4,0xffffffff,0x00000000,unsigned>;
    }
    namespace IntreqIrq37mon{    ///<IRQ37 Batch Read Register
        using Addr = Register::Address<0x400310a8,0xffffffff,0x00000000,unsigned>;
    }
    namespace IntreqIrq38mon{    ///<IRQ38 Batch Read Register
        using Addr = Register::Address<0x400310ac,0xfffffffe,0x00000000,unsigned>;
        ///Interrupt request on DMA ch.0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dmaint{}; 
    }
    namespace IntreqIrq39mon{    ///<IRQ39 Batch Read Register
        using Addr = Register::Address<0x400310b0,0xfffffffe,0x00000000,unsigned>;
        ///Interrupt request on DMA ch.1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dmaint{}; 
    }
    namespace IntreqIrq40mon{    ///<IRQ40 Batch Read Register
        using Addr = Register::Address<0x400310b4,0xfffffffe,0x00000000,unsigned>;
        ///Interrupt request on DMA ch.2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dmaint{}; 
    }
    namespace IntreqIrq41mon{    ///<IRQ41 Batch Read Register
        using Addr = Register::Address<0x400310b8,0xfffffffe,0x00000000,unsigned>;
        ///Interrupt request on DMA ch.3.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dmaint{}; 
    }
    namespace IntreqIrq42mon{    ///<IRQ42 Batch Read Register
        using Addr = Register::Address<0x400310bc,0xfffffffe,0x00000000,unsigned>;
        ///Interrupt request on DMA ch.4.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dmaint{}; 
    }
    namespace IntreqIrq43mon{    ///<IRQ43 Batch Read Register
        using Addr = Register::Address<0x400310c0,0xfffffffe,0x00000000,unsigned>;
        ///Interrupt request on DMA ch.5.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dmaint{}; 
    }
    namespace IntreqIrq44mon{    ///<IRQ44 Batch Read Register
        using Addr = Register::Address<0x400310c4,0xfffffffe,0x00000000,unsigned>;
        ///Interrupt request on DMA ch.6.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dmaint{}; 
    }
    namespace IntreqIrq45mon{    ///<IRQ45 Batch Read Register
        using Addr = Register::Address<0x400310c8,0xfffffffe,0x00000000,unsigned>;
        ///Interrupt request on DMA ch.7.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dmaint{}; 
    }
    namespace IntreqIrq46mon{    ///<IRQ46 Batch Read Register
        using Addr = Register::Address<0x400310cc,0xffff0000,0x00000000,unsigned>;
        ///IRQ1 interrupt request of base timer ch.15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint15{}; 
        ///IRQ0 interrupt request of base timer ch.15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint14{}; 
        ///IRQ1 interrupt request of base timer ch.14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint13{}; 
        ///IRQ0 interrupt request of base timer ch.14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint12{}; 
        ///IRQ1 interrupt request of base timer ch.13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint11{}; 
        ///IRQ0 interrupt request of base timer ch.13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint10{}; 
        ///IRQ1 interrupt request of base timer ch.12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint9{}; 
        ///IRQ0 interrupt request of base timer ch.12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint8{}; 
        ///IRQ1 interrupt request of base timer ch.11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint7{}; 
        ///IRQ0 interrupt request of base timer ch.11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint6{}; 
        ///IRQ1 interrupt request of base timer ch.10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint5{}; 
        ///IRQ0 interrupt request of base timer ch.10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint4{}; 
        ///IRQ1 interrupt request of base timer ch.9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint3{}; 
        ///IRQ0 interrupt request of base timer ch.9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint2{}; 
        ///IRQ1 interrupt request of base timer ch.8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint1{}; 
        ///IRQ0 interrupt request of base timer ch.8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint0{}; 
    }
    namespace IntreqDqesel{    ///<DMA Request Extended Selection Register
        using Addr = Register::Address<0x40031204,0x00000000,0x00000000,unsigned>;
        ///Connect USB-ch1 to IDREQ [31]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> esel31{}; 
        ///Connect USB-ch1 to IDREQ [30]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> esel30{}; 
        ///Connect USB-ch1 to IDREQ [27]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> esel27{}; 
        ///Connect USB-ch1 to IDREQ [26]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> esel26{}; 
        ///Connect USB-ch1 to IDREQ [25]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> esel25{}; 
        ///Connect USB-ch1 to IDREQ [24]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> esel24{}; 
        ///Connect USB-ch1 to IDREQ [11]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> esel11{}; 
        ///Connect USB-ch1 to IDREQ [10]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> esel10{}; 
    }
}
