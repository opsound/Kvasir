#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//General-purpose I/O ports
    namespace GpioPfr0{    ///<Port function setting register 0
        using Addr = Register::Address<0x40033000,0xfffffc00,0x00000000,unsigned>;
        ///Bit9 of PFR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        ///Bit8 of PFR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        ///Bit7 of PFR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        ///Bit6 of PFR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        ///Bit5 of PFR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        ///Bit4 of PFR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        ///Bit3 of PFR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        ///Bit2 of PFR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        ///Bit1 of PFR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        ///Bit0 of PFR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
    }
    namespace GpioPfr1{    ///<Port function setting register 1
        using Addr = Register::Address<0x40033004,0xffff0000,0x00000000,unsigned>;
        ///Bit15 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pf{}; 
        ///Bit14 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pe{}; 
        ///Bit13 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pd{}; 
        ///Bit12 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pc{}; 
        ///Bit11 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pb{}; 
        ///Bit10 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pa{}; 
        ///Bit9 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        ///Bit8 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        ///Bit7 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        ///Bit6 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        ///Bit5 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        ///Bit4 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        ///Bit3 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        ///Bit2 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        ///Bit1 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        ///Bit0 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
    }
    namespace GpioPfr2{    ///<Port function setting register 2
        using Addr = Register::Address<0x40033008,0xfffffc00,0x00000000,unsigned>;
        ///Bit9 of PFR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        ///Bit8 of PFR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        ///Bit7 of PFR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        ///Bit6 of PFR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        ///Bit5 of PFR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        ///Bit4 of PFR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        ///Bit3 of PFR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        ///Bit2 of PFR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        ///Bit1 of PFR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        ///Bit0 of PFR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
    }
    namespace GpioPfr3{    ///<Port function setting register 3
        using Addr = Register::Address<0x4003300c,0xffff0000,0x00000000,unsigned>;
        ///Bit15 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pf{}; 
        ///Bit14 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pe{}; 
        ///Bit13 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pd{}; 
        ///Bit12 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pc{}; 
        ///Bit11 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pb{}; 
        ///Bit10 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pa{}; 
        ///Bit9 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        ///Bit8 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        ///Bit7 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        ///Bit6 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        ///Bit5 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        ///Bit4 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        ///Bit3 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        ///Bit2 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        ///Bit1 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        ///Bit0 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
    }
    namespace GpioPfr4{    ///<Port function setting register 4
        using Addr = Register::Address<0x40033010,0xffff8000,0x00000000,unsigned>;
        ///Bit14 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pe{}; 
        ///Bit13 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pd{}; 
        ///Bit12 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pc{}; 
        ///Bit11 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pb{}; 
        ///Bit10 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pa{}; 
        ///Bit9 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        ///Bit8 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        ///Bit7 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        ///Bit6 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        ///Bit5 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        ///Bit4 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        ///Bit3 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        ///Bit2 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        ///Bit1 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        ///Bit0 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
    }
    namespace GpioPfr5{    ///<Port function setting register 5
        using Addr = Register::Address<0x40033014,0xffffc000,0x00000000,unsigned>;
        ///Bit13 of PFR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pd{}; 
        ///Bit12 of PFR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pc{}; 
        ///Bit11 of PFR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pb{}; 
        ///Bit10 of PFR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pa{}; 
        ///Bit9 of PFR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        ///Bit8 of PFR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        ///Bit7 of PFR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        ///Bit6 of PFR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        ///Bit5 of PFR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        ///Bit4 of PFR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        ///Bit3 of PFR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        ///Bit2 of PFR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        ///Bit1 of PFR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        ///Bit0 of PFR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
    }
    namespace GpioPfr6{    ///<Port function setting register 6
        using Addr = Register::Address<0x40033018,0xfffffff8,0x00000000,unsigned>;
        ///Bit2 of PFR6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        ///Bit1 of PFR6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        ///Bit0 of PFR6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
    }
    namespace GpioPfr7{    ///<Port function setting register 7
        using Addr = Register::Address<0x4003301c,0xffff0000,0x00000000,unsigned>;
        ///Bit15 of PFR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pf{}; 
        ///Bit14 of PFR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pe{}; 
        ///Bit13 of PFR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pd{}; 
        ///Bit12 of PFR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pc{}; 
        ///Bit11 of PFR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pb{}; 
        ///Bit10 of PFR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pa{}; 
        ///Bit9 of PFR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        ///Bit8 of PFR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        ///Bit7 of PFR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        ///Bit6 of PFR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        ///Bit5 of PFR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        ///Bit4 of PFR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        ///Bit3 of PFR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        ///Bit2 of PFR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        ///Bit1 of PFR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        ///Bit0 of PFR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
    }
    namespace GpioPfr8{    ///<Port function setting register 8
        using Addr = Register::Address<0x40033020,0xfffffff0,0x00000000,unsigned>;
        ///Bit3 of PFR8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        ///Bit2 of PFR8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        ///Bit1 of PFR8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        ///Bit0 of PFR8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
    }
    namespace GpioPfr9{    ///<Port function setting register 9
        using Addr = Register::Address<0x40033024,0xffffffc0,0x00000000,unsigned>;
        ///Bit5 of PFR9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        ///Bit4 of PFR9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        ///Bit3 of PFR9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        ///Bit2 of PFR9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        ///Bit1 of PFR9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        ///Bit0 of PFR9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
    }
    namespace GpioPfra{    ///<Port function setting register A
        using Addr = Register::Address<0x40033028,0xffffffc0,0x00000000,unsigned>;
        ///Bit5 of PFRA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        ///Bit4 of PFRA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        ///Bit3 of PFRA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        ///Bit2 of PFRA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        ///Bit1 of PFRA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        ///Bit0 of PFRA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
    }
    namespace GpioPfrb{    ///<Port function setting register B
        using Addr = Register::Address<0x4003302c,0xffffff00,0x00000000,unsigned>;
        ///Bit7 of PFRB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        ///Bit6 of PFRB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        ///Bit5 of PFRB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        ///Bit4 of PFRB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        ///Bit3 of PFRB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        ///Bit2 of PFRB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        ///Bit1 of PFRB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        ///Bit0 of PFRB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
    }
    namespace GpioPfrc{    ///<Port function setting register C
        using Addr = Register::Address<0x40033030,0xffff0000,0x00000000,unsigned>;
        ///Bit15 of PFRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pf{}; 
        ///Bit14 of PFRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pe{}; 
        ///Bit13 of PFRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pd{}; 
        ///Bit12 of PFRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pc{}; 
        ///Bit11 of PFRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pb{}; 
        ///Bit10 of PFRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pa{}; 
        ///Bit9 of PFRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        ///Bit8 of PFRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        ///Bit7 of PFRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        ///Bit6 of PFRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        ///Bit5 of PFRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        ///Bit4 of PFRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        ///Bit3 of PFRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        ///Bit2 of PFRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        ///Bit1 of PFRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        ///Bit0 of PFRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
    }
    namespace GpioPfrd{    ///<Port function setting register D
        using Addr = Register::Address<0x40033034,0xfffffff0,0x00000000,unsigned>;
        ///Bit3 of PFRD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        ///Bit2 of PFRD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        ///Bit1 of PFRD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        ///Bit0 of PFRD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
    }
    namespace GpioPfre{    ///<Port function setting register E
        using Addr = Register::Address<0x40033038,0xfffffff2,0x00000000,unsigned>;
        ///Bit3 of PFRE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        ///Bit2 of PFRE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        ///Bit0 of PFRE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
    }
    namespace GpioPfrf{    ///<Port function setting register F
        using Addr = Register::Address<0x4003303c,0xffffff80,0x00000000,unsigned>;
        ///Bit6 of PFRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        ///Bit5 of PFRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        ///Bit4 of PFRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        ///Bit3 of PFRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        ///Bit2 of PFRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        ///Bit1 of PFRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        ///Bit0 of PFRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
    }
    namespace GpioPcr0{    ///<Pull-up Setting Register 0
        using Addr = Register::Address<0x40033100,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPcr1{    ///<Pull-up Setting Register 1
        using Addr = Register::Address<0x40033104,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPcr2{    ///<Pull-up Setting Register 2
        using Addr = Register::Address<0x40033108,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPcr3{    ///<Pull-up Setting Register 3
        using Addr = Register::Address<0x4003310c,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPcr4{    ///<Pull-up Setting Register 4
        using Addr = Register::Address<0x40033110,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPcr5{    ///<Pull-up Setting Register 5
        using Addr = Register::Address<0x40033114,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPcr6{    ///<Pull-up Setting Register 6
        using Addr = Register::Address<0x40033118,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPcr7{    ///<Pull-up Setting Register 7
        using Addr = Register::Address<0x4003311c,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPcr8{    ///<Pull-up Setting Register 8
        using Addr = Register::Address<0x40033120,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPcr9{    ///<Pull-up Setting Register 9
        using Addr = Register::Address<0x40033124,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPcra{    ///<Pull-up Setting Register A
        using Addr = Register::Address<0x40033128,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPcrb{    ///<Pull-up Setting Register B
        using Addr = Register::Address<0x4003312c,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPcrc{    ///<Pull-up Setting Register C
        using Addr = Register::Address<0x40033130,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPcrd{    ///<Pull-up Setting Register D
        using Addr = Register::Address<0x40033134,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPcre{    ///<Pull-up Setting Register E
        using Addr = Register::Address<0x40033138,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPcrf{    ///<Pull-up Setting Register F
        using Addr = Register::Address<0x4003313c,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioDdr0{    ///<Port input/output direction setting register 0
        using Addr = Register::Address<0x40033200,0xfffffc00,0x00000000,unsigned>;
        ///Bit9 of DDR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        ///Bit8 of DDR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p8{}; 
        ///Bit7 of DDR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        ///Bit6 of DDR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        ///Bit5 of DDR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        ///Bit4 of DDR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        ///Bit3 of DDR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        ///Bit2 of DDR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        ///Bit1 of DDR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        ///Bit0 of DDR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
    }
    namespace GpioDdr1{    ///<Port input/output direction setting register 1
        using Addr = Register::Address<0x40033204,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioDdr2{    ///<Port input/output direction setting register 2
        using Addr = Register::Address<0x40033208,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioDdr3{    ///<Port input/output direction setting register 3
        using Addr = Register::Address<0x4003320c,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioDdr4{    ///<Port input/output direction setting register 4
        using Addr = Register::Address<0x40033210,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioDdr5{    ///<Port input/output direction setting register 5
        using Addr = Register::Address<0x40033214,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioDdr6{    ///<Port input/output direction setting register 6
        using Addr = Register::Address<0x40033218,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioDdr7{    ///<Port input/output direction setting register 7
        using Addr = Register::Address<0x4003321c,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioDdr8{    ///<Port input/output direction setting register 8
        using Addr = Register::Address<0x40033220,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioDdr9{    ///<Port input/output direction setting register 9
        using Addr = Register::Address<0x40033224,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioDdra{    ///<Port input/output direction setting register A
        using Addr = Register::Address<0x40033228,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioDdrb{    ///<Port input/output direction setting register B
        using Addr = Register::Address<0x4003322c,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioDdrc{    ///<Port input/output direction setting register C
        using Addr = Register::Address<0x40033230,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioDdrd{    ///<Port input/output direction setting register D
        using Addr = Register::Address<0x40033234,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioDdre{    ///<Port input/output direction setting register E
        using Addr = Register::Address<0x40033238,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioDdrf{    ///<Port input/output direction setting register F
        using Addr = Register::Address<0x4003323c,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPdir0{    ///<Port input data register 0
        using Addr = Register::Address<0x40033300,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPdir1{    ///<Port input data register 1
        using Addr = Register::Address<0x40033304,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPdir2{    ///<Port input data register 2
        using Addr = Register::Address<0x40033308,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPdir3{    ///<Port input data register 3
        using Addr = Register::Address<0x4003330c,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPdir4{    ///<Port input data register 4
        using Addr = Register::Address<0x40033310,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPdir5{    ///<Port input data register 5
        using Addr = Register::Address<0x40033314,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPdir6{    ///<Port input data register 6
        using Addr = Register::Address<0x40033318,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPdir7{    ///<Port input data register 7
        using Addr = Register::Address<0x4003331c,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPdir8{    ///<Port input data register 8
        using Addr = Register::Address<0x40033320,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPdir9{    ///<Port input data register 9
        using Addr = Register::Address<0x40033324,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPdira{    ///<Port input data register A
        using Addr = Register::Address<0x40033328,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPdirb{    ///<Port input data register B
        using Addr = Register::Address<0x4003332c,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPdirc{    ///<Port input data register C
        using Addr = Register::Address<0x40033330,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPdird{    ///<Port input data register D
        using Addr = Register::Address<0x40033334,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPdire{    ///<Port input data register E
        using Addr = Register::Address<0x40033338,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPdirf{    ///<Port input data register F
        using Addr = Register::Address<0x4003333c,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPdor0{    ///<Port output data register 0
        using Addr = Register::Address<0x40033400,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPdor1{    ///<Port output data register 1
        using Addr = Register::Address<0x40033404,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPdor2{    ///<Port output data register 2
        using Addr = Register::Address<0x40033408,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPdor3{    ///<Port output data register 3
        using Addr = Register::Address<0x4003340c,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPdor4{    ///<Port output data register 4
        using Addr = Register::Address<0x40033410,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPdor5{    ///<Port output data register 5
        using Addr = Register::Address<0x40033414,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPdor6{    ///<Port output data register 6
        using Addr = Register::Address<0x40033418,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPdor7{    ///<Port output data register 7
        using Addr = Register::Address<0x4003341c,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPdor8{    ///<Port output data register 8
        using Addr = Register::Address<0x40033420,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPdor9{    ///<Port output data register 9
        using Addr = Register::Address<0x40033424,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPdora{    ///<Port output data register A
        using Addr = Register::Address<0x40033428,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPdorb{    ///<Port output data register B
        using Addr = Register::Address<0x4003342c,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPdorc{    ///<Port output data register C
        using Addr = Register::Address<0x40033430,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPdord{    ///<Port output data register D
        using Addr = Register::Address<0x40033434,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPdore{    ///<Port output data register E
        using Addr = Register::Address<0x40033438,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPdorf{    ///<Port output data register F
        using Addr = Register::Address<0x4003343c,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioAde{    ///<Analog input setting register
        using Addr = Register::Address<0x40033500,0x00000000,0x00000000,unsigned>;
        ///Bit31 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> an31{}; 
        ///Bit30 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> an30{}; 
        ///Bit29 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> an29{}; 
        ///Bit28 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> an28{}; 
        ///Bit27 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> an27{}; 
        ///Bit26 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> an26{}; 
        ///Bit25 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> an25{}; 
        ///Bit24 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> an24{}; 
        ///Bit23 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> an23{}; 
        ///Bit22 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> an22{}; 
        ///Bit21 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> an21{}; 
        ///Bit20 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> an20{}; 
        ///Bit19 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> an19{}; 
        ///Bit18 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> an18{}; 
        ///Bit17 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> an17{}; 
        ///Bit16 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> an16{}; 
        ///Bit15 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> an15{}; 
        ///Bit14 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> an14{}; 
        ///Bit13 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> an13{}; 
        ///Bit12 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> an12{}; 
        ///Bit11 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> an11{}; 
        ///Bit10 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> an10{}; 
        ///Bit9 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> an9{}; 
        ///Bit8 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> an8{}; 
        ///Bit7 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> an7{}; 
        ///Bit6 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> an6{}; 
        ///Bit5 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> an5{}; 
        ///Bit4 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> an4{}; 
        ///Bit3 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> an3{}; 
        ///Bit2 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> an2{}; 
        ///Bit1 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> an1{}; 
        ///Bit0 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> an0{}; 
    }
    namespace GpioSpsr{    ///<Special port setting register
        using Addr = Register::Address<0x40033580,0xffffffe0,0x00000000,unsigned>;
        ///USBch0 pin setting bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> usb0c{}; 
        ///Main clock(oscillation) pin setting bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> mainxc{}; 
        ///Sub clock(oscillation) pin setting bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> subxc{}; 
    }
    namespace GpioEpfr00{    ///<Extended pin function setting register 00
        using Addr = Register::Address<0x40033600,0xfcfcfd08,0x00000000,unsigned>;
        ///TRACED function select bit1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> trc1e{}; 
        ///TRACED function select bit0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> trc0e{}; 
        ///JTAG function select bit1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> jtagen1s{}; 
        ///JTAG function select bit0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> jtagen0b{}; 
        ///USBch0 function select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> usbp0e{}; 
        ///Sub clock divide output function select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> suboute{}; 
        ///RTC clock output select bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> rtccoe{}; 
        ///Internal high-speed CR oscillation output function select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,unsigned> croute{}; 
        ///NMIX function select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nmis{}; 
    }
    namespace GpioEpfr01{    ///<Extended pin function setting register 01
        using Addr = Register::Address<0x40033604,0x0000e000,0x00000000,unsigned>;
        ///IC03 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> ic03s{}; 
        ///IC02 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,26),Register::ReadWriteAccess,unsigned> ic02s{}; 
        ///IC01 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,23),Register::ReadWriteAccess,unsigned> ic01s{}; 
        ///IC00 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> ic00s{}; 
        ///FRCK0 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> frck0s{}; 
        ///DTTIX0 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> dtti0s{}; 
        ///DTTIX0 function select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dtti0c{}; 
        ///RTO05E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> rto05e{}; 
        ///RTO04E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> rto04e{}; 
        ///RTO03E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> rto03e{}; 
        ///RTO02E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> rto02e{}; 
        ///RTO01E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> rto01e{}; 
        ///RTO00E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> rto00e{}; 
    }
    namespace GpioEpfr02{    ///<Extended pin function setting register 02
        using Addr = Register::Address<0x40033608,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioEpfr03{    ///<Extended pin function setting register 03
        using Addr = Register::Address<0x4003360c,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioEpfr04{    ///<Extended pin function setting register 04
        using Addr = Register::Address<0x40033610,0xc0c3c083,0x00000000,unsigned>;
        ///TIOB3 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> tiob3s{}; 
        ///TIOA3E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> tioa3e{}; 
        ///TIOA3 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> tioa3s{}; 
        ///TIOB2 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> tiob2s{}; 
        ///TIOA2 output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> tioa2e{}; 
        ///TIOB1 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> tiob1s{}; 
        ///TIOA1E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> tioa1e{}; 
        ///TIOA1 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> tioa1s{}; 
        ///TIOB0 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> tiob0s{}; 
        ///TIOA0 output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> tioa0e{}; 
    }
    namespace GpioEpfr05{    ///<Extended pin function setting register 05
        using Addr = Register::Address<0x40033614,0xc0c3c0c3,0x00000000,unsigned>;
        ///TIOB7 input select Bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> tiob7s{}; 
        ///TIOA7E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> tioa7e{}; 
        ///TIOA7 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> tioa7s{}; 
        ///TIOB6 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> tiob6s{}; 
        ///TIOA6 output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> tioa6e{}; 
        ///TIOB5 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> tiob5s{}; 
        ///TIOA5E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> tioa5e{}; 
        ///TIOA5 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> tioa5s{}; 
        ///TIOB4 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> tiob4s{}; 
        ///TIOA4 output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> tioa4e{}; 
    }
    namespace GpioEpfr06{    ///<Extended pin function setting register 06
        using Addr = Register::Address<0x40033618,0x00000000,0x00000000,unsigned>;
        ///External interrupt 15 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> eint15s{}; 
        ///External interrupt 14 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> eint14s{}; 
        ///External interrupt 13 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> eint13s{}; 
        ///External interrupt 12 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> eint12s{}; 
        ///External interrupt 11 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> eint11s{}; 
        ///External interrupt 10 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> eint10s{}; 
        ///External interrupt 9 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eint09s{}; 
        ///External interrupt 8 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> eint08s{}; 
        ///External interrupt 7 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> eint07s{}; 
        ///External interrupt 6 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> eint06s{}; 
        ///External interrupt 5 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> eint05s{}; 
        ///External interrupt 4 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> eint04s{}; 
        ///External interrupt 3 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> eint03s{}; 
        ///External interrupt 2 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> eint02s{}; 
        ///External interrupt 1 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> eint01s{}; 
        ///External interrupt 0 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> eint00s{}; 
    }
    namespace GpioEpfr07{    ///<Extended pin function setting register 07
        using Addr = Register::Address<0x4003361c,0xf000000f,0x00000000,unsigned>;
        ///SCK3 input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> sck3b{}; 
        ///SOT3B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> sot3b{}; 
        ///SIN3S input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> sin3s{}; 
        ///SCK2 input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> sck2b{}; 
        ///SOT2B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> sot2b{}; 
        ///SIN2S input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> sin2s{}; 
        ///SCK1 input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> sck1b{}; 
        ///SCK1B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> sot1b{}; 
        ///SIN1S input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> sin1s{}; 
        ///SCK0 input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> sck0b{}; 
        ///SOT0B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> sot0b{}; 
        ///SIN0S input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> sin0s{}; 
    }
    namespace GpioEpfr08{    ///<Extended pin function setting register 08
        using Addr = Register::Address<0x40033620,0xf0000000,0x00000000,unsigned>;
        ///SCK7 input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> sck7b{}; 
        ///SOT7B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> sot7b{}; 
        ///SIN7S input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> sin7s{}; 
        ///SCK6 input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> sck6b{}; 
        ///SOT6B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> sot6b{}; 
        ///SIN6S input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> sin6s{}; 
        ///SCK5 input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> sck5b{}; 
        ///SOT5B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> sot5b{}; 
        ///SIN5S input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> sin5s{}; 
        ///SCK4 input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> sck4b{}; 
        ///SOT4B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> sot4b{}; 
        ///SIN4S input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> sin4s{}; 
        ///CTS4S input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> cts4s{}; 
        ///RTS4E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> rts4e{}; 
    }
    namespace GpioEpfr09{    ///<Extended pin function setting register 09
        using Addr = Register::Address<0x40033624,0xf0f00000,0x00000000,unsigned>;
        ///CAN TX2 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> ctx0e{}; 
        ///CAN RX2 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> crx0s{}; 
        ///ADTRG1 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> adtrg1s{}; 
        ///ADTRG0 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> adtrg0s{}; 
        ///QZIN1S input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> qzin1s{}; 
        ///QBIN1S input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> qbin1s{}; 
        ///QAIN1S input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> qain1s{}; 
        ///QZIN0S input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> qzin0s{}; 
        ///QBIN0S input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> qbin0s{}; 
        ///QAIN0S input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> qain0s{}; 
    }
    namespace GpioEpfr10{    ///<Extended pin function setting register 10
        using Addr = Register::Address<0x40033628,0x00000000,0x00000000,unsigned>;
        ///UEA24E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> uea24e{}; 
        ///UEA23E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> uea23e{}; 
        ///UEA22E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> uea22e{}; 
        ///UEA21E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> uea21e{}; 
        ///UEA20E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> uea20e{}; 
        ///UEA19E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> uea19e{}; 
        ///UEA18E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> uea18e{}; 
        ///UEA17E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> uea17e{}; 
        ///UEA16E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> uea16e{}; 
        ///UEA15E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> uea15e{}; 
        ///UEA14E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> uea14e{}; 
        ///UEA13E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> uea13e{}; 
        ///UEA12E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> uea12e{}; 
        ///UEA11E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> uea11e{}; 
        ///UEA10E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> uea10e{}; 
        ///UEA09E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> uea09e{}; 
        ///UEA08E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> uea08e{}; 
        ///UEAOOE output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ueaooe{}; 
        ///UECS7E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> uecs7e{}; 
        ///UECS6E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> uecs6e{}; 
        ///UECS5E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> uecs5e{}; 
        ///UECS4E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> uecs4e{}; 
        ///UECS3E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> uecs3e{}; 
        ///UECS2E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> uecs2e{}; 
        ///UECS1E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> uecs1e{}; 
        ///UEFLSE output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ueflse{}; 
        ///UEOEXE output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ueoexe{}; 
        ///UEDQME output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> uedqme{}; 
        ///UEWEXE output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> uewexe{}; 
        ///UECLKE output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ueclke{}; 
        ///UEDTHB input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> uedthb{}; 
        ///UEDEFB input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> uedefb{}; 
    }
    namespace GpioEpfr11{    ///<Extended pin function setting register 11
        using Addr = Register::Address<0x4003362c,0xfc000000,0x00000000,unsigned>;
        ///UERLC relocation select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> uerlc{}; 
        ///UED15B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ued15b{}; 
        ///UED14B output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> ued14b{}; 
        ///UED13B output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> ued13b{}; 
        ///UED12B output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ued12b{}; 
        ///UED11B output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ued11b{}; 
        ///UED10B output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ued10b{}; 
        ///UED09B output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ued09b{}; 
        ///UED08B output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ued08b{}; 
        ///UED07B output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ued07b{}; 
        ///UED06B output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ued06b{}; 
        ///UED05B output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ued05b{}; 
        ///UED04B output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ued04b{}; 
        ///UED03B output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ued03b{}; 
        ///UED02B output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ued02b{}; 
        ///UED01B output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ued01b{}; 
        ///UED00B output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ued00b{}; 
        ///UEA07E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> uea07e{}; 
        ///UEA06E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> uea06e{}; 
        ///UEA05E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> uea05e{}; 
        ///UEA04E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> uea04e{}; 
        ///UEA03E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> uea03e{}; 
        ///UEA02E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> uea02e{}; 
        ///UEA01E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> uea01e{}; 
        ///UECS0E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> uecs0e{}; 
        ///UEALEE output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> uealee{}; 
    }
    namespace GpioEpfr12{    ///<Extended pin function setting register 12
        using Addr = Register::Address<0x40033630,0xc0c3c0c3,0x00000000,unsigned>;
        ///TIOB11 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> tiob11s{}; 
        ///TIOA11 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> tioa11e{}; 
        ///TIOA11 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> tioa11s{}; 
        ///TIOB10 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> tiob10s{}; 
        ///TIOA10 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> tioa10e{}; 
        ///TIOB9 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> tiob9s{}; 
        ///TIOA9 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> tioa9e{}; 
        ///TIOA9 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> tioa9s{}; 
        ///TIOB8 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> tiob8s{}; 
        ///TIOA8 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> tioa8e{}; 
    }
    namespace GpioEpfr13{    ///<Extended pin function setting register 13
        using Addr = Register::Address<0x40033634,0xc0c3c0c3,0x00000000,unsigned>;
        ///TIOB15 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> tiob15s{}; 
        ///TIOA15 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> tioa15e{}; 
        ///TIOA15 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> tioa15s{}; 
        ///TIOB14 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> tiob14s{}; 
        ///TIOA14 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> tioa14e{}; 
        ///TIOB13 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> tiob13s{}; 
        ///TIOA13 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> tioa13e{}; 
        ///TIOA13 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> tioa13s{}; 
        ///TIOB12 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> tiob12s{}; 
        ///TIOA12 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> tioa12e{}; 
    }
    namespace GpioEpfr14{    ///<Extended pin function setting register 14
        using Addr = Register::Address<0x40033638,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioEpfr15{    ///<Extended pin function setting register 15
        using Addr = Register::Address<0x4003363c,0x00000000,0x00000000,unsigned>;
        ///External interrupt 31 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> eint31s{}; 
        ///External interrupt 30 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> eint30s{}; 
        ///External interrupt 29 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> eint29s{}; 
        ///External interrupt 28 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> eint28s{}; 
        ///External interrupt 27 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> eint27s{}; 
        ///External interrupt 26 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> eint26s{}; 
        ///External interrupt 25 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eint25s{}; 
        ///External interrupt 24 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> eint24s{}; 
        ///External interrupt 23 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> eint23s{}; 
        ///External interrupt 22 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> eint22s{}; 
        ///External interrupt 21 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> eint21s{}; 
        ///External interrupt 20 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> eint20s{}; 
        ///External interrupt 19 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> eint19s{}; 
        ///External interrupt 18 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> eint18s{}; 
        ///External interrupt 17 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> eint17s{}; 
        ///External interrupt 16 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> eint16s{}; 
    }
    namespace GpioEpfr16{    ///<Extended pin function setting register 16
        using Addr = Register::Address<0x40033640,0xf000000f,0x00000000,unsigned>;
        ///SCK11 input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> sck11b{}; 
        ///SOT11B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> sot11b{}; 
        ///SIN11S input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> sin11s{}; 
        ///SCK10 input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> sck10b{}; 
        ///SOT10B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> sot10b{}; 
        ///SIN10S input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> sin10s{}; 
        ///SCK9 input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> sck9b{}; 
        ///SCK9B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> sot9b{}; 
        ///SIN9S input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> sin9s{}; 
        ///SCK8 input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> sck8b{}; 
        ///SOT8B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> sot8b{}; 
        ///SIN8S input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> sin8s{}; 
    }
    namespace GpioEpfr17{    ///<Extended pin function setting register 17
        using Addr = Register::Address<0x40033644,0xf000000f,0x00000000,unsigned>;
        ///SCK7 input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> sck15b{}; 
        ///SOT7B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> sot15b{}; 
        ///SIN7S input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> sin15s{}; 
        ///SCK6 input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> sck14b{}; 
        ///SOT6B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> sot14b{}; 
        ///SIN6S input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> sin14s{}; 
        ///SCK5 input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> sck13b{}; 
        ///SOT5B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> sot13b{}; 
        ///SIN5S input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> sin13s{}; 
        ///SCK4 input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> sck12b{}; 
        ///SOT4B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> sot12b{}; 
        ///SIN4S input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> sin12s{}; 
    }
    namespace GpioEpfr18{    ///<Extended pin function setting register 18
        using Addr = Register::Address<0x40033648,0xfffffff0,0x00000000,unsigned>;
        ///CEC1 Input/Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> cecr1b{}; 
        ///CEC0 Input/Output Select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> cecr0b{}; 
    }
    namespace GpioPzr0{    ///<Port Pseudo Open Drain Setting Register 0
        using Addr = Register::Address<0x40033700,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPzr1{    ///<Port Pseudo Open Drain Setting Register 1
        using Addr = Register::Address<0x40033704,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPzr2{    ///<Port Pseudo Open Drain Setting Register 2
        using Addr = Register::Address<0x40033708,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPzr3{    ///<Port Pseudo Open Drain Setting Register 3
        using Addr = Register::Address<0x4003370c,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPzr4{    ///<Port Pseudo Open Drain Setting Register 4
        using Addr = Register::Address<0x40033710,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPzr5{    ///<Port Pseudo Open Drain Setting Register 5
        using Addr = Register::Address<0x40033714,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPzr6{    ///<Port Pseudo Open Drain Setting Register 6
        using Addr = Register::Address<0x40033718,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPzr7{    ///<Port Pseudo Open Drain Setting Register 7
        using Addr = Register::Address<0x4003371c,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPzr8{    ///<Port Pseudo Open Drain Setting Register 8
        using Addr = Register::Address<0x40033720,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPzr9{    ///<Port Pseudo Open Drain Setting Register 9
        using Addr = Register::Address<0x40033724,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPzra{    ///<Port Pseudo Open Drain Setting Register A
        using Addr = Register::Address<0x40033728,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPzrb{    ///<Port Pseudo Open Drain Setting Register B
        using Addr = Register::Address<0x4003372c,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPzrc{    ///<Port Pseudo Open Drain Setting Register C
        using Addr = Register::Address<0x40033730,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPzrd{    ///<Port Pseudo Open Drain Setting Register D
        using Addr = Register::Address<0x40033734,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPzre{    ///<Port Pseudo Open Drain Setting Register E
        using Addr = Register::Address<0x40033738,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPzrf{    ///<Port Pseudo Open Drain Setting Register F
        using Addr = Register::Address<0x4003373c,0xffffffff,0x00000000,unsigned>;
    }
}
