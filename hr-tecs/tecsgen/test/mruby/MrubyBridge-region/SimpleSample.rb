#
# $Id: SimpleSample.rb 1887 2012-09-14 07:26:36Z okuma-top $
#

# mruby �� SimpleSapmle
#  Sample ����� mruby ��������

# �֥�å������ bridge �˳���դ���
p "creating bridge"
bridge = TECS::TsSample.new( "SimpleBridge" )

# (1) sayHello ��ƤӽФ�
#	 ER  sayHello( [in]int32_t times );

times = 5
p "TEST sayHello #{times} times"
bridge.sayHello( times )

# (2) howAreYou ��ƤӽФ�
#	 ER  howAreYou( [out,string(len)]char_t *buf, [in]int32_t len );

# howoAreYou �ΰ��������
len = 32
buf = TECS::CharPointer.new( len )

# howAreYou ��ƤӽФ�
p "TEST howAreYou"
bridge.howAreYou( buf, len )
print buf.to_s, "\n"
