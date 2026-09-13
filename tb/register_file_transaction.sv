class register_file_transaction #(
    parameter ADDR_WIDTH = 5,
    parameter DATA_WIDTH = 32
);
    rand logic [ADDR_WIDTH-1:0] write_addr;
    rand logic [ADDR_WIDTH-1:0] read_addr1;
    rand logic [ADDR_WIDTH-1:0] read_addr2;
    rand logic [DATA_WIDTH-1:0] write_data;
    rand logic write_en;

    rand logic same_addr;
    
    constraint same_addr_c {
        same_addr -> (write_addr == read_addr1);
        !same_addr -> (write_addr != read_addr1);
    };

    constraint same_addr_dist {
        same_addr dist{
            0:= 70,
            1:= 30
        };
    };

    constraint write_en_dist{
        write_en dist {0:= 30, 1:=70};
    }

    constraint write_addr_dist{
        write_addr dist {
            0:=20, 
            [1:31]:/80
        };
    }

    constraint read_addr1_dist {
        read_addr1 dist {
            0      := 20,
            [1:31] :/ 80
        };
    }

    constraint read_addr2_dist {
        read_addr2 dist {
            0      := 20,
            [1:31] :/ 80
        };
    }

    function new();
        
    endfunction //new()
endclass //register_file_transaction
