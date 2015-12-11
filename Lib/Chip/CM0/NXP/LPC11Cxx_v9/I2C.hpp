#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//I2C-bus interface
    namespace Noneconset{    ///<I2C Control Set Register. When a one is written to a bit of this register, the corresponding bit in the I2C control register is set. Writing a zero has no effect on the corresponding bit in the I2C control register.
        using Addr = Register::Address<0x40000000,0xffffff83,0,unsigned>;
        ///Assert acknowledge flag.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> aa{}; 
        ///I2C interrupt flag.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> si{}; 
        ///STOP flag.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sto{}; 
        ///START flag.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> sta{}; 
        ///I2C interface enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> i2en{}; 
    }
    namespace Nonestat{    ///<I2C Status Register. During I2C operation, this register provides detailed status codes that allow software to determine the next action needed.
        using Addr = Register::Address<0x40000004,0xffffff07,0,unsigned>;
        ///These bits give the actual status information about the I 2C interface.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> status{}; 
    }
    namespace Nonedat{    ///<I2C Data Register. During master or slave transmit mode, data to be transmitted is written to this register. During master or slave receive mode, data that has been received may be read from this register.
        using Addr = Register::Address<0x40000008,0xffffff00,0,unsigned>;
        ///This register holds data values that have been received or are to be transmitted.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Noneadr0{    ///<I2C Slave Address Register 0. Contains the 7-bit slave address for operation of the I2C interface in slave mode, and is not used in master mode. The least significant bit determines whether a slave responds to the General Call address.
        using Addr = Register::Address<0x4000000c,0xffffff00,0,unsigned>;
        ///General Call enable bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gc{}; 
        ///The I2C device address for slave mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> address{}; 
    }
    namespace Nonesclh{    ///<SCH Duty Cycle Register High Half Word. Determines the high time of the I2C clock.
        using Addr = Register::Address<0x40000010,0xffff0000,0,unsigned>;
        ///Count for SCL HIGH time period selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> sclh{}; 
    }
    namespace Nonescll{    ///<SCL Duty Cycle Register Low Half Word. Determines the low time of the I2C clock. I2nSCLL and I2nSCLH together determine the clock frequency generated by an I2C master and certain times used in slave mode.
        using Addr = Register::Address<0x40000014,0xffff0000,0,unsigned>;
        ///Count for SCL low time period selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> scll{}; 
    }
    namespace Noneconclr{    ///<I2C Control Clear Register. When a one is written to a bit of this register, the corresponding bit in the I2C control register is cleared. Writing a zero has no effect on the corresponding bit in the I2C control register.
        using Addr = Register::Address<0x40000018,0xffffff93,0,unsigned>;
        ///Assert acknowledge Clear bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> aac{}; 
        ///I2C interrupt Clear bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sic{}; 
        ///START flag Clear bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> stac{}; 
        ///I2C interface Disable bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> i2enc{}; 
    }
    namespace Nonemmctrl{    ///<Monitor mode control register.
        using Addr = Register::Address<0x4000001c,0xfffffff8,0,unsigned>;
        ///Monitor mode enable.
        enum class MmenaVal {
            monitorModeDisable=0x00000000,     ///<Monitor mode disabled.
            theI2cModuleWill=0x00000001,     ///<The I2C module will enter monitor mode. In this mode the SDA output will be forced high. This will prevent the I2C module from outputting data of any kind (including ACK) onto the I 2C data bus. Depending on the state of the ENA_SCL bit, the output may be also forced high, preventing the module from having control over the I2C clock line.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,MmenaVal> mmEna{}; 
        namespace MmenaValC{
            constexpr Register::FieldValue<decltype(mmEna)::Type,MmenaVal::monitorModeDisable> monitorModeDisable{};
            constexpr Register::FieldValue<decltype(mmEna)::Type,MmenaVal::theI2cModuleWill> theI2cModuleWill{};
        }
        ///SCL output enable.
        enum class EnasclVal {
            high=0x00000000,     ///<When this bit is cleared to 0, the SCL output will be forced high when the module is in monitor mode. As described above, this will prevent the module from having any control over the I2C clock line.
            normal=0x00000001,     ///<When this bit is set, the I2C module may exercise the same control over the clock line that it would in normal operation. This means that, acting as a slave peripheral, the I2C module can stretch the clock line (hold it low) until it has had time to respond to an I2C interrupt.[1]
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EnasclVal> enaScl{}; 
        namespace EnasclValC{
            constexpr Register::FieldValue<decltype(enaScl)::Type,EnasclVal::high> high{};
            constexpr Register::FieldValue<decltype(enaScl)::Type,EnasclVal::normal> normal{};
        }
        ///Select interrupt register match.
        enum class MatchallVal {
            match=0x00000000,     ///<When this bit is cleared, an interrupt will only be generated when a match occurs to one of the (up-to) four address registers described above.   That is, the module will respond as a normal slave as far as address-recognition is concerned.
            anyaddress=0x00000001,     ///<When this bit is set to 1 and the I2C is in monitor mode, an interrupt will be generated on ANY address received. This will enable the part to monitor all traffic on the bus.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,MatchallVal> matchAll{}; 
        namespace MatchallValC{
            constexpr Register::FieldValue<decltype(matchAll)::Type,MatchallVal::match> match{};
            constexpr Register::FieldValue<decltype(matchAll)::Type,MatchallVal::anyaddress> anyaddress{};
        }
    }
    namespace Noneadr1{    ///<I2C Slave Address Register 1. Contains the 7-bit slave address for operation of the I2C interface in slave mode, and is not used in master mode. The least significant bit determines whether a slave responds to the General Call address.
        using Addr = Register::Address<0x40000020,0xffffff00,0,unsigned>;
        ///General Call enable bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gc{}; 
        ///The I2C device address for slave mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> address{}; 
    }
    namespace Noneadr2{    ///<I2C Slave Address Register 1. Contains the 7-bit slave address for operation of the I2C interface in slave mode, and is not used in master mode. The least significant bit determines whether a slave responds to the General Call address.
        using Addr = Register::Address<0x40000024,0xffffff00,0,unsigned>;
        ///General Call enable bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gc{}; 
        ///The I2C device address for slave mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> address{}; 
    }
    namespace Noneadr3{    ///<I2C Slave Address Register 1. Contains the 7-bit slave address for operation of the I2C interface in slave mode, and is not used in master mode. The least significant bit determines whether a slave responds to the General Call address.
        using Addr = Register::Address<0x40000028,0xffffff00,0,unsigned>;
        ///General Call enable bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gc{}; 
        ///The I2C device address for slave mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> address{}; 
    }
    namespace NonedataBuffer{    ///<Data buffer register. The contents of the 8 MSBs of the I2DAT shift register will be transferred to the DATA_BUFFER automatically after every nine bits (8 bits of data plus ACK or NACK) has been received on the bus.
        using Addr = Register::Address<0x4000002c,0xffffff00,0,unsigned>;
        ///This register holds contents of the 8 MSBs of the DAT shift register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Nonemask0{    ///<I2C Slave address mask register 0. This mask register is associated with I2ADR0 to determine an address match. The mask register has no effect when comparing to the General Call address (0000000).
        using Addr = Register::Address<0x40000030,0xffffff01,0,unsigned>;
        ///Mask bits.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask1{    ///<I2C Slave address mask register 0. This mask register is associated with I2ADR0 to determine an address match. The mask register has no effect when comparing to the General Call address (0000000).
        using Addr = Register::Address<0x40000034,0xffffff01,0,unsigned>;
        ///Mask bits.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask2{    ///<I2C Slave address mask register 0. This mask register is associated with I2ADR0 to determine an address match. The mask register has no effect when comparing to the General Call address (0000000).
        using Addr = Register::Address<0x40000038,0xffffff01,0,unsigned>;
        ///Mask bits.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask3{    ///<I2C Slave address mask register 0. This mask register is associated with I2ADR0 to determine an address match. The mask register has no effect when comparing to the General Call address (0000000).
        using Addr = Register::Address<0x4000003c,0xffffff01,0,unsigned>;
        ///Mask bits.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> mask{}; 
    }
}
