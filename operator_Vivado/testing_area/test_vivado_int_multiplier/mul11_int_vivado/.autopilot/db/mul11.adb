<?xml version="1.0" encoding="UTF-8" standalone="yes" ?>
<!DOCTYPE boost_serialization>
<boost_serialization signature="serialization::archive" version="15">
  <syndb class_id="0" tracking_level="0" version="0">
    <userIPLatency>-1</userIPLatency>
    <userIPName/>
    <cdfg class_id="1" tracking_level="1" version="0" object_id="_0">
      <name>mul11</name>
      <ret_bitwidth>32</ret_bitwidth>
      <ports class_id="2" tracking_level="0" version="0">
        <count>1</count>
        <item_version>0</item_version>
        <item class_id="3" tracking_level="1" version="0" object_id="_1">
          <Value class_id="4" tracking_level="0" version="0">
            <Obj class_id="5" tracking_level="0" version="0">
              <type>1</type>
              <id>1</id>
              <name>a</name>
              <fileName/>
              <fileDirectory/>
              <lineNumber>0</lineNumber>
              <contextFuncName/>
              <inlineStackInfo class_id="6" tracking_level="0" version="0">
                <count>0</count>
                <item_version>0</item_version>
              </inlineStackInfo>
              <originalName>a</originalName>
              <rtlName/>
              <coreName/>
            </Obj>
            <bitwidth>32</bitwidth>
          </Value>
          <direction>0</direction>
          <if_type>0</if_type>
          <array_size>0</array_size>
          <bit_vecs class_id="7" tracking_level="0" version="0">
            <count>0</count>
            <item_version>0</item_version>
          </bit_vecs>
        </item>
      </ports>
      <nodes class_id="8" tracking_level="0" version="0">
        <count>3</count>
        <item_version>0</item_version>
        <item class_id="9" tracking_level="1" version="0" object_id="_2">
          <Value>
            <Obj>
              <type>0</type>
              <id>5</id>
              <name>a_read</name>
              <fileName/>
              <fileDirectory/>
              <lineNumber>0</lineNumber>
              <contextFuncName/>
              <inlineStackInfo>
                <count>0</count>
                <item_version>0</item_version>
              </inlineStackInfo>
              <originalName>a</originalName>
              <rtlName/>
              <coreName/>
            </Obj>
            <bitwidth>32</bitwidth>
          </Value>
          <oprand_edges>
            <count>2</count>
            <item_version>0</item_version>
            <item>10</item>
            <item>11</item>
          </oprand_edges>
          <opcode>read</opcode>
          <m_Display>0</m_Display>
          <m_isOnCriticalPath>0</m_isOnCriticalPath>
          <m_isLCDNode>0</m_isLCDNode>
          <m_delay>0.00</m_delay>
        </item>
        <item class_id_reference="9" object_id="_3">
          <Value>
            <Obj>
              <type>0</type>
              <id>6</id>
              <name>tmp</name>
              <fileName>test.cpp</fileName>
              <fileDirectory>..</fileDirectory>
              <lineNumber>27</lineNumber>
              <contextFuncName>mul11</contextFuncName>
              <inlineStackInfo>
                <count>1</count>
                <item_version>0</item_version>
                <item class_id="11" tracking_level="0" version="0">
                  <first>/home/duazel/Documents/stage3IF/High_Level_Synthesis_Trainee/operator_Vivado/testing_area</first>
                  <second class_id="12" tracking_level="0" version="0">
                    <count>1</count>
                    <item_version>0</item_version>
                    <item class_id="13" tracking_level="0" version="0">
                      <first class_id="14" tracking_level="0" version="0">
                        <first>test.cpp</first>
                        <second>mul11</second>
                      </first>
                      <second>27</second>
                    </item>
                  </second>
                </item>
              </inlineStackInfo>
              <originalName/>
              <rtlName>mul11_mul_32s_5nsbkb_U1</rtlName>
              <coreName/>
            </Obj>
            <bitwidth>32</bitwidth>
          </Value>
          <oprand_edges>
            <count>2</count>
            <item_version>0</item_version>
            <item>12</item>
            <item>14</item>
          </oprand_edges>
          <opcode>mul</opcode>
          <m_Display>0</m_Display>
          <m_isOnCriticalPath>0</m_isOnCriticalPath>
          <m_isLCDNode>0</m_isLCDNode>
          <m_delay>1.71</m_delay>
        </item>
        <item class_id_reference="9" object_id="_4">
          <Value>
            <Obj>
              <type>0</type>
              <id>7</id>
              <name/>
              <fileName>test.cpp</fileName>
              <fileDirectory>..</fileDirectory>
              <lineNumber>27</lineNumber>
              <contextFuncName>mul11</contextFuncName>
              <inlineStackInfo>
                <count>1</count>
                <item_version>0</item_version>
                <item>
                  <first>/home/duazel/Documents/stage3IF/High_Level_Synthesis_Trainee/operator_Vivado/testing_area</first>
                  <second>
                    <count>1</count>
                    <item_version>0</item_version>
                    <item>
                      <first>
                        <first>test.cpp</first>
                        <second>mul11</second>
                      </first>
                      <second>27</second>
                    </item>
                  </second>
                </item>
              </inlineStackInfo>
              <originalName/>
              <rtlName/>
              <coreName/>
            </Obj>
            <bitwidth>0</bitwidth>
          </Value>
          <oprand_edges>
            <count>1</count>
            <item_version>0</item_version>
            <item>15</item>
          </oprand_edges>
          <opcode>ret</opcode>
          <m_Display>0</m_Display>
          <m_isOnCriticalPath>0</m_isOnCriticalPath>
          <m_isLCDNode>0</m_isLCDNode>
          <m_delay>0.00</m_delay>
        </item>
      </nodes>
      <consts class_id="15" tracking_level="0" version="0">
        <count>1</count>
        <item_version>0</item_version>
        <item class_id="16" tracking_level="1" version="0" object_id="_5">
          <Value>
            <Obj>
              <type>2</type>
              <id>13</id>
              <name>empty</name>
              <fileName/>
              <fileDirectory/>
              <lineNumber>0</lineNumber>
              <contextFuncName/>
              <inlineStackInfo>
                <count>0</count>
                <item_version>0</item_version>
              </inlineStackInfo>
              <originalName/>
              <rtlName/>
              <coreName/>
            </Obj>
            <bitwidth>32</bitwidth>
          </Value>
          <const_type>0</const_type>
          <content>11</content>
        </item>
      </consts>
      <blocks class_id="17" tracking_level="0" version="0">
        <count>1</count>
        <item_version>0</item_version>
        <item class_id="18" tracking_level="1" version="0" object_id="_6">
          <Obj>
            <type>3</type>
            <id>8</id>
            <name>mul11</name>
            <fileName/>
            <fileDirectory/>
            <lineNumber>0</lineNumber>
            <contextFuncName/>
            <inlineStackInfo>
              <count>0</count>
              <item_version>0</item_version>
            </inlineStackInfo>
            <originalName/>
            <rtlName/>
            <coreName/>
          </Obj>
          <node_objs>
            <count>3</count>
            <item_version>0</item_version>
            <item>5</item>
            <item>6</item>
            <item>7</item>
          </node_objs>
        </item>
      </blocks>
      <edges class_id="19" tracking_level="0" version="0">
        <count>4</count>
        <item_version>0</item_version>
        <item class_id="20" tracking_level="1" version="0" object_id="_7">
          <id>11</id>
          <edge_type>1</edge_type>
          <source_obj>1</source_obj>
          <sink_obj>5</sink_obj>
          <is_back_edge>0</is_back_edge>
        </item>
        <item class_id_reference="20" object_id="_8">
          <id>12</id>
          <edge_type>1</edge_type>
          <source_obj>5</source_obj>
          <sink_obj>6</sink_obj>
          <is_back_edge>0</is_back_edge>
        </item>
        <item class_id_reference="20" object_id="_9">
          <id>14</id>
          <edge_type>1</edge_type>
          <source_obj>13</source_obj>
          <sink_obj>6</sink_obj>
          <is_back_edge>0</is_back_edge>
        </item>
        <item class_id_reference="20" object_id="_10">
          <id>15</id>
          <edge_type>1</edge_type>
          <source_obj>6</source_obj>
          <sink_obj>7</sink_obj>
          <is_back_edge>0</is_back_edge>
        </item>
      </edges>
    </cdfg>
    <cdfg_regions class_id="21" tracking_level="0" version="0">
      <count>1</count>
      <item_version>0</item_version>
      <item class_id="22" tracking_level="1" version="0" object_id="_11">
        <mId>1</mId>
        <mTag>mul11</mTag>
        <mType>0</mType>
        <sub_regions>
          <count>0</count>
          <item_version>0</item_version>
        </sub_regions>
        <basic_blocks>
          <count>1</count>
          <item_version>0</item_version>
          <item>8</item>
        </basic_blocks>
        <mII>-1</mII>
        <mDepth>-1</mDepth>
        <mMinTripCount>-1</mMinTripCount>
        <mMaxTripCount>-1</mMaxTripCount>
        <mMinLatency>6</mMinLatency>
        <mMaxLatency>6</mMaxLatency>
        <mIsDfPipe>0</mIsDfPipe>
        <mDfPipe class_id="-1"/>
      </item>
    </cdfg_regions>
    <fsm class_id="24" tracking_level="1" version="0" object_id="_12">
      <states class_id="25" tracking_level="0" version="0">
        <count>7</count>
        <item_version>0</item_version>
        <item class_id="26" tracking_level="1" version="0" object_id="_13">
          <id>1</id>
          <operations class_id="27" tracking_level="0" version="0">
            <count>2</count>
            <item_version>0</item_version>
            <item class_id="28" tracking_level="1" version="0" object_id="_14">
              <id>5</id>
              <stage>1</stage>
              <latency>1</latency>
            </item>
            <item class_id_reference="28" object_id="_15">
              <id>6</id>
              <stage>7</stage>
              <latency>7</latency>
            </item>
          </operations>
        </item>
        <item class_id_reference="26" object_id="_16">
          <id>2</id>
          <operations>
            <count>1</count>
            <item_version>0</item_version>
            <item class_id_reference="28" object_id="_17">
              <id>6</id>
              <stage>6</stage>
              <latency>7</latency>
            </item>
          </operations>
        </item>
        <item class_id_reference="26" object_id="_18">
          <id>3</id>
          <operations>
            <count>1</count>
            <item_version>0</item_version>
            <item class_id_reference="28" object_id="_19">
              <id>6</id>
              <stage>5</stage>
              <latency>7</latency>
            </item>
          </operations>
        </item>
        <item class_id_reference="26" object_id="_20">
          <id>4</id>
          <operations>
            <count>1</count>
            <item_version>0</item_version>
            <item class_id_reference="28" object_id="_21">
              <id>6</id>
              <stage>4</stage>
              <latency>7</latency>
            </item>
          </operations>
        </item>
        <item class_id_reference="26" object_id="_22">
          <id>5</id>
          <operations>
            <count>1</count>
            <item_version>0</item_version>
            <item class_id_reference="28" object_id="_23">
              <id>6</id>
              <stage>3</stage>
              <latency>7</latency>
            </item>
          </operations>
        </item>
        <item class_id_reference="26" object_id="_24">
          <id>6</id>
          <operations>
            <count>1</count>
            <item_version>0</item_version>
            <item class_id_reference="28" object_id="_25">
              <id>6</id>
              <stage>2</stage>
              <latency>7</latency>
            </item>
          </operations>
        </item>
        <item class_id_reference="26" object_id="_26">
          <id>7</id>
          <operations>
            <count>5</count>
            <item_version>0</item_version>
            <item class_id_reference="28" object_id="_27">
              <id>2</id>
              <stage>1</stage>
              <latency>1</latency>
            </item>
            <item class_id_reference="28" object_id="_28">
              <id>3</id>
              <stage>1</stage>
              <latency>1</latency>
            </item>
            <item class_id_reference="28" object_id="_29">
              <id>4</id>
              <stage>1</stage>
              <latency>1</latency>
            </item>
            <item class_id_reference="28" object_id="_30">
              <id>6</id>
              <stage>1</stage>
              <latency>7</latency>
            </item>
            <item class_id_reference="28" object_id="_31">
              <id>7</id>
              <stage>1</stage>
              <latency>1</latency>
            </item>
          </operations>
        </item>
      </states>
      <transitions class_id="29" tracking_level="0" version="0">
        <count>6</count>
        <item_version>0</item_version>
        <item class_id="30" tracking_level="1" version="0" object_id="_32">
          <inState>1</inState>
          <outState>2</outState>
          <condition class_id="31" tracking_level="0" version="0">
            <id>7</id>
            <sop class_id="32" tracking_level="0" version="0">
              <count>1</count>
              <item_version>0</item_version>
              <item class_id="33" tracking_level="0" version="0">
                <count>0</count>
                <item_version>0</item_version>
              </item>
            </sop>
          </condition>
        </item>
        <item class_id_reference="30" object_id="_33">
          <inState>2</inState>
          <outState>3</outState>
          <condition>
            <id>8</id>
            <sop>
              <count>1</count>
              <item_version>0</item_version>
              <item>
                <count>0</count>
                <item_version>0</item_version>
              </item>
            </sop>
          </condition>
        </item>
        <item class_id_reference="30" object_id="_34">
          <inState>3</inState>
          <outState>4</outState>
          <condition>
            <id>9</id>
            <sop>
              <count>1</count>
              <item_version>0</item_version>
              <item>
                <count>0</count>
                <item_version>0</item_version>
              </item>
            </sop>
          </condition>
        </item>
        <item class_id_reference="30" object_id="_35">
          <inState>4</inState>
          <outState>5</outState>
          <condition>
            <id>10</id>
            <sop>
              <count>1</count>
              <item_version>0</item_version>
              <item>
                <count>0</count>
                <item_version>0</item_version>
              </item>
            </sop>
          </condition>
        </item>
        <item class_id_reference="30" object_id="_36">
          <inState>5</inState>
          <outState>6</outState>
          <condition>
            <id>11</id>
            <sop>
              <count>1</count>
              <item_version>0</item_version>
              <item>
                <count>0</count>
                <item_version>0</item_version>
              </item>
            </sop>
          </condition>
        </item>
        <item class_id_reference="30" object_id="_37">
          <inState>6</inState>
          <outState>7</outState>
          <condition>
            <id>12</id>
            <sop>
              <count>1</count>
              <item_version>0</item_version>
              <item>
                <count>0</count>
                <item_version>0</item_version>
              </item>
            </sop>
          </condition>
        </item>
      </transitions>
    </fsm>
    <res class_id="34" tracking_level="1" version="0" object_id="_38">
      <dp_component_resource class_id="35" tracking_level="0" version="0">
        <count>1</count>
        <item_version>0</item_version>
        <item class_id="36" tracking_level="0" version="0">
          <first>mul11_mul_32s_5nsbkb_U1 (mul11_mul_32s_5nsbkb)</first>
          <second class_id="37" tracking_level="0" version="0">
            <count>3</count>
            <item_version>0</item_version>
            <item class_id="38" tracking_level="0" version="0">
              <first>DSP48E</first>
              <second>4</second>
            </item>
            <item>
              <first>FF</first>
              <second>247</second>
            </item>
            <item>
              <first>LUT</first>
              <second>19</second>
            </item>
          </second>
        </item>
      </dp_component_resource>
      <dp_expression_resource>
        <count>0</count>
        <item_version>0</item_version>
      </dp_expression_resource>
      <dp_fifo_resource>
        <count>0</count>
        <item_version>0</item_version>
      </dp_fifo_resource>
      <dp_memory_resource>
        <count>0</count>
        <item_version>0</item_version>
      </dp_memory_resource>
      <dp_multiplexer_resource>
        <count>1</count>
        <item_version>0</item_version>
        <item>
          <first>ap_NS_fsm</first>
          <second>
            <count>4</count>
            <item_version>0</item_version>
            <item>
              <first>(0Size)</first>
              <second>8</second>
            </item>
            <item>
              <first>(1Bits)</first>
              <second>1</second>
            </item>
            <item>
              <first>(2Count)</first>
              <second>8</second>
            </item>
            <item>
              <first>LUT</first>
              <second>41</second>
            </item>
          </second>
        </item>
      </dp_multiplexer_resource>
      <dp_register_resource>
        <count>1</count>
        <item_version>0</item_version>
        <item>
          <first>ap_CS_fsm</first>
          <second>
            <count>3</count>
            <item_version>0</item_version>
            <item>
              <first>(Bits)</first>
              <second>7</second>
            </item>
            <item>
              <first>(Consts)</first>
              <second>0</second>
            </item>
            <item>
              <first>FF</first>
              <second>7</second>
            </item>
          </second>
        </item>
      </dp_register_resource>
      <dp_dsp_resource>
        <count>1</count>
        <item_version>0</item_version>
        <item>
          <first>mul11_mul_32s_5nsbkb_U1</first>
          <second>
            <count>0</count>
            <item_version>0</item_version>
          </second>
        </item>
      </dp_dsp_resource>
      <dp_component_map class_id="39" tracking_level="0" version="0">
        <count>1</count>
        <item_version>0</item_version>
        <item class_id="40" tracking_level="0" version="0">
          <first>mul11_mul_32s_5nsbkb_U1 (mul11_mul_32s_5nsbkb)</first>
          <second>
            <count>1</count>
            <item_version>0</item_version>
            <item>6</item>
          </second>
        </item>
      </dp_component_map>
      <dp_expression_map>
        <count>0</count>
        <item_version>0</item_version>
      </dp_expression_map>
      <dp_fifo_map>
        <count>0</count>
        <item_version>0</item_version>
      </dp_fifo_map>
      <dp_memory_map>
        <count>0</count>
        <item_version>0</item_version>
      </dp_memory_map>
    </res>
    <node_label_latency class_id="41" tracking_level="0" version="0">
      <count>3</count>
      <item_version>0</item_version>
      <item class_id="42" tracking_level="0" version="0">
        <first>5</first>
        <second class_id="43" tracking_level="0" version="0">
          <first>0</first>
          <second>0</second>
        </second>
      </item>
      <item>
        <first>6</first>
        <second>
          <first>0</first>
          <second>6</second>
        </second>
      </item>
      <item>
        <first>7</first>
        <second>
          <first>6</first>
          <second>0</second>
        </second>
      </item>
    </node_label_latency>
    <bblk_ent_exit class_id="44" tracking_level="0" version="0">
      <count>1</count>
      <item_version>0</item_version>
      <item class_id="45" tracking_level="0" version="0">
        <first>8</first>
        <second class_id="46" tracking_level="0" version="0">
          <first>0</first>
          <second>6</second>
        </second>
      </item>
    </bblk_ent_exit>
    <regions class_id="47" tracking_level="0" version="0">
      <count>0</count>
      <item_version>0</item_version>
    </regions>
    <dp_fu_nodes class_id="48" tracking_level="0" version="0">
      <count>2</count>
      <item_version>0</item_version>
      <item class_id="49" tracking_level="0" version="0">
        <first>14</first>
        <second>
          <count>1</count>
          <item_version>0</item_version>
          <item>5</item>
        </second>
      </item>
      <item>
        <first>20</first>
        <second>
          <count>7</count>
          <item_version>0</item_version>
          <item>6</item>
          <item>6</item>
          <item>6</item>
          <item>6</item>
          <item>6</item>
          <item>6</item>
          <item>6</item>
        </second>
      </item>
    </dp_fu_nodes>
    <dp_fu_nodes_expression class_id="51" tracking_level="0" version="0">
      <count>0</count>
      <item_version>0</item_version>
    </dp_fu_nodes_expression>
    <dp_fu_nodes_module>
      <count>1</count>
      <item_version>0</item_version>
      <item class_id="52" tracking_level="0" version="0">
        <first>grp_fu_20</first>
        <second>
          <count>7</count>
          <item_version>0</item_version>
          <item>6</item>
          <item>6</item>
          <item>6</item>
          <item>6</item>
          <item>6</item>
          <item>6</item>
          <item>6</item>
        </second>
      </item>
    </dp_fu_nodes_module>
    <dp_fu_nodes_io>
      <count>1</count>
      <item_version>0</item_version>
      <item>
        <first>a_read_read_fu_14</first>
        <second>
          <count>1</count>
          <item_version>0</item_version>
          <item>5</item>
        </second>
      </item>
    </dp_fu_nodes_io>
    <return_ports>
      <count>1</count>
      <item_version>0</item_version>
      <item>
        <first>ap_return</first>
        <second>
          <count>1</count>
          <item_version>0</item_version>
          <item>7</item>
        </second>
      </item>
    </return_ports>
    <dp_mem_port_nodes class_id="53" tracking_level="0" version="0">
      <count>0</count>
      <item_version>0</item_version>
    </dp_mem_port_nodes>
    <dp_reg_nodes>
      <count>1</count>
      <item_version>0</item_version>
      <item>
        <first>26</first>
        <second>
          <count>1</count>
          <item_version>0</item_version>
          <item>5</item>
        </second>
      </item>
    </dp_reg_nodes>
    <dp_regname_nodes>
      <count>1</count>
      <item_version>0</item_version>
      <item>
        <first>a_read_reg_26</first>
        <second>
          <count>1</count>
          <item_version>0</item_version>
          <item>5</item>
        </second>
      </item>
    </dp_regname_nodes>
    <dp_reg_phi>
      <count>0</count>
      <item_version>0</item_version>
    </dp_reg_phi>
    <dp_regname_phi>
      <count>0</count>
      <item_version>0</item_version>
    </dp_regname_phi>
    <dp_port_io_nodes class_id="54" tracking_level="0" version="0">
      <count>1</count>
      <item_version>0</item_version>
      <item class_id="55" tracking_level="0" version="0">
        <first>a</first>
        <second>
          <count>1</count>
          <item_version>0</item_version>
          <item>
            <first>read</first>
            <second>
              <count>1</count>
              <item_version>0</item_version>
              <item>5</item>
            </second>
          </item>
        </second>
      </item>
    </dp_port_io_nodes>
    <port2core class_id="56" tracking_level="0" version="0">
      <count>0</count>
      <item_version>0</item_version>
    </port2core>
    <node2core>
      <count>0</count>
      <item_version>0</item_version>
    </node2core>
  </syndb>
</boost_serialization>
