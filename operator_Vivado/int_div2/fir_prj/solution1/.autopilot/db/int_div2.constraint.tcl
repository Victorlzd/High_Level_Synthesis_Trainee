set clock_constraint { \
    name clk \
    module int_div2 \
    port ap_clk \
    period 10 \
    uncertainty 1.25 \
}

set all_path {}

set false_path {}
