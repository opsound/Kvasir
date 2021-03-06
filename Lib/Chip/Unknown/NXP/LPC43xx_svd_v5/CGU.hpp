#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Product name title=UM10462 Chapter title=LPC18xx Clock Generation Unit (CGU) Modification date=6/1/2011 Major revision=0 Minor revision=1 
    namespace CguFreqMon{    ///<Frequency monitor register
        using Addr = Register::Address<0x40050014,0x00000000,0x00000000,unsigned>;
        ///9-bit reference clock-counter value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> rcnt{}; 
        ///14-bit selected clock-counter value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,9),Register::ReadWriteAccess,unsigned> fcnt{}; 
        ///Measure frequency
        enum class MeasVal {
            rcntAndFcntDisabl=0x00000000,     ///<RCNT and FCNT disabled
            frequencyCountersS=0x00000001,     ///<Frequency counters started
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,MeasVal> meas{}; 
        namespace MeasValC{
            constexpr Register::FieldValue<decltype(meas)::Type,MeasVal::rcntAndFcntDisabl> rcntAndFcntDisabl{};
            constexpr Register::FieldValue<decltype(meas)::Type,MeasVal::frequencyCountersS> frequencyCountersS{};
        }
        ///Clock-source selection for the clock to be measured. All other values are reserved.
        enum class ClkselVal {
            v32KhzOscillatorD=0x00000000,     ///<32 kHz oscillator (default)
            irc=0x00000001,     ///<IRC
            enetRxClk=0x00000002,     ///<ENET_RX_CLK
            enetTxClk=0x00000003,     ///<ENET_TX_CLK
            gpClkin=0x00000004,     ///<GP_CLKIN
            crystalOscillator=0x00000006,     ///<Crystal oscillator
            pll0Usb=0x00000007,     ///<PLL0 (USB)
            pll0Audio=0x00000008,     ///<PLL0 (audio)
            pll1=0x00000009,     ///<PLL1
            idiva=0x0000000c,     ///<IDIVA
            idivb=0x0000000d,     ///<IDIVB
            idivc=0x0000000e,     ///<IDIVC
            idivd=0x0000000f,     ///<IDIVD
            idive=0x00000010,     ///<IDIVE
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,ClkselVal> clkSel{}; 
        namespace ClkselValC{
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::v32KhzOscillatorD> v32KhzOscillatorD{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::irc> irc{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::enetRxClk> enetRxClk{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::enetTxClk> enetTxClk{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::gpClkin> gpClkin{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::crystalOscillator> crystalOscillator{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::pll0Usb> pll0Usb{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::pll0Audio> pll0Audio{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::pll1> pll1{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idiva> idiva{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivb> idivb{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivc> idivc{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivd> idivd{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idive> idive{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CguXtalOscCtrl{    ///<Crystal oscillator control register
        using Addr = Register::Address<0x40050018,0x00000000,0x00000000,unsigned>;
        ///Oscillator-pad enable. Do not change the BYPASS and ENABLE bits in one write-action: this will result in unstable device operation!
        enum class EnableVal {
            enable=0x00000000,     ///<Enable
            powerDownDefault=0x00000001,     ///<Power-down (default)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EnableVal> enable{}; 
        namespace EnableValC{
            constexpr Register::FieldValue<decltype(enable)::Type,EnableVal::enable> enable{};
            constexpr Register::FieldValue<decltype(enable)::Type,EnableVal::powerDownDefault> powerDownDefault{};
        }
        ///Configure crystal operation or external-clock input pin XTAL1. Do not change the BYPASS and ENABLE bits in one write-action: this will result in unstable device operation!
        enum class BypassVal {
            operationWithCryst=0x00000000,     ///<Operation with crystal connected (default).
            bypassModeUseThi=0x00000001,     ///<Bypass mode. Use this mode when an external clock source is used instead of a crystal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,BypassVal> bypass{}; 
        namespace BypassValC{
            constexpr Register::FieldValue<decltype(bypass)::Type,BypassVal::operationWithCryst> operationWithCryst{};
            constexpr Register::FieldValue<decltype(bypass)::Type,BypassVal::bypassModeUseThi> bypassModeUseThi{};
        }
        ///Select frequency range
        enum class HfVal {
            oscillatorLowFrequ=0x00000000,     ///<Oscillator low-frequency mode (crystal or external clock source 1 to 20 MHz). Between 15 MHz to 20 MHz, the state of the HF bit is don't care.
            oscillatorHighFreq=0x00000001,     ///<Oscillator high-frequency mode; crystal or external clock source 15 to 25 MHz. Between 15 MHz to 20 MHz, the state of the HF bit is don't care (default)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,HfVal> hf{}; 
        namespace HfValC{
            constexpr Register::FieldValue<decltype(hf)::Type,HfVal::oscillatorLowFrequ> oscillatorLowFrequ{};
            constexpr Register::FieldValue<decltype(hf)::Type,HfVal::oscillatorHighFreq> oscillatorHighFreq{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CguPll0usbStat{    ///<PLL0 (USB) status register
        using Addr = Register::Address<0x4005001c,0x00000000,0x00000000,unsigned>;
        ///PLL0 lock indicator
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lock{}; 
        ///PLL0 free running indicator
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fr{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CguPll0usbCtrl{    ///<PLL0 (USB) control register
        using Addr = Register::Address<0x40050020,0x00000000,0x00000000,unsigned>;
        ///PLL0 power down
        enum class PdVal {
            pll0Enabled=0x00000000,     ///<PLL0 enabled
            pll0PoweredDown=0x00000001,     ///<PLL0 powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PdVal> pd{}; 
        namespace PdValC{
            constexpr Register::FieldValue<decltype(pd)::Type,PdVal::pll0Enabled> pll0Enabled{};
            constexpr Register::FieldValue<decltype(pd)::Type,PdVal::pll0PoweredDown> pll0PoweredDown{};
        }
        ///Input clock bypass control
        enum class BypassVal {
            ccoClockSentToPo=0x00000000,     ///<CCO clock sent to post-dividers. Use this in normal operation.
            pll0InputClockSen=0x00000001,     ///<PLL0 input clock sent to post-dividers (default).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,BypassVal> bypass{}; 
        namespace BypassValC{
            constexpr Register::FieldValue<decltype(bypass)::Type,BypassVal::ccoClockSentToPo> ccoClockSentToPo{};
            constexpr Register::FieldValue<decltype(bypass)::Type,BypassVal::pll0InputClockSen> pll0InputClockSen{};
        }
        ///PLL0 direct input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> directi{}; 
        ///PLL0 direct output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> directo{}; 
        ///PLL0 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clken{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Free running mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> frm{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved. Reads as zero. Do not write one to this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved. Reads as zero. Do not write one to this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved. Reads as zero. Do not write one to this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Block clock automatically during frequency change
        enum class AutoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,AutoblockVal> autoblock{}; 
        namespace AutoblockValC{
            constexpr Register::FieldValue<decltype(autoblock)::Type,AutoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr Register::FieldValue<decltype(autoblock)::Type,AutoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,12),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Clock source selection. All other values are reserved.
        enum class ClkselVal {
            v32KhzOscillator=0x00000000,     ///<32 kHz oscillator
            ircDefault=0x00000001,     ///<IRC (default)
            enetRxClk=0x00000002,     ///<ENET_RX_CLK
            enetTxClk=0x00000003,     ///<ENET_TX_CLK
            gpClkin=0x00000004,     ///<GP_CLKIN
            crystalOscillator=0x00000006,     ///<Crystal oscillator
            pll1=0x00000009,     ///<PLL1
            idiva=0x0000000c,     ///<IDIVA
            idivb=0x0000000d,     ///<IDIVB
            idivc=0x0000000e,     ///<IDIVC
            idivd=0x0000000f,     ///<IDIVD
            idive=0x00000010,     ///<IDIVE
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,ClkselVal> clkSel{}; 
        namespace ClkselValC{
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::ircDefault> ircDefault{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::enetRxClk> enetRxClk{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::enetTxClk> enetTxClk{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::gpClkin> gpClkin{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::crystalOscillator> crystalOscillator{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::pll1> pll1{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idiva> idiva{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivb> idivb{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivc> idivc{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivd> idivd{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idive> idive{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CguPll0usbMdiv{    ///<PLL0 (USB) M-divider register
        using Addr = Register::Address<0x40050024,0x00000000,0x00000000,unsigned>;
        ///Decoded M-divider coefficient value. Select values for the M-divider between 1 and 131071.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,0),Register::ReadWriteAccess,unsigned> mdec{}; 
        ///Bandwidth select P value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,17),Register::ReadWriteAccess,unsigned> selp{}; 
        ///Bandwidth select I value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,22),Register::ReadWriteAccess,unsigned> seli{}; 
        ///Bandwidth select R value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> selr{}; 
    }
    namespace CguPll0usbNpDiv{    ///<PLL0 (USB) N/P-divider register
        using Addr = Register::Address<0x40050028,0x00000000,0x00000000,unsigned>;
        ///Decoded P-divider coefficient value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> pdec{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Decoded N-divider coefficient value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,12),Register::ReadWriteAccess,unsigned> ndec{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,22),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CguPll0audioStat{    ///<PLL0 (audio) status register
        using Addr = Register::Address<0x4005002c,0x00000000,0x00000000,unsigned>;
        ///PLL0 lock indicator
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lock{}; 
        ///PLL0 free running indicator
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fr{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CguPll0audioCtrl{    ///<PLL0 (audio) control register
        using Addr = Register::Address<0x40050030,0x00000000,0x00000000,unsigned>;
        ///PLL0 power down
        enum class PdVal {
            pll0Enabled=0x00000000,     ///<PLL0 enabled
            pll0PoweredDown=0x00000001,     ///<PLL0 powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PdVal> pd{}; 
        namespace PdValC{
            constexpr Register::FieldValue<decltype(pd)::Type,PdVal::pll0Enabled> pll0Enabled{};
            constexpr Register::FieldValue<decltype(pd)::Type,PdVal::pll0PoweredDown> pll0PoweredDown{};
        }
        ///Input clock bypass control
        enum class BypassVal {
            ccoClockSentToPo=0x00000000,     ///<CCO clock sent to post-dividers. Use this in normal operation.
            pll0InputClockSen=0x00000001,     ///<PLL0 input clock sent to post-dividers (default).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,BypassVal> bypass{}; 
        namespace BypassValC{
            constexpr Register::FieldValue<decltype(bypass)::Type,BypassVal::ccoClockSentToPo> ccoClockSentToPo{};
            constexpr Register::FieldValue<decltype(bypass)::Type,BypassVal::pll0InputClockSen> pll0InputClockSen{};
        }
        ///PLL0 direct input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> directi{}; 
        ///PLL0 direct output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> directo{}; 
        ///PLL0 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clken{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Free running mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> frm{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved. Reads as zero. Do not write one to this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved. Reads as zero. Do not write one to this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved. Reads as zero. Do not write one to this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Block clock automatically during frequency change
        enum class AutoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,AutoblockVal> autoblock{}; 
        namespace AutoblockValC{
            constexpr Register::FieldValue<decltype(autoblock)::Type,AutoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr Register::FieldValue<decltype(autoblock)::Type,AutoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        ///Fractional PLL word write request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pllfraqReq{}; 
        ///SD modulator bypass
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> selExt{}; 
        ///SD modulator power-down
        enum class ModpdVal {
            sdModulatorEnabled=0x00000000,     ///<SD modulator enabled
            sdModulatorPowered=0x00000001,     ///<SD modulator powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,ModpdVal> modPd{}; 
        namespace ModpdValC{
            constexpr Register::FieldValue<decltype(modPd)::Type,ModpdVal::sdModulatorEnabled> sdModulatorEnabled{};
            constexpr Register::FieldValue<decltype(modPd)::Type,ModpdVal::sdModulatorPowered> sdModulatorPowered{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,15),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Clock source selection. All other values are reserved.
        enum class ClkselVal {
            v32KhzOscillator=0x00000000,     ///<32 kHz oscillator
            ircDefault=0x00000001,     ///<IRC (default)
            enetRxClk=0x00000002,     ///<ENET_RX_CLK
            enetTxClk=0x00000003,     ///<ENET_TX_CLK
            gpClkin=0x00000004,     ///<GP_CLKIN
            crystalOscillator=0x00000006,     ///<Crystal oscillator
            pll1=0x00000009,     ///<PLL1
            idiva=0x0000000c,     ///<IDIVA
            idivb=0x0000000d,     ///<IDIVB
            idivc=0x0000000e,     ///<IDIVC
            idivd=0x0000000f,     ///<IDIVD
            idive=0x00000010,     ///<IDIVE
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,ClkselVal> clkSel{}; 
        namespace ClkselValC{
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::ircDefault> ircDefault{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::enetRxClk> enetRxClk{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::enetTxClk> enetTxClk{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::gpClkin> gpClkin{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::crystalOscillator> crystalOscillator{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::pll1> pll1{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idiva> idiva{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivb> idivb{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivc> idivc{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivd> idivd{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idive> idive{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CguPll0audioMdiv{    ///<PLL0 (audio) M-divider register
        using Addr = Register::Address<0x40050034,0xff000000,0x00000000,unsigned>;
        ///Decoded M-divider coefficient value. Select values for the M-divider between 1 and 131071.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,0),Register::ReadWriteAccess,unsigned> mdec{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,17),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CguPll0audioNpDiv{    ///<PLL0 (audio) N/P-divider register
        using Addr = Register::Address<0x40050038,0x00000000,0x00000000,unsigned>;
        ///Decoded P-divider coefficient value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> pdec{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Decoded N-divider coefficient value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,12),Register::ReadWriteAccess,unsigned> ndec{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,22),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CguPll0audioFrac{    ///<PLL0 (audio)
        using Addr = Register::Address<0x4005003c,0x00000000,0x00000000,unsigned>;
        ///PLL fractional divider control word
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,0),Register::ReadWriteAccess,unsigned> pllfractCtrl{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,22),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CguPll1Stat{    ///<PLL1 status register
        using Addr = Register::Address<0x40050040,0x00000000,0x00000000,unsigned>;
        ///PLL1 lock indicator
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lock{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,1),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CguPll1Ctrl{    ///<PLL1 control register
        using Addr = Register::Address<0x40050044,0x00000000,0x00000000,unsigned>;
        ///PLL1 power down
        enum class PdVal {
            pll1Enabled=0x00000000,     ///<PLL1 enabled
            pll1PoweredDown=0x00000001,     ///<PLL1 powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PdVal> pd{}; 
        namespace PdValC{
            constexpr Register::FieldValue<decltype(pd)::Type,PdVal::pll1Enabled> pll1Enabled{};
            constexpr Register::FieldValue<decltype(pd)::Type,PdVal::pll1PoweredDown> pll1PoweredDown{};
        }
        ///Input clock bypass control
        enum class BypassVal {
            ccoClockSentToPo=0x00000000,     ///<CCO clock sent to post-dividers. Use for normal operation.
            pll1InputClockSen=0x00000001,     ///<PLL1 input clock sent to post-dividers (default).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,BypassVal> bypass{}; 
        namespace BypassValC{
            constexpr Register::FieldValue<decltype(bypass)::Type,BypassVal::ccoClockSentToPo> ccoClockSentToPo{};
            constexpr Register::FieldValue<decltype(bypass)::Type,BypassVal::pll1InputClockSen> pll1InputClockSen{};
        }
        ///Reserved. Do not write one to this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved. Do not write one to these bits.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///PLL feedback select (see Figure 88 "PLL1 block diagram").
        enum class FbselVal {
            ccoOutputIsUsedA=0x00000000,     ///<CCO output is used as feedback divider input clock.
            pllOutputClockCl=0x00000001,     ///<PLL output clock (clkout) is used as feedback divider input clock. Use for normal operation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,FbselVal> fbsel{}; 
        namespace FbselValC{
            constexpr Register::FieldValue<decltype(fbsel)::Type,FbselVal::ccoOutputIsUsedA> ccoOutputIsUsedA{};
            constexpr Register::FieldValue<decltype(fbsel)::Type,FbselVal::pllOutputClockCl> pllOutputClockCl{};
        }
        ///PLL direct CCO output
        enum class DirectVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DirectVal> direct{}; 
        namespace DirectValC{
            constexpr Register::FieldValue<decltype(direct)::Type,DirectVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(direct)::Type,DirectVal::enabled> enabled{};
        }
        ///Post-divider division ratio. The value applied is 2xP.
        enum class PselVal {
            v1=0x00000000,     ///<1
            v2Default=0x00000001,     ///<2 (default)
            v4=0x00000002,     ///<4
            v8=0x00000003,     ///<8
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,PselVal> psel{}; 
        namespace PselValC{
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::v1> v1{};
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::v2Default> v2Default{};
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::v4> v4{};
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::v8> v8{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Block clock automatically during frequency change
        enum class AutoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,AutoblockVal> autoblock{}; 
        namespace AutoblockValC{
            constexpr Register::FieldValue<decltype(autoblock)::Type,AutoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr Register::FieldValue<decltype(autoblock)::Type,AutoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        ///Pre-divider division ratio
        enum class NselVal {
            v1=0x00000000,     ///<1
            v2=0x00000001,     ///<2
            v3Default=0x00000002,     ///<3 (default)
            v4=0x00000003,     ///<4
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,NselVal> nsel{}; 
        namespace NselValC{
            constexpr Register::FieldValue<decltype(nsel)::Type,NselVal::v1> v1{};
            constexpr Register::FieldValue<decltype(nsel)::Type,NselVal::v2> v2{};
            constexpr Register::FieldValue<decltype(nsel)::Type,NselVal::v3Default> v3Default{};
            constexpr Register::FieldValue<decltype(nsel)::Type,NselVal::v4> v4{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Feedback-divider division ratio (M) 00000000 = 1 00000001 = 2  ... 11111111 = 256
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> msel{}; 
        ///Clock-source selection.
        enum class ClkselVal {
            v32KhzOscillator=0x00000000,     ///<32 kHz oscillator
            ircDefault=0x00000001,     ///<IRC (default)
            enetRxClk=0x00000002,     ///<ENET_RX_CLK
            enetTxClk=0x00000003,     ///<ENET_TX_CLK
            gpClkin=0x00000004,     ///<GP_CLKIN
            crystalOscillator=0x00000006,     ///<crystal oscillator
            pll0=0x00000007,     ///<PLL0
            idiva=0x0000000c,     ///<IDIVA
            idivb=0x0000000d,     ///<IDIVB
            idivc=0x0000000e,     ///<IDIVC
            idivd=0x0000000f,     ///<IDIVD
            idive=0x00000010,     ///<IDIVE
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,ClkselVal> clkSel{}; 
        namespace ClkselValC{
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::ircDefault> ircDefault{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::enetRxClk> enetRxClk{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::enetTxClk> enetTxClk{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::gpClkin> gpClkin{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::crystalOscillator> crystalOscillator{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::pll0> pll0{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idiva> idiva{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivb> idivb{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivc> idivc{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivd> idivd{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idive> idive{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CguIdivaCtrl{    ///<Integer divider A control register
        using Addr = Register::Address<0x40050048,0x00000000,0x00000000,unsigned>;
        ///Integer divider A power down
        enum class PdVal {
            idivaEnabledDefau=0x00000000,     ///<IDIVA enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PdVal> pd{}; 
        namespace PdValC{
            constexpr Register::FieldValue<decltype(pd)::Type,PdVal::idivaEnabledDefau> idivaEnabledDefau{};
            constexpr Register::FieldValue<decltype(pd)::Type,PdVal::powerDown> powerDown{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Integer divider A divider values (1/(IDIV + 1))
        enum class IdivVal {
            v1Default=0x00000000,     ///<1 (default)
            v2=0x00000001,     ///<2
            v3=0x00000002,     ///<3
            v4=0x00000003,     ///<4
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,IdivVal> idiv{}; 
        namespace IdivValC{
            constexpr Register::FieldValue<decltype(idiv)::Type,IdivVal::v1Default> v1Default{};
            constexpr Register::FieldValue<decltype(idiv)::Type,IdivVal::v2> v2{};
            constexpr Register::FieldValue<decltype(idiv)::Type,IdivVal::v3> v3{};
            constexpr Register::FieldValue<decltype(idiv)::Type,IdivVal::v4> v4{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,4),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Block clock automatically during frequency change
        enum class AutoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,AutoblockVal> autoblock{}; 
        namespace AutoblockValC{
            constexpr Register::FieldValue<decltype(autoblock)::Type,AutoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr Register::FieldValue<decltype(autoblock)::Type,AutoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,12),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Clock source selection. All other values are reserved.
        enum class ClkselVal {
            v32KhzOscillator=0x00000000,     ///<32 kHz oscillator
            ircDefault=0x00000001,     ///<IRC (default)
            enetRxClk=0x00000002,     ///<ENET_RX_CLK
            enetTxClk=0x00000003,     ///<ENET_TX_CLK
            gpClkin=0x00000004,     ///<GP_CLKIN
            crystalOscillator=0x00000006,     ///<Crystal oscillator
            pll0ForUsb=0x00000007,     ///<PLL0 (for USB)
            pll0ForAudio=0x00000008,     ///<PLL0 (for audio)
            pll1=0x00000009,     ///<PLL1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,ClkselVal> clkSel{}; 
        namespace ClkselValC{
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::ircDefault> ircDefault{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::enetRxClk> enetRxClk{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::enetTxClk> enetTxClk{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::gpClkin> gpClkin{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::crystalOscillator> crystalOscillator{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::pll0ForUsb> pll0ForUsb{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::pll0ForAudio> pll0ForAudio{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::pll1> pll1{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CguIdivbCtrl{    ///<Integer divider B control register
        using Addr = Register::Address<0x4005004c,0x00000000,0x00000000,unsigned>;
        ///Integer divider power down
        enum class PdVal {
            idivEnabledDefaul=0x00000000,     ///<IDIV enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PdVal> pd{}; 
        namespace PdValC{
            constexpr Register::FieldValue<decltype(pd)::Type,PdVal::idivEnabledDefaul> idivEnabledDefaul{};
            constexpr Register::FieldValue<decltype(pd)::Type,PdVal::powerDown> powerDown{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Integer divider B, C, D divider values (1/(IDIV + 1)) 0000 = 1 (default) 0001 = 2  ... 1111 = 16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,2),Register::ReadWriteAccess,unsigned> idiv{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,6),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Block clock automatically during frequency change
        enum class AutoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,AutoblockVal> autoblock{}; 
        namespace AutoblockValC{
            constexpr Register::FieldValue<decltype(autoblock)::Type,AutoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr Register::FieldValue<decltype(autoblock)::Type,AutoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,12),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Clock-source selection. All other values are reserved.
        enum class ClkselVal {
            v32KhzOscillator=0x00000000,     ///<32 kHz oscillator
            ircDefault=0x00000001,     ///<IRC (default)
            enetRxClk=0x00000002,     ///<ENET_RX_CLK
            enetTxClk=0x00000003,     ///<ENET_TX_CLK
            gpClkin=0x00000004,     ///<GP_CLKIN
            crystalOscillator=0x00000006,     ///<Crystal oscillator
            pll0ForAudio=0x00000008,     ///<PLL0 (for audio)
            pll1=0x00000009,     ///<PLL1
            idiva=0x0000000c,     ///<IDIVA
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,ClkselVal> clkSel{}; 
        namespace ClkselValC{
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::ircDefault> ircDefault{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::enetRxClk> enetRxClk{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::enetTxClk> enetTxClk{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::gpClkin> gpClkin{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::crystalOscillator> crystalOscillator{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::pll0ForAudio> pll0ForAudio{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::pll1> pll1{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idiva> idiva{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CguIdivcCtrl{    ///<Integer divider C control register
        using Addr = Register::Address<0x40050450,0x00000000,0x00000000,unsigned>;
        ///Integer divider power down
        enum class PdVal {
            idivEnabledDefaul=0x00000000,     ///<IDIV enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PdVal> pd{}; 
        namespace PdValC{
            constexpr Register::FieldValue<decltype(pd)::Type,PdVal::idivEnabledDefaul> idivEnabledDefaul{};
            constexpr Register::FieldValue<decltype(pd)::Type,PdVal::powerDown> powerDown{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Integer divider B, C, D divider values (1/(IDIV + 1)) 0000 = 1 (default) 0001 = 2  ... 1111 = 16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,2),Register::ReadWriteAccess,unsigned> idiv{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,6),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Block clock automatically during frequency change
        enum class AutoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,AutoblockVal> autoblock{}; 
        namespace AutoblockValC{
            constexpr Register::FieldValue<decltype(autoblock)::Type,AutoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr Register::FieldValue<decltype(autoblock)::Type,AutoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,12),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Clock-source selection. All other values are reserved.
        enum class ClkselVal {
            v32KhzOscillator=0x00000000,     ///<32 kHz oscillator
            ircDefault=0x00000001,     ///<IRC (default)
            enetRxClk=0x00000002,     ///<ENET_RX_CLK
            enetTxClk=0x00000003,     ///<ENET_TX_CLK
            gpClkin=0x00000004,     ///<GP_CLKIN
            crystalOscillator=0x00000006,     ///<Crystal oscillator
            pll0audio=0x00000008,     ///<PLL0 (for audio)
            pll1=0x00000009,     ///<PLL1
            idiva=0x0000000c,     ///<IDIVA
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,ClkselVal> clkSel{}; 
        namespace ClkselValC{
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::ircDefault> ircDefault{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::enetRxClk> enetRxClk{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::enetTxClk> enetTxClk{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::gpClkin> gpClkin{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::crystalOscillator> crystalOscillator{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::pll0audio> pll0audio{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::pll1> pll1{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idiva> idiva{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CguIdivdCtrl{    ///<Integer divider D control register
        using Addr = Register::Address<0x40050454,0x00000000,0x00000000,unsigned>;
        ///Integer divider power down
        enum class PdVal {
            idivEnabledDefaul=0x00000000,     ///<IDIV enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PdVal> pd{}; 
        namespace PdValC{
            constexpr Register::FieldValue<decltype(pd)::Type,PdVal::idivEnabledDefaul> idivEnabledDefaul{};
            constexpr Register::FieldValue<decltype(pd)::Type,PdVal::powerDown> powerDown{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Integer divider B, C, D divider values (1/(IDIV + 1)) 0000 = 1 (default) 0001 = 2  ... 1111 = 16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,2),Register::ReadWriteAccess,unsigned> idiv{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,6),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Block clock automatically during frequency change
        enum class AutoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,AutoblockVal> autoblock{}; 
        namespace AutoblockValC{
            constexpr Register::FieldValue<decltype(autoblock)::Type,AutoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr Register::FieldValue<decltype(autoblock)::Type,AutoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,12),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Clock-source selection. All other values are reserved.
        enum class ClkselVal {
            v32KhzOscillator=0x00000000,     ///<32 kHz oscillator
            ircDefault=0x00000001,     ///<IRC (default)
            enetRxClk=0x00000002,     ///<ENET_RX_CLK
            enetTxClk=0x00000003,     ///<ENET_TX_CLK
            gpClkin=0x00000004,     ///<GP_CLKIN
            crystalOscillator=0x00000006,     ///<Crystal oscillator
            pll0audio=0x00000008,     ///<PLL0 (for audio)
            pll1=0x00000009,     ///<PLL1
            idiva=0x0000000c,     ///<IDIVA
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,ClkselVal> clkSel{}; 
        namespace ClkselValC{
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::ircDefault> ircDefault{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::enetRxClk> enetRxClk{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::enetTxClk> enetTxClk{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::gpClkin> gpClkin{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::crystalOscillator> crystalOscillator{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::pll0audio> pll0audio{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::pll1> pll1{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idiva> idiva{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CguIdiveCtrl{    ///<Integer divider E control register
        using Addr = Register::Address<0x40050058,0x00000000,0x00000000,unsigned>;
        ///Integer divider power down
        enum class PdVal {
            idivEnabledDefaul=0x00000000,     ///<IDIV enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PdVal> pd{}; 
        namespace PdValC{
            constexpr Register::FieldValue<decltype(pd)::Type,PdVal::idivEnabledDefaul> idivEnabledDefaul{};
            constexpr Register::FieldValue<decltype(pd)::Type,PdVal::powerDown> powerDown{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Integer divider E divider values (1/(IDIV + 1)) 00000000 = 1 (default) 00000001 = 2  ... 111111111 = 256
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,2),Register::ReadWriteAccess,unsigned> idiv{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Block clock automatically during frequency change
        enum class AutoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,AutoblockVal> autoblock{}; 
        namespace AutoblockValC{
            constexpr Register::FieldValue<decltype(autoblock)::Type,AutoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr Register::FieldValue<decltype(autoblock)::Type,AutoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,12),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Clock-source selection. All other values are reserved.
        enum class ClkselVal {
            v32KhzOscillator=0x00000000,     ///<32 kHz oscillator
            ircDefault=0x00000001,     ///<IRC (default)
            enetRxClk=0x00000002,     ///<ENET_RX_CLK
            enetTxClk=0x00000003,     ///<ENET_TX_CLK
            gpClkin=0x00000004,     ///<GP_CLKIN
            crystalOscillator=0x00000006,     ///<Crystal oscillator
            pll0ForAudio=0x00000008,     ///<PLL0 (for audio)
            pll1=0x00000009,     ///<PLL1
            idiva=0x0000000c,     ///<IDIVA
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,ClkselVal> clkSel{}; 
        namespace ClkselValC{
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::ircDefault> ircDefault{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::enetRxClk> enetRxClk{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::enetTxClk> enetTxClk{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::gpClkin> gpClkin{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::crystalOscillator> crystalOscillator{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::pll0ForAudio> pll0ForAudio{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::pll1> pll1{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idiva> idiva{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CguBaseSafeClk{    ///<Output stage 0 control register for base clock BASE_SAFE_CLK
        using Addr = Register::Address<0x4005005c,0x00000000,0x00000000,unsigned>;
        ///Output stage power down
        enum class PdVal {
            outputStageEnabled=0x00000000,     ///<Output stage enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PdVal> pd{}; 
        namespace PdValC{
            constexpr Register::FieldValue<decltype(pd)::Type,PdVal::outputStageEnabled> outputStageEnabled{};
            constexpr Register::FieldValue<decltype(pd)::Type,PdVal::powerDown> powerDown{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,1),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Block clock automatically during frequency change
        enum class AutoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,AutoblockVal> autoblock{}; 
        namespace AutoblockValC{
            constexpr Register::FieldValue<decltype(autoblock)::Type,AutoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr Register::FieldValue<decltype(autoblock)::Type,AutoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,12),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Clock source selection. All other values are reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> clkSel{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CguBaseUsb0Clk{    ///<Output stage 1 control register for base clock BASE_USB0_CLK
        using Addr = Register::Address<0x40050060,0x00000000,0x00000000,unsigned>;
        ///Output stage power down
        enum class PdVal {
            outputStageEnabled=0x00000000,     ///<Output stage enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PdVal> pd{}; 
        namespace PdValC{
            constexpr Register::FieldValue<decltype(pd)::Type,PdVal::outputStageEnabled> outputStageEnabled{};
            constexpr Register::FieldValue<decltype(pd)::Type,PdVal::powerDown> powerDown{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,1),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Block clock automatically during frequency change
        enum class AutoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,AutoblockVal> autoblock{}; 
        namespace AutoblockValC{
            constexpr Register::FieldValue<decltype(autoblock)::Type,AutoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr Register::FieldValue<decltype(autoblock)::Type,AutoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,12),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Clock-source selection.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> clkSel{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CguBasePeriphClk{    ///<Output stage 2 control register for base clock BASE_PERIPH_CLK
        using Addr = Register::Address<0x40050064,0x00000000,0x00000000,unsigned>;
        ///Output stage power down
        enum class PdVal {
            outputStageEnabled=0x00000000,     ///<Output stage enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PdVal> pd{}; 
        namespace PdValC{
            constexpr Register::FieldValue<decltype(pd)::Type,PdVal::outputStageEnabled> outputStageEnabled{};
            constexpr Register::FieldValue<decltype(pd)::Type,PdVal::powerDown> powerDown{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,1),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Block clock automatically during frequency change
        enum class AutoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,AutoblockVal> autoblock{}; 
        namespace AutoblockValC{
            constexpr Register::FieldValue<decltype(autoblock)::Type,AutoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr Register::FieldValue<decltype(autoblock)::Type,AutoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,12),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Clock source selection. All other values are reserved.
        enum class ClkselVal {
            v32KhzOscillator=0x00000000,     ///<32 kHz oscillator
            ircDefault=0x00000001,     ///<IRC (default)
            enetRxClk=0x00000002,     ///<ENET_RX_CLK
            enetTxClk=0x00000003,     ///<ENET_TX_CLK
            gpClkin=0x00000004,     ///<GP_CLKIN
            crystalOscillator=0x00000006,     ///<Crystal oscillator
            pll0ForAudio=0x00000008,     ///<PLL0 (for audio)
            pll1=0x00000009,     ///<PLL1
            idiva=0x0000000c,     ///<IDIVA
            idivb=0x0000000d,     ///<IDIVB
            idivc=0x0000000e,     ///<IDIVC
            idivd=0x0000000f,     ///<IDIVD
            idive=0x00000010,     ///<IDIVE
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,ClkselVal> clkSel{}; 
        namespace ClkselValC{
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::ircDefault> ircDefault{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::enetRxClk> enetRxClk{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::enetTxClk> enetTxClk{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::gpClkin> gpClkin{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::crystalOscillator> crystalOscillator{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::pll0ForAudio> pll0ForAudio{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::pll1> pll1{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idiva> idiva{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivb> idivb{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivc> idivc{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivd> idivd{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idive> idive{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CguBaseUsb1Clk{    ///<Output stage 3 control register for base clock BASE_USB1_CLK
        using Addr = Register::Address<0x40050068,0x00000000,0x00000000,unsigned>;
        ///Output stage power down
        enum class PdVal {
            outputStageEnabled=0x00000000,     ///<Output stage enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PdVal> pd{}; 
        namespace PdValC{
            constexpr Register::FieldValue<decltype(pd)::Type,PdVal::outputStageEnabled> outputStageEnabled{};
            constexpr Register::FieldValue<decltype(pd)::Type,PdVal::powerDown> powerDown{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,1),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Block clock automatically during frequency change
        enum class AutoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,AutoblockVal> autoblock{}; 
        namespace AutoblockValC{
            constexpr Register::FieldValue<decltype(autoblock)::Type,AutoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr Register::FieldValue<decltype(autoblock)::Type,AutoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,12),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Clock source selection. All other values are reserved.
        enum class ClkselVal {
            v32KhzOscillator=0x00000000,     ///<32 kHz oscillator
            ircDefault=0x00000001,     ///<IRC (default)
            enetRxClk=0x00000002,     ///<ENET_RX_CLK
            enetTxClk=0x00000003,     ///<ENET_TX_CLK
            gpClkin=0x00000004,     ///<GP_CLKIN
            crystalOscillator=0x00000006,     ///<Crystal oscillator
            pll0ForUsb=0x00000007,     ///<PLL0 (for USB)
            pll0ForAudio=0x00000008,     ///<PLL0 (for audio)
            pll1=0x00000009,     ///<PLL1
            idiva=0x0000000c,     ///<IDIVA
            idivb=0x0000000d,     ///<IDIVB
            idivc=0x0000000e,     ///<IDIVC
            idivd=0x0000000f,     ///<IDIVD
            idive=0x00000010,     ///<IDIVE
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,ClkselVal> clkSel{}; 
        namespace ClkselValC{
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::ircDefault> ircDefault{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::enetRxClk> enetRxClk{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::enetTxClk> enetTxClk{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::gpClkin> gpClkin{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::crystalOscillator> crystalOscillator{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::pll0ForUsb> pll0ForUsb{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::pll0ForAudio> pll0ForAudio{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::pll1> pll1{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idiva> idiva{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivb> idivb{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivc> idivc{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivd> idivd{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idive> idive{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CguBaseM4Clk{    ///<Output stage BASE_M4_CLK control register
        using Addr = Register::Address<0x4005006c,0x00000000,0x00000000,unsigned>;
        ///Output stage power down
        enum class PdVal {
            outputStageEnabled=0x00000000,     ///<Output stage enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PdVal> pd{}; 
        namespace PdValC{
            constexpr Register::FieldValue<decltype(pd)::Type,PdVal::outputStageEnabled> outputStageEnabled{};
            constexpr Register::FieldValue<decltype(pd)::Type,PdVal::powerDown> powerDown{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,1),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Block clock automatically during frequency change
        enum class AutoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,AutoblockVal> autoblock{}; 
        namespace AutoblockValC{
            constexpr Register::FieldValue<decltype(autoblock)::Type,AutoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr Register::FieldValue<decltype(autoblock)::Type,AutoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,12),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Clock source selection. All other values are reserved.
        enum class ClkselVal {
            v32KhzOscillator=0x00000000,     ///<32 kHz oscillator
            ircDefault=0x00000001,     ///<IRC (default)
            enetRxClk=0x00000002,     ///<ENET_RX_CLK
            enetTxClk=0x00000003,     ///<ENET_TX_CLK
            gpClkin=0x00000004,     ///<GP_CLKIN
            crystalOscillator=0x00000006,     ///<Crystal oscillator
            pll0ForAudio=0x00000008,     ///<PLL0 (for audio)
            pll1=0x00000009,     ///<PLL1
            idiva=0x0000000c,     ///<IDIVA
            idivb=0x0000000d,     ///<IDIVB
            idivc=0x0000000e,     ///<IDIVC
            idivd=0x0000000f,     ///<IDIVD
            idive=0x00000010,     ///<IDIVE
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,ClkselVal> clkSel{}; 
        namespace ClkselValC{
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::ircDefault> ircDefault{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::enetRxClk> enetRxClk{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::enetTxClk> enetTxClk{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::gpClkin> gpClkin{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::crystalOscillator> crystalOscillator{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::pll0ForAudio> pll0ForAudio{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::pll1> pll1{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idiva> idiva{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivb> idivb{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivc> idivc{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivd> idivd{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idive> idive{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CguBaseSpifiClk{    ///<Output stage BASE_SPIFI_CLK control register
        using Addr = Register::Address<0x40050070,0x00000000,0x00000000,unsigned>;
        ///Output stage power down
        enum class PdVal {
            outputStageEnabled=0x00000000,     ///<Output stage enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PdVal> pd{}; 
        namespace PdValC{
            constexpr Register::FieldValue<decltype(pd)::Type,PdVal::outputStageEnabled> outputStageEnabled{};
            constexpr Register::FieldValue<decltype(pd)::Type,PdVal::powerDown> powerDown{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,1),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Block clock automatically during frequency change
        enum class AutoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,AutoblockVal> autoblock{}; 
        namespace AutoblockValC{
            constexpr Register::FieldValue<decltype(autoblock)::Type,AutoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr Register::FieldValue<decltype(autoblock)::Type,AutoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,12),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Clock source selection. All other values are reserved.
        enum class ClkselVal {
            v32KhzOscillator=0x00000000,     ///<32 kHz oscillator
            ircDefault=0x00000001,     ///<IRC (default)
            enetRxClk=0x00000002,     ///<ENET_RX_CLK
            enetTxClk=0x00000003,     ///<ENET_TX_CLK
            gpClkin=0x00000004,     ///<GP_CLKIN
            crystalOscillator=0x00000006,     ///<Crystal oscillator
            pll0ForAudio=0x00000008,     ///<PLL0 (for audio)
            pll1=0x00000009,     ///<PLL1
            idiva=0x0000000c,     ///<IDIVA
            idivb=0x0000000d,     ///<IDIVB
            idivc=0x0000000e,     ///<IDIVC
            idivd=0x0000000f,     ///<IDIVD
            idive=0x00000010,     ///<IDIVE
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,ClkselVal> clkSel{}; 
        namespace ClkselValC{
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::ircDefault> ircDefault{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::enetRxClk> enetRxClk{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::enetTxClk> enetTxClk{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::gpClkin> gpClkin{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::crystalOscillator> crystalOscillator{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::pll0ForAudio> pll0ForAudio{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::pll1> pll1{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idiva> idiva{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivb> idivb{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivc> idivc{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivd> idivd{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idive> idive{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CguBaseSpiClk{    ///<Output stage BASE_SPI_CLK control register
        using Addr = Register::Address<0x40050074,0x00000000,0x00000000,unsigned>;
        ///Output stage power down
        enum class PdVal {
            outputStageEnabled=0x00000000,     ///<Output stage enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PdVal> pd{}; 
        namespace PdValC{
            constexpr Register::FieldValue<decltype(pd)::Type,PdVal::outputStageEnabled> outputStageEnabled{};
            constexpr Register::FieldValue<decltype(pd)::Type,PdVal::powerDown> powerDown{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,1),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Block clock automatically during frequency change
        enum class AutoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,AutoblockVal> autoblock{}; 
        namespace AutoblockValC{
            constexpr Register::FieldValue<decltype(autoblock)::Type,AutoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr Register::FieldValue<decltype(autoblock)::Type,AutoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,12),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Clock source selection. All other values are reserved.
        enum class ClkselVal {
            v32KhzOscillator=0x00000000,     ///<32 kHz oscillator
            ircDefault=0x00000001,     ///<IRC (default)
            enetRxClk=0x00000002,     ///<ENET_RX_CLK
            enetTxClk=0x00000003,     ///<ENET_TX_CLK
            gpClkin=0x00000004,     ///<GP_CLKIN
            crystalOscillator=0x00000006,     ///<Crystal oscillator
            pll0ForAudio=0x00000008,     ///<PLL0 (for audio)
            pll1=0x00000009,     ///<PLL1
            idiva=0x0000000c,     ///<IDIVA
            idivb=0x0000000d,     ///<IDIVB
            idivc=0x0000000e,     ///<IDIVC
            idivd=0x0000000f,     ///<IDIVD
            idive=0x00000010,     ///<IDIVE
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,ClkselVal> clkSel{}; 
        namespace ClkselValC{
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::ircDefault> ircDefault{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::enetRxClk> enetRxClk{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::enetTxClk> enetTxClk{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::gpClkin> gpClkin{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::crystalOscillator> crystalOscillator{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::pll0ForAudio> pll0ForAudio{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::pll1> pll1{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idiva> idiva{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivb> idivb{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivc> idivc{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivd> idivd{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idive> idive{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CguBasePhyRxClk{    ///<Output stage BASE_PHY_RX_CLK control register
        using Addr = Register::Address<0x40050078,0x00000000,0x00000000,unsigned>;
        ///Output stage power down
        enum class PdVal {
            outputStageEnabled=0x00000000,     ///<Output stage enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PdVal> pd{}; 
        namespace PdValC{
            constexpr Register::FieldValue<decltype(pd)::Type,PdVal::outputStageEnabled> outputStageEnabled{};
            constexpr Register::FieldValue<decltype(pd)::Type,PdVal::powerDown> powerDown{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,1),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Block clock automatically during frequency change
        enum class AutoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,AutoblockVal> autoblock{}; 
        namespace AutoblockValC{
            constexpr Register::FieldValue<decltype(autoblock)::Type,AutoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr Register::FieldValue<decltype(autoblock)::Type,AutoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,12),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Clock source selection. All other values are reserved.
        enum class ClkselVal {
            v32KhzOscillator=0x00000000,     ///<32 kHz oscillator
            ircDefault=0x00000001,     ///<IRC (default)
            enetRxClk=0x00000002,     ///<ENET_RX_CLK
            enetTxClk=0x00000003,     ///<ENET_TX_CLK
            gpClkin=0x00000004,     ///<GP_CLKIN
            crystalOscillator=0x00000006,     ///<Crystal oscillator
            pll0ForAudio=0x00000008,     ///<PLL0 (for audio)
            pll1=0x00000009,     ///<PLL1
            idiva=0x0000000c,     ///<IDIVA
            idivb=0x0000000d,     ///<IDIVB
            idivc=0x0000000e,     ///<IDIVC
            idivd=0x0000000f,     ///<IDIVD
            idive=0x00000010,     ///<IDIVE
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,ClkselVal> clkSel{}; 
        namespace ClkselValC{
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::ircDefault> ircDefault{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::enetRxClk> enetRxClk{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::enetTxClk> enetTxClk{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::gpClkin> gpClkin{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::crystalOscillator> crystalOscillator{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::pll0ForAudio> pll0ForAudio{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::pll1> pll1{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idiva> idiva{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivb> idivb{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivc> idivc{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivd> idivd{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idive> idive{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CguBasePhyTxClk{    ///<Output stage BASE_PHY_TX_CLK control register
        using Addr = Register::Address<0x4005007c,0x00000000,0x00000000,unsigned>;
        ///Output stage power down
        enum class PdVal {
            outputStageEnabled=0x00000000,     ///<Output stage enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PdVal> pd{}; 
        namespace PdValC{
            constexpr Register::FieldValue<decltype(pd)::Type,PdVal::outputStageEnabled> outputStageEnabled{};
            constexpr Register::FieldValue<decltype(pd)::Type,PdVal::powerDown> powerDown{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,1),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Block clock automatically during frequency change
        enum class AutoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,AutoblockVal> autoblock{}; 
        namespace AutoblockValC{
            constexpr Register::FieldValue<decltype(autoblock)::Type,AutoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr Register::FieldValue<decltype(autoblock)::Type,AutoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,12),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Clock source selection. All other values are reserved.
        enum class ClkselVal {
            v32KhzOscillator=0x00000000,     ///<32 kHz oscillator
            ircDefault=0x00000001,     ///<IRC (default)
            enetRxClk=0x00000002,     ///<ENET_RX_CLK
            enetTxClk=0x00000003,     ///<ENET_TX_CLK
            gpClkin=0x00000004,     ///<GP_CLKIN
            crystalOscillator=0x00000006,     ///<Crystal oscillator
            pll0ForAudio=0x00000008,     ///<PLL0 (for audio)
            pll1=0x00000009,     ///<PLL1
            idiva=0x0000000c,     ///<IDIVA
            idivb=0x0000000d,     ///<IDIVB
            idivc=0x0000000e,     ///<IDIVC
            idivd=0x0000000f,     ///<IDIVD
            idive=0x00000010,     ///<IDIVE
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,ClkselVal> clkSel{}; 
        namespace ClkselValC{
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::ircDefault> ircDefault{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::enetRxClk> enetRxClk{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::enetTxClk> enetTxClk{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::gpClkin> gpClkin{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::crystalOscillator> crystalOscillator{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::pll0ForAudio> pll0ForAudio{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::pll1> pll1{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idiva> idiva{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivb> idivb{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivc> idivc{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivd> idivd{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idive> idive{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CguBaseApb1Clk{    ///<Output stage BASE_APB1_CLK control register
        using Addr = Register::Address<0x40050080,0x00000000,0x00000000,unsigned>;
        ///Output stage power down
        enum class PdVal {
            outputStageEnabled=0x00000000,     ///<Output stage enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PdVal> pd{}; 
        namespace PdValC{
            constexpr Register::FieldValue<decltype(pd)::Type,PdVal::outputStageEnabled> outputStageEnabled{};
            constexpr Register::FieldValue<decltype(pd)::Type,PdVal::powerDown> powerDown{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,1),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Block clock automatically during frequency change
        enum class AutoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,AutoblockVal> autoblock{}; 
        namespace AutoblockValC{
            constexpr Register::FieldValue<decltype(autoblock)::Type,AutoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr Register::FieldValue<decltype(autoblock)::Type,AutoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,12),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Clock source selection. All other values are reserved.
        enum class ClkselVal {
            v32KhzOscillator=0x00000000,     ///<32 kHz oscillator
            ircDefault=0x00000001,     ///<IRC (default)
            enetRxClk=0x00000002,     ///<ENET_RX_CLK
            enetTxClk=0x00000003,     ///<ENET_TX_CLK
            gpClkin=0x00000004,     ///<GP_CLKIN
            crystalOscillator=0x00000006,     ///<Crystal oscillator
            pll0ForAudio=0x00000008,     ///<PLL0 (for audio)
            pll1=0x00000009,     ///<PLL1
            idiva=0x0000000c,     ///<IDIVA
            idivb=0x0000000d,     ///<IDIVB
            idivc=0x0000000e,     ///<IDIVC
            idivd=0x0000000f,     ///<IDIVD
            idive=0x00000010,     ///<IDIVE
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,ClkselVal> clkSel{}; 
        namespace ClkselValC{
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::ircDefault> ircDefault{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::enetRxClk> enetRxClk{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::enetTxClk> enetTxClk{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::gpClkin> gpClkin{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::crystalOscillator> crystalOscillator{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::pll0ForAudio> pll0ForAudio{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::pll1> pll1{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idiva> idiva{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivb> idivb{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivc> idivc{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivd> idivd{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idive> idive{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CguBaseApb3Clk{    ///<Output stage BASE_APB3_CLK control register
        using Addr = Register::Address<0x40050084,0x00000000,0x00000000,unsigned>;
        ///Output stage power down
        enum class PdVal {
            outputStageEnabled=0x00000000,     ///<Output stage enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PdVal> pd{}; 
        namespace PdValC{
            constexpr Register::FieldValue<decltype(pd)::Type,PdVal::outputStageEnabled> outputStageEnabled{};
            constexpr Register::FieldValue<decltype(pd)::Type,PdVal::powerDown> powerDown{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,1),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Block clock automatically during frequency change
        enum class AutoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,AutoblockVal> autoblock{}; 
        namespace AutoblockValC{
            constexpr Register::FieldValue<decltype(autoblock)::Type,AutoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr Register::FieldValue<decltype(autoblock)::Type,AutoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,12),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Clock source selection. All other values are reserved.
        enum class ClkselVal {
            v32KhzOscillator=0x00000000,     ///<32 kHz oscillator
            ircDefault=0x00000001,     ///<IRC (default)
            enetRxClk=0x00000002,     ///<ENET_RX_CLK
            enetTxClk=0x00000003,     ///<ENET_TX_CLK
            gpClkin=0x00000004,     ///<GP_CLKIN
            crystalOscillator=0x00000006,     ///<Crystal oscillator
            pll0ForAudio=0x00000008,     ///<PLL0 (for audio)
            pll1=0x00000009,     ///<PLL1
            idiva=0x0000000c,     ///<IDIVA
            idivb=0x0000000d,     ///<IDIVB
            idivc=0x0000000e,     ///<IDIVC
            idivd=0x0000000f,     ///<IDIVD
            idive=0x00000010,     ///<IDIVE
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,ClkselVal> clkSel{}; 
        namespace ClkselValC{
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::ircDefault> ircDefault{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::enetRxClk> enetRxClk{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::enetTxClk> enetTxClk{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::gpClkin> gpClkin{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::crystalOscillator> crystalOscillator{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::pll0ForAudio> pll0ForAudio{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::pll1> pll1{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idiva> idiva{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivb> idivb{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivc> idivc{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivd> idivd{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idive> idive{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CguBaseLcdClk{    ///<Output stage BASE_LCD_CLK control register
        using Addr = Register::Address<0x40050088,0x00000000,0x00000000,unsigned>;
        ///Output stage power down
        enum class PdVal {
            outputStageEnabled=0x00000000,     ///<Output stage enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PdVal> pd{}; 
        namespace PdValC{
            constexpr Register::FieldValue<decltype(pd)::Type,PdVal::outputStageEnabled> outputStageEnabled{};
            constexpr Register::FieldValue<decltype(pd)::Type,PdVal::powerDown> powerDown{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,1),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Block clock automatically during frequency change
        enum class AutoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,AutoblockVal> autoblock{}; 
        namespace AutoblockValC{
            constexpr Register::FieldValue<decltype(autoblock)::Type,AutoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr Register::FieldValue<decltype(autoblock)::Type,AutoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,12),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Clock source selection. All other values are reserved.
        enum class ClkselVal {
            v32KhzOscillator=0x00000000,     ///<32 kHz oscillator
            ircDefault=0x00000001,     ///<IRC (default)
            enetRxClk=0x00000002,     ///<ENET_RX_CLK
            enetTxClk=0x00000003,     ///<ENET_TX_CLK
            gpClkin=0x00000004,     ///<GP_CLKIN
            crystalOscillator=0x00000006,     ///<Crystal oscillator
            pll0ForAudio=0x00000008,     ///<PLL0 (for audio)
            pll1=0x00000009,     ///<PLL1
            idiva=0x0000000c,     ///<IDIVA
            idivb=0x0000000d,     ///<IDIVB
            idivc=0x0000000e,     ///<IDIVC
            idivd=0x0000000f,     ///<IDIVD
            idive=0x00000010,     ///<IDIVE
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,ClkselVal> clkSel{}; 
        namespace ClkselValC{
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::ircDefault> ircDefault{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::enetRxClk> enetRxClk{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::enetTxClk> enetTxClk{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::gpClkin> gpClkin{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::crystalOscillator> crystalOscillator{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::pll0ForAudio> pll0ForAudio{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::pll1> pll1{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idiva> idiva{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivb> idivb{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivc> idivc{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivd> idivd{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idive> idive{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CguBaseSdioClk{    ///<Output stage BASE_SDIO_CLK control register
        using Addr = Register::Address<0x40050090,0x00000000,0x00000000,unsigned>;
        ///Output stage power down
        enum class PdVal {
            outputStageEnabled=0x00000000,     ///<Output stage enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PdVal> pd{}; 
        namespace PdValC{
            constexpr Register::FieldValue<decltype(pd)::Type,PdVal::outputStageEnabled> outputStageEnabled{};
            constexpr Register::FieldValue<decltype(pd)::Type,PdVal::powerDown> powerDown{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,1),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Block clock automatically during frequency change
        enum class AutoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,AutoblockVal> autoblock{}; 
        namespace AutoblockValC{
            constexpr Register::FieldValue<decltype(autoblock)::Type,AutoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr Register::FieldValue<decltype(autoblock)::Type,AutoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,12),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Clock source selection. All other values are reserved.
        enum class ClkselVal {
            v32KhzOscillator=0x00000000,     ///<32 kHz oscillator
            ircDefault=0x00000001,     ///<IRC (default)
            enetRxClk=0x00000002,     ///<ENET_RX_CLK
            enetTxClk=0x00000003,     ///<ENET_TX_CLK
            gpClkin=0x00000004,     ///<GP_CLKIN
            crystalOscillator=0x00000006,     ///<Crystal oscillator
            pll0ForAudio=0x00000008,     ///<PLL0 (for audio)
            pll1=0x00000009,     ///<PLL1
            idiva=0x0000000c,     ///<IDIVA
            idivb=0x0000000d,     ///<IDIVB
            idivc=0x0000000e,     ///<IDIVC
            idivd=0x0000000f,     ///<IDIVD
            idive=0x00000010,     ///<IDIVE
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,ClkselVal> clkSel{}; 
        namespace ClkselValC{
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::ircDefault> ircDefault{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::enetRxClk> enetRxClk{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::enetTxClk> enetTxClk{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::gpClkin> gpClkin{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::crystalOscillator> crystalOscillator{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::pll0ForAudio> pll0ForAudio{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::pll1> pll1{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idiva> idiva{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivb> idivb{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivc> idivc{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivd> idivd{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idive> idive{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CguBaseSsp0Clk{    ///<Output stage BASE_SSP0_CLK control register
        using Addr = Register::Address<0x40050094,0x00000000,0x00000000,unsigned>;
        ///Output stage power down
        enum class PdVal {
            outputStageEnabled=0x00000000,     ///<Output stage enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PdVal> pd{}; 
        namespace PdValC{
            constexpr Register::FieldValue<decltype(pd)::Type,PdVal::outputStageEnabled> outputStageEnabled{};
            constexpr Register::FieldValue<decltype(pd)::Type,PdVal::powerDown> powerDown{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,1),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Block clock automatically during frequency change
        enum class AutoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,AutoblockVal> autoblock{}; 
        namespace AutoblockValC{
            constexpr Register::FieldValue<decltype(autoblock)::Type,AutoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr Register::FieldValue<decltype(autoblock)::Type,AutoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,12),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Clock source selection. All other values are reserved.
        enum class ClkselVal {
            v32KhzOscillator=0x00000000,     ///<32 kHz oscillator
            ircDefault=0x00000001,     ///<IRC (default)
            enetRxClk=0x00000002,     ///<ENET_RX_CLK
            enetTxClk=0x00000003,     ///<ENET_TX_CLK
            gpClkin=0x00000004,     ///<GP_CLKIN
            crystalOscillator=0x00000006,     ///<Crystal oscillator
            pll0ForAudio=0x00000008,     ///<PLL0 (for audio)
            pll1=0x00000009,     ///<PLL1
            idiva=0x0000000c,     ///<IDIVA
            idivb=0x0000000d,     ///<IDIVB
            idivc=0x0000000e,     ///<IDIVC
            idivd=0x0000000f,     ///<IDIVD
            idive=0x00000010,     ///<IDIVE
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,ClkselVal> clkSel{}; 
        namespace ClkselValC{
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::ircDefault> ircDefault{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::enetRxClk> enetRxClk{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::enetTxClk> enetTxClk{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::gpClkin> gpClkin{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::crystalOscillator> crystalOscillator{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::pll0ForAudio> pll0ForAudio{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::pll1> pll1{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idiva> idiva{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivb> idivb{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivc> idivc{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivd> idivd{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idive> idive{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CguBaseSsp1Clk{    ///<Output stage BASE_SSP1_CLK control register
        using Addr = Register::Address<0x40050098,0x00000000,0x00000000,unsigned>;
        ///Output stage power down
        enum class PdVal {
            outputStageEnabled=0x00000000,     ///<Output stage enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PdVal> pd{}; 
        namespace PdValC{
            constexpr Register::FieldValue<decltype(pd)::Type,PdVal::outputStageEnabled> outputStageEnabled{};
            constexpr Register::FieldValue<decltype(pd)::Type,PdVal::powerDown> powerDown{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,1),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Block clock automatically during frequency change
        enum class AutoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,AutoblockVal> autoblock{}; 
        namespace AutoblockValC{
            constexpr Register::FieldValue<decltype(autoblock)::Type,AutoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr Register::FieldValue<decltype(autoblock)::Type,AutoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,12),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Clock source selection. All other values are reserved.
        enum class ClkselVal {
            v32KhzOscillator=0x00000000,     ///<32 kHz oscillator
            ircDefault=0x00000001,     ///<IRC (default)
            enetRxClk=0x00000002,     ///<ENET_RX_CLK
            enetTxClk=0x00000003,     ///<ENET_TX_CLK
            gpClkin=0x00000004,     ///<GP_CLKIN
            crystalOscillator=0x00000006,     ///<Crystal oscillator
            pll0ForAudio=0x00000008,     ///<PLL0 (for audio)
            pll1=0x00000009,     ///<PLL1
            idiva=0x0000000c,     ///<IDIVA
            idivb=0x0000000d,     ///<IDIVB
            idivc=0x0000000e,     ///<IDIVC
            idivd=0x0000000f,     ///<IDIVD
            idive=0x00000010,     ///<IDIVE
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,ClkselVal> clkSel{}; 
        namespace ClkselValC{
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::ircDefault> ircDefault{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::enetRxClk> enetRxClk{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::enetTxClk> enetTxClk{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::gpClkin> gpClkin{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::crystalOscillator> crystalOscillator{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::pll0ForAudio> pll0ForAudio{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::pll1> pll1{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idiva> idiva{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivb> idivb{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivc> idivc{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivd> idivd{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idive> idive{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CguBaseUart0Clk{    ///<Output stage BASE_UART0_CLK control register
        using Addr = Register::Address<0x4005009c,0x00000000,0x00000000,unsigned>;
        ///Output stage power down
        enum class PdVal {
            outputStageEnabled=0x00000000,     ///<Output stage enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PdVal> pd{}; 
        namespace PdValC{
            constexpr Register::FieldValue<decltype(pd)::Type,PdVal::outputStageEnabled> outputStageEnabled{};
            constexpr Register::FieldValue<decltype(pd)::Type,PdVal::powerDown> powerDown{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,1),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Block clock automatically during frequency change
        enum class AutoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,AutoblockVal> autoblock{}; 
        namespace AutoblockValC{
            constexpr Register::FieldValue<decltype(autoblock)::Type,AutoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr Register::FieldValue<decltype(autoblock)::Type,AutoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,12),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Clock source selection. All other values are reserved.
        enum class ClkselVal {
            v32KhzOscillator=0x00000000,     ///<32 kHz oscillator
            ircDefault=0x00000001,     ///<IRC (default)
            enetRxClk=0x00000002,     ///<ENET_RX_CLK
            enetTxClk=0x00000003,     ///<ENET_TX_CLK
            gpClkin=0x00000004,     ///<GP_CLKIN
            crystalOscillator=0x00000006,     ///<Crystal oscillator
            pll0ForAudio=0x00000008,     ///<PLL0 (for audio)
            pll1=0x00000009,     ///<PLL1
            idiva=0x0000000c,     ///<IDIVA
            idivb=0x0000000d,     ///<IDIVB
            idivc=0x0000000e,     ///<IDIVC
            idivd=0x0000000f,     ///<IDIVD
            idive=0x00000010,     ///<IDIVE
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,ClkselVal> clkSel{}; 
        namespace ClkselValC{
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::ircDefault> ircDefault{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::enetRxClk> enetRxClk{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::enetTxClk> enetTxClk{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::gpClkin> gpClkin{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::crystalOscillator> crystalOscillator{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::pll0ForAudio> pll0ForAudio{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::pll1> pll1{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idiva> idiva{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivb> idivb{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivc> idivc{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivd> idivd{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idive> idive{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CguBaseUart1Clk{    ///<Output stage BASE_UART1_CLK control register
        using Addr = Register::Address<0x400500a0,0x00000000,0x00000000,unsigned>;
        ///Output stage power down
        enum class PdVal {
            outputStageEnabled=0x00000000,     ///<Output stage enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PdVal> pd{}; 
        namespace PdValC{
            constexpr Register::FieldValue<decltype(pd)::Type,PdVal::outputStageEnabled> outputStageEnabled{};
            constexpr Register::FieldValue<decltype(pd)::Type,PdVal::powerDown> powerDown{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,1),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Block clock automatically during frequency change
        enum class AutoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,AutoblockVal> autoblock{}; 
        namespace AutoblockValC{
            constexpr Register::FieldValue<decltype(autoblock)::Type,AutoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr Register::FieldValue<decltype(autoblock)::Type,AutoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,12),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Clock source selection. All other values are reserved.
        enum class ClkselVal {
            v32KhzOscillator=0x00000000,     ///<32 kHz oscillator
            ircDefault=0x00000001,     ///<IRC (default)
            enetRxClk=0x00000002,     ///<ENET_RX_CLK
            enetTxClk=0x00000003,     ///<ENET_TX_CLK
            gpClkin=0x00000004,     ///<GP_CLKIN
            crystalOscillator=0x00000006,     ///<Crystal oscillator
            pll0ForAudio=0x00000008,     ///<PLL0 (for audio)
            pll1=0x00000009,     ///<PLL1
            idiva=0x0000000c,     ///<IDIVA
            idivb=0x0000000d,     ///<IDIVB
            idivc=0x0000000e,     ///<IDIVC
            idivd=0x0000000f,     ///<IDIVD
            idive=0x00000010,     ///<IDIVE
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,ClkselVal> clkSel{}; 
        namespace ClkselValC{
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::ircDefault> ircDefault{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::enetRxClk> enetRxClk{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::enetTxClk> enetTxClk{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::gpClkin> gpClkin{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::crystalOscillator> crystalOscillator{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::pll0ForAudio> pll0ForAudio{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::pll1> pll1{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idiva> idiva{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivb> idivb{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivc> idivc{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivd> idivd{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idive> idive{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CguBaseUart2Clk{    ///<Output stage BASE_UART2_CLK control register
        using Addr = Register::Address<0x400500a4,0x00000000,0x00000000,unsigned>;
        ///Output stage power down
        enum class PdVal {
            outputStageEnabled=0x00000000,     ///<Output stage enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PdVal> pd{}; 
        namespace PdValC{
            constexpr Register::FieldValue<decltype(pd)::Type,PdVal::outputStageEnabled> outputStageEnabled{};
            constexpr Register::FieldValue<decltype(pd)::Type,PdVal::powerDown> powerDown{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,1),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Block clock automatically during frequency change
        enum class AutoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,AutoblockVal> autoblock{}; 
        namespace AutoblockValC{
            constexpr Register::FieldValue<decltype(autoblock)::Type,AutoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr Register::FieldValue<decltype(autoblock)::Type,AutoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,12),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Clock source selection. All other values are reserved.
        enum class ClkselVal {
            v32KhzOscillator=0x00000000,     ///<32 kHz oscillator
            ircDefault=0x00000001,     ///<IRC (default)
            enetRxClk=0x00000002,     ///<ENET_RX_CLK
            enetTxClk=0x00000003,     ///<ENET_TX_CLK
            gpClkin=0x00000004,     ///<GP_CLKIN
            crystalOscillator=0x00000006,     ///<Crystal oscillator
            pll0ForAudio=0x00000008,     ///<PLL0 (for audio)
            pll1=0x00000009,     ///<PLL1
            idiva=0x0000000c,     ///<IDIVA
            idivb=0x0000000d,     ///<IDIVB
            idivc=0x0000000e,     ///<IDIVC
            idivd=0x0000000f,     ///<IDIVD
            idive=0x00000010,     ///<IDIVE
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,ClkselVal> clkSel{}; 
        namespace ClkselValC{
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::ircDefault> ircDefault{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::enetRxClk> enetRxClk{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::enetTxClk> enetTxClk{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::gpClkin> gpClkin{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::crystalOscillator> crystalOscillator{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::pll0ForAudio> pll0ForAudio{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::pll1> pll1{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idiva> idiva{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivb> idivb{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivc> idivc{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivd> idivd{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idive> idive{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CguBaseUart3Clk{    ///<Output stage BASE_UART3_CLK control register
        using Addr = Register::Address<0x400500a8,0x00000000,0x00000000,unsigned>;
        ///Output stage power down
        enum class PdVal {
            outputStageEnabled=0x00000000,     ///<Output stage enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PdVal> pd{}; 
        namespace PdValC{
            constexpr Register::FieldValue<decltype(pd)::Type,PdVal::outputStageEnabled> outputStageEnabled{};
            constexpr Register::FieldValue<decltype(pd)::Type,PdVal::powerDown> powerDown{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,1),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Block clock automatically during frequency change
        enum class AutoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,AutoblockVal> autoblock{}; 
        namespace AutoblockValC{
            constexpr Register::FieldValue<decltype(autoblock)::Type,AutoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr Register::FieldValue<decltype(autoblock)::Type,AutoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,12),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Clock source selection. All other values are reserved.
        enum class ClkselVal {
            v32KhzOscillator=0x00000000,     ///<32 kHz oscillator
            ircDefault=0x00000001,     ///<IRC (default)
            enetRxClk=0x00000002,     ///<ENET_RX_CLK
            enetTxClk=0x00000003,     ///<ENET_TX_CLK
            gpClkin=0x00000004,     ///<GP_CLKIN
            crystalOscillator=0x00000006,     ///<Crystal oscillator
            pll0ForAudio=0x00000008,     ///<PLL0 (for audio)
            pll1=0x00000009,     ///<PLL1
            idiva=0x0000000c,     ///<IDIVA
            idivb=0x0000000d,     ///<IDIVB
            idivc=0x0000000e,     ///<IDIVC
            idivd=0x0000000f,     ///<IDIVD
            idive=0x00000010,     ///<IDIVE
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,ClkselVal> clkSel{}; 
        namespace ClkselValC{
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::ircDefault> ircDefault{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::enetRxClk> enetRxClk{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::enetTxClk> enetTxClk{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::gpClkin> gpClkin{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::crystalOscillator> crystalOscillator{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::pll0ForAudio> pll0ForAudio{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::pll1> pll1{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idiva> idiva{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivb> idivb{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivc> idivc{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivd> idivd{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idive> idive{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CguBaseOutClk{    ///<Output stage 20 control register for base clock BASE_OUT_CLK
        using Addr = Register::Address<0x400500ac,0x00000000,0x00000000,unsigned>;
        ///Output stage power down
        enum class PdVal {
            outputStageEnabled=0x00000000,     ///<Output stage enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PdVal> pd{}; 
        namespace PdValC{
            constexpr Register::FieldValue<decltype(pd)::Type,PdVal::outputStageEnabled> outputStageEnabled{};
            constexpr Register::FieldValue<decltype(pd)::Type,PdVal::powerDown> powerDown{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,1),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Block clock automatically during frequency change
        enum class AutoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,AutoblockVal> autoblock{}; 
        namespace AutoblockValC{
            constexpr Register::FieldValue<decltype(autoblock)::Type,AutoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr Register::FieldValue<decltype(autoblock)::Type,AutoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,12),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Clock-source selection.
        enum class ClkselVal {
            v32KhzOscillator=0x00000000,     ///<32 kHz oscillator
            ircDefault=0x00000001,     ///<IRC (default)
            enetRxClk=0x00000002,     ///<ENET_RX_CLK
            enetTxClk=0x00000003,     ///<ENET_TX_CLK
            gpClkin=0x00000004,     ///<GP_CLKIN
            crystalOscillator=0x00000006,     ///<Crystal oscillator
            pll0ForUsb=0x00000007,     ///<PLL0 (for USB)
            pll0ForAudio=0x00000008,     ///<PLL0 (for audio)
            pll1=0x00000009,     ///<PLL1
            idiva=0x0000000c,     ///<IDIVA
            idivb=0x0000000d,     ///<IDIVB
            idivc=0x0000000e,     ///<IDIVC
            idivd=0x0000000f,     ///<IDIVD
            idive=0x00000010,     ///<IDIVE
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,ClkselVal> clkSel{}; 
        namespace ClkselValC{
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::ircDefault> ircDefault{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::enetRxClk> enetRxClk{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::enetTxClk> enetTxClk{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::gpClkin> gpClkin{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::crystalOscillator> crystalOscillator{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::pll0ForUsb> pll0ForUsb{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::pll0ForAudio> pll0ForAudio{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::pll1> pll1{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idiva> idiva{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivb> idivb{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivc> idivc{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivd> idivd{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idive> idive{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CguBaseApllClk{    ///<Output stage 25 control register for base clock BASE_APLL_CLK
        using Addr = Register::Address<0x400500c0,0x00000000,0x00000000,unsigned>;
        ///Output stage power down
        enum class PdVal {
            outputStageEnabled=0x00000000,     ///<Output stage enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PdVal> pd{}; 
        namespace PdValC{
            constexpr Register::FieldValue<decltype(pd)::Type,PdVal::outputStageEnabled> outputStageEnabled{};
            constexpr Register::FieldValue<decltype(pd)::Type,PdVal::powerDown> powerDown{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,1),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Block clock automatically during frequency change
        enum class AutoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,AutoblockVal> autoblock{}; 
        namespace AutoblockValC{
            constexpr Register::FieldValue<decltype(autoblock)::Type,AutoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr Register::FieldValue<decltype(autoblock)::Type,AutoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,12),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Clock-source selection.
        enum class ClkselVal {
            v32KhzOscillator=0x00000000,     ///<32 kHz oscillator
            ircDefault=0x00000001,     ///<IRC (default)
            enetRxClk=0x00000002,     ///<ENET_RX_CLK
            enetTxClk=0x00000003,     ///<ENET_TX_CLK
            gpClkin=0x00000004,     ///<GP_CLKIN
            crystalOscillator=0x00000006,     ///<Crystal oscillator
            pll0ForAudio=0x00000008,     ///<PLL0 (for audio)
            pll1=0x00000009,     ///<PLL1
            idiva=0x0000000c,     ///<IDIVA
            idivb=0x0000000d,     ///<IDIVB
            idivc=0x0000000e,     ///<IDIVC
            idivd=0x0000000f,     ///<IDIVD
            idive=0x00000010,     ///<IDIVE
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,ClkselVal> clkSel{}; 
        namespace ClkselValC{
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::ircDefault> ircDefault{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::enetRxClk> enetRxClk{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::enetTxClk> enetTxClk{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::gpClkin> gpClkin{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::crystalOscillator> crystalOscillator{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::pll0ForAudio> pll0ForAudio{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::pll1> pll1{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idiva> idiva{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivb> idivb{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivc> idivc{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivd> idivd{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idive> idive{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CguBaseCguOut0Clk{    ///<Output stage 25 control register for base clock BASE_CGU_OUT0_CLK
        using Addr = Register::Address<0x400500c4,0x00000000,0x00000000,unsigned>;
        ///Output stage power down
        enum class PdVal {
            outputStageEnabled=0x00000000,     ///<Output stage enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PdVal> pd{}; 
        namespace PdValC{
            constexpr Register::FieldValue<decltype(pd)::Type,PdVal::outputStageEnabled> outputStageEnabled{};
            constexpr Register::FieldValue<decltype(pd)::Type,PdVal::powerDown> powerDown{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,1),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Block clock automatically during frequency change
        enum class AutoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,AutoblockVal> autoblock{}; 
        namespace AutoblockValC{
            constexpr Register::FieldValue<decltype(autoblock)::Type,AutoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr Register::FieldValue<decltype(autoblock)::Type,AutoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,12),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Clock-source selection.
        enum class ClkselVal {
            v32KhzOscillator=0x00000000,     ///<32 kHz oscillator
            ircDefault=0x00000001,     ///<IRC (default)
            enetRxClk=0x00000002,     ///<ENET_RX_CLK
            enetTxClk=0x00000003,     ///<ENET_TX_CLK
            gpClkin=0x00000004,     ///<GP_CLKIN
            crystalOscillator=0x00000006,     ///<Crystal oscillator
            pll0ForAudio=0x00000008,     ///<PLL0 (for audio)
            pll1=0x00000009,     ///<PLL1
            idiva=0x0000000c,     ///<IDIVA
            idivb=0x0000000d,     ///<IDIVB
            idivc=0x0000000e,     ///<IDIVC
            idivd=0x0000000f,     ///<IDIVD
            idive=0x00000010,     ///<IDIVE
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,ClkselVal> clkSel{}; 
        namespace ClkselValC{
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::ircDefault> ircDefault{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::enetRxClk> enetRxClk{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::enetTxClk> enetTxClk{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::gpClkin> gpClkin{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::crystalOscillator> crystalOscillator{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::pll0ForAudio> pll0ForAudio{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::pll1> pll1{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idiva> idiva{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivb> idivb{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivc> idivc{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivd> idivd{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idive> idive{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CguBaseCguOut1Clk{    ///<Output stage 25 control register for base clock BASE_CGU_OUT1_CLK
        using Addr = Register::Address<0x400500c8,0x00000000,0x00000000,unsigned>;
        ///Output stage power down
        enum class PdVal {
            outputStageEnabled=0x00000000,     ///<Output stage enabled (default)
            powerDown=0x00000001,     ///<power-down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PdVal> pd{}; 
        namespace PdValC{
            constexpr Register::FieldValue<decltype(pd)::Type,PdVal::outputStageEnabled> outputStageEnabled{};
            constexpr Register::FieldValue<decltype(pd)::Type,PdVal::powerDown> powerDown{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,1),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Block clock automatically during frequency change
        enum class AutoblockVal {
            autoblockingDisable=0x00000000,     ///<Autoblocking disabled
            autoblockingEnabled=0x00000001,     ///<Autoblocking enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,AutoblockVal> autoblock{}; 
        namespace AutoblockValC{
            constexpr Register::FieldValue<decltype(autoblock)::Type,AutoblockVal::autoblockingDisable> autoblockingDisable{};
            constexpr Register::FieldValue<decltype(autoblock)::Type,AutoblockVal::autoblockingEnabled> autoblockingEnabled{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,12),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Clock-source selection.
        enum class ClkselVal {
            v32KhzOscillator=0x00000000,     ///<32 kHz oscillator
            ircDefault=0x00000001,     ///<IRC (default)
            enetRxClk=0x00000002,     ///<ENET_RX_CLK
            enetTxClk=0x00000003,     ///<ENET_TX_CLK
            gpClkin=0x00000004,     ///<GP_CLKIN
            crystalOscillator=0x00000006,     ///<Crystal oscillator
            pll0ForAudio=0x00000008,     ///<PLL0 (for audio)
            pll1=0x00000009,     ///<PLL1
            idiva=0x0000000c,     ///<IDIVA
            idivb=0x0000000d,     ///<IDIVB
            idivc=0x0000000e,     ///<IDIVC
            idivd=0x0000000f,     ///<IDIVD
            idive=0x00000010,     ///<IDIVE
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,ClkselVal> clkSel{}; 
        namespace ClkselValC{
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::v32KhzOscillator> v32KhzOscillator{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::ircDefault> ircDefault{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::enetRxClk> enetRxClk{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::enetTxClk> enetTxClk{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::gpClkin> gpClkin{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::crystalOscillator> crystalOscillator{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::pll0ForAudio> pll0ForAudio{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::pll1> pll1{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idiva> idiva{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivb> idivb{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivc> idivc{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idivd> idivd{};
            constexpr Register::FieldValue<decltype(clkSel)::Type,ClkselVal::idive> idive{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
}
