// Leading Zero Counter SystemVerilog实现
module LZC #(
    parameter WIDTH = 31,
    parameter MODE  = 1  // 1表示寻找第一个1，0表示寻找第一个0
)(
    input  logic [WIDTH-1:0] in_i,
    output logic [$clog2(WIDTH+1)-1:0] cnt_o,
    output logic empty_o
);

    // 标志位：所有输入位都是0（或1，取决于MODE）
    assign empty_o = (MODE) ? ~(|in_i) : &in_i;
    
    // 寻找第一个1（或0）的位置
    always_comb begin
        cnt_o = 0;
        
        for (int i = WIDTH-1; i >= 0; i--) begin
            if ((MODE && in_i[i]) || (!MODE && !in_i[i])) begin
                cnt_o = WIDTH - 1 - i;
                break;
            end
        end
    end
endmodule 
