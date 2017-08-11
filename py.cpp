#include "py.h"
#include <QFile>
#include <QDebug>

const char* PY_mb_space ={u8"" };
const char* PY_mb_a = {u8"啊阿吖嗄腌锕呵安按爱暗埃"};
const char* PY_mb_ai = {u8"爱埃碍矮挨唉哎哀皑癌蔼艾隘呆捱嗳嗌嫒瑷暧砹锿霭"};
const char* PY_mb_an = {u8"安按暗岸案俺氨胺鞍谙埯揞犴庵桉铵鹌黯广厂" };
const char* PY_mb_ang ={u8"昂肮盎" };
const char* PY_mb_ao ={u8"凹奥敖熬翱袄傲懊澳嚣坳拗嗷岙廒遨媪骜獒聱螯鏊鳌鏖" };
const char* PY_mb_b ={u8"不部本鲍柏毕变比并别百报步办表" };
const char* PY_mb_ba ={u8"把八吧巴拔霸罢爸坝芭捌扒叭笆疤跋靶耙茇菝岜灞钯粑鲅魃" };
const char* PY_mb_bai ={u8"百白败摆伯柏佰拜稗捭掰" };
const char* PY_mb_ban ={u8"办半板班般版拌搬斑扳伴颁扮瓣绊阪坂钣瘢癍舨" };
const char* PY_mb_bang ={u8"帮棒邦榜梆膀绑磅蚌镑傍谤蒡浜" };
const char* PY_mb_bao ={u8"报保包剥薄胞暴宝饱抱爆炮堡刨苞褒雹豹鲍曝瀑葆孢煲鸨褓趵龅勹宀" };
const char* PY_mb_bei ={u8"北被倍备背辈贝杯卑臂悲碑钡狈惫焙孛陂邶埤萆蓓呗悖碚鹎褙鐾鞴" };
const char* PY_mb_ben ={u8"本奔苯笨夯畚坌贲锛" };
const char* PY_mb_beng ={u8"泵崩蚌绷甭蹦迸嘣甏" };
const char* PY_mb_bi ={u8"比必避闭辟笔壁臂毕彼逼币鼻蔽秘鄙碧蓖毙毖庇痹敝弊陛拂泌匕俾埤芘荜荸萆薜吡哔狴庳愎滗濞弼妣婢嬖璧贲睥畀铋秕裨筚箅篦舭襞跸髀" };
const char* PY_mb_bian ={u8"变边便编遍辩扁辨鞭贬卞辫匾弁苄忭汴缏飚煸砭碥窆褊蝙笾鳊彼岸" }; //来 自 ：ST_M8._C N
const char* PY_mb_biao ={u8"表标彪膘勺婊骠杓飑飙镖镳瘭裱鳔髟" };
const char* PY_mb_bie ={u8"别鳖憋瘪蹩" };
const char* PY_mb_bin ={u8"宾彬斌濒滨摈傧豳缤玢槟殡膑镔髌鬓" };
const char* PY_mb_bing ={u8"并病兵柄冰丙饼秉炳屏禀邴摒槟" };
const char* PY_mb_bo ={u8"波播剥伯拨薄博勃驳玻泊柏卜菠钵搏铂箔帛舶脖膊渤魄孛亳啵饽檗掰擘礴钹鹁簸趵跛踣" };
const char* PY_mb_bu ={u8"不部步布补捕埔卜堡哺埠簿怖卟逋瓿晡钚钸醭" };
const char* PY_mb_c ={u8"产成程陈蔡曹崔楚褚池仇晁岑从此处车场传厂才次查" };
const char* PY_mb_ca ={u8"擦拆嚓礤" };
const char* PY_mb_cai ={u8"采才材菜财裁彩猜睬踩蔡" };
const char* PY_mb_can ={u8"参残蚕灿餐惭惨孱骖璨粲黪" };
const char* PY_mb_cang ={u8"藏仓苍舱沧" };
const char* PY_mb_cao ={u8"草槽操糙曹嘈漕螬艚" };
const char* PY_mb_ce ={u8"测策侧册厕恻" };
const char* PY_mb_cen ={u8"参岑涔" };
const char* PY_mb_ceng ={u8"层曾蹭噌" };
const char* PY_mb_ch ={u8"差长常昌超陈程城持重出初" };
const char* PY_mb_cha ={u8"查差插察茶叉茬碴搽岔诧刹喳嚓猹馇汊姹杈楂槎檫锸镲衩" };
const char* PY_mb_chai ={u8"差柴拆豺侪钗瘥虿" };
const char* PY_mb_chan ={u8"产单铲阐搀掺蝉馋谗缠颤冁谄蒇廛忏潺澶孱羼婵骣觇禅镡蟾躔" };
const char* PY_mb_chang ={u8"长常场厂唱肠昌倡偿畅猖尝敞裳倘伥鬯苌菖徜怅惝阊娼嫦昶氅鲳" };
const char* PY_mb_chao ={u8"朝超潮巢抄钞嘲吵炒绰剿怊晁焯耖" };
const char* PY_mb_che ={u8"车彻尺撤扯掣澈坼砗" };
const char* PY_mb_chen ={u8"陈沉称衬尘臣晨沈郴辰忱趁伧谌谶抻嗔宸琛榇碜龀" };
const char* PY_mb_cheng ={u8"成程称城承乘呈盛撑诚橙惩澄逞骋秤丞埕噌枨柽塍瞠铖铛裎蛏酲" };
const char* PY_mb_chi ={u8"持尺齿吃赤池迟翅斥耻痴匙弛驰侈炽傺坻墀茌叱哧啻嗤彳饬媸敕眵鸱瘛褫蚩螭笞篪豉踟魑" };
const char* PY_mb_chong ={u8"种虫重充冲崇涌宠茺忡憧铳舂艟" };
const char* PY_mb_chou ={u8"抽仇臭酬畴踌稠愁筹绸瞅丑俦帱惆瘳雠" };
const char* PY_mb_chu ={u8"出处除初础触楚锄储畜橱厨躇雏滁矗搐亍刍怵憷绌杵楮樗褚蜍蹰黜屮" };
const char* PY_mb_chuai ={u8"揣搋啜嘬膪踹" };
const char* PY_mb_chuan ={u8"传船穿串川椽喘舛遄巛氚钏舡" };
const char* PY_mb_chuang ={u8"床创窗闯疮幢怆" };
const char* PY_mb_chui ={u8"吹垂锤椎炊捶陲棰槌" };
const char* PY_mb_chun ={u8"春纯醇椿唇淳蠢莼鹑蝽" };
const char* PY_mb_chuo ={u8"戳绰啜辍踔龊" };
const char* PY_mb_ci ={u8"此次刺磁雌词茨疵辞慈瓷赐伺兹茈呲祠鹚糍" };
const char* PY_mb_cong ={u8"从丛聪葱囱匆苁淙骢琮璁" };
const char* PY_mb_cou ={u8"凑楱辏腠" };
const char* PY_mb_cu ={u8"粗促醋簇卒蔟徂猝殂酢蹙蹴" };
const char* PY_mb_cuan ={u8"篡蹿窜攒汆撺爨镩" };
const char* PY_mb_cui ={u8"催脆淬粹摧衰崔瘁翠萃啐悴璀榱毳隹" }; //来 自 ：ST_M8._C N
const char* PY_mb_cun ={u8"存村寸蹲忖皴" };
const char* PY_mb_cuo ={u8"错措撮磋搓挫厝嵯脞锉矬痤瘥鹾蹉" };
const char* PY_mb_d ={u8"的大地杜董段戴邓丁窦狄翟刁电党定等当队点代道" };
const char* PY_mb_da ={u8"大打达答搭塔瘩耷哒嗒怛妲沓疸褡笪靼鞑" };
const char* PY_mb_dai ={u8"大代带待袋戴呆歹傣殆贷逮怠埭甙呔岱迨骀绐玳黛" };
const char* PY_mb_dan ={u8"单但弹担石蛋淡胆氮丹旦耽郸掸惮诞儋萏啖澹殚赕眈疸瘅聃箪" };
const char* PY_mb_dang ={u8"党当档挡荡谠凼菪宕砀裆" };
const char* PY_mb_dao ={u8"到道导刀倒稻岛捣盗蹈祷悼叨帱忉氘焘纛" };
const char* PY_mb_de ={u8"的得地德底锝" };
const char* PY_mb_deng ={u8"等灯登邓澄蹬瞪凳噔嶝戥磴镫簦" };
const char* PY_mb_di ={u8"的地第低敌底提帝抵滴弟递堤迪笛狄涤翟嫡蒂缔氐籴诋谛邸坻荻嘀娣绨柢棣觌砥碲睇镝羝骶" };
const char* PY_mb_dia ={u8"嗲" };
const char* PY_mb_dian ={u8"电点垫典店颠淀掂滇碘靛佃甸惦奠殿阽坫巅玷钿癜癫簟踮" };
const char* PY_mb_diao ={u8"调掉吊鸟碉叼雕凋刁钓铞铫貂鲷" };
const char* PY_mb_die ={u8"迭跌爹碟蝶谍叠垤堞揲喋牒瓞耋踮蹀鲽" };
const char* PY_mb_ding ={u8"定顶钉丁订盯叮鼎锭仃啶玎腚碇町铤疔耵酊" };
const char* PY_mb_diu ={u8"丢铥" };
const char* PY_mb_dong ={u8"动东冬懂洞冻董栋侗恫垌咚岽峒氡胨胴硐鸫" };
const char* PY_mb_dou ={u8"斗都豆读兜抖陡逗痘蔸窦蚪篼" };
const char* PY_mb_du ={u8"度都毒独读渡杜堵镀顿督犊睹赌肚妒芏嘟渎椟牍蠹笃髑黩" };
const char* PY_mb_duan ={u8"断端段短锻缎椴煅簖" };
const char* PY_mb_dui ={u8"对队堆敦兑怼憝碓" };
const char* PY_mb_dun ={u8"盾吨顿蹲敦墩囤钝遁沌炖砘礅盹镦趸" };
const char* PY_mb_duo ={u8"多度夺朵掇哆垛躲跺舵剁惰堕驮咄哚沲缍柁铎裰踱" };
const char* PY_mb_e ={u8"恶额恩俄耳饵蛾饿峨鹅讹娥厄扼遏鄂噩谔垩苊莪萼呃愕屙婀轭腭锇锷鹗颚鳄" };
const char* PY_mb_ei ={u8"诶" };
const char* PY_mb_en ={u8"恩蒽摁" };
const char* PY_mb_er ={u8"而二尔儿耳饵洱贰佴迩珥铒鸸鲕" };
const char* PY_mb_f ={u8"分发范樊方冯反放复风防非封富翻" };
const char* PY_mb_fa ={u8"发法阀乏伐罚筏珐垡砝" };
const char* PY_mb_fan ={u8"反翻范犯饭繁泛番凡烦返藩帆樊矾钒贩蕃蘩幡梵燔畈蹯" };
const char* PY_mb_fang ={u8"方放防访房纺仿妨芳肪坊邡彷枋钫舫鲂" };
const char* PY_mb_fei ={u8"非肥飞费废肺沸菲匪啡诽吠芾狒悱淝妃绯榧腓斐扉镄痱蜚篚翡霏鲱" };
const char* PY_mb_fen ={u8"分粉奋份粪纷芬愤酚吩氛坟焚汾忿偾瀵玢棼鲼鼢" };
const char* PY_mb_feng ={u8"风封蜂丰缝峰锋疯奉枫烽逢冯讽凤俸酆葑唪沣砜" };
const char* PY_mb_fo ={u8"佛" };
const char* PY_mb_fou ={u8"否缶" };
const char* PY_mb_fu ={u8"复服副府夫负富附福伏符幅腐浮辅付腹妇孵覆扶辐傅佛缚父弗甫肤氟敷拂俘涪袱抚俯釜斧脯腑赴赋阜讣咐匐凫郛芙芾苻茯莩菔拊呋幞怫滏艴孚驸绂绋桴赙祓砩黻黼罘稃馥蚨蜉蝠蝮麸趺跗鲋鳆" };
const char* PY_mb_g ={u8"个国工过高郭戈葛耿巩龚甘干古贾谷顾关管各革公根更改光广果格共搞" };
const char* PY_mb_ga ={u8"夹噶嘎胳尬尕尜旮钆" }; //来 自 ：ST_M8._C N
const char* PY_mb_gai ={u8"改该盖概钙溉芥丐陔垓戤赅" };
const char* PY_mb_gan ={u8"干杆感敢赶甘肝秆柑竿赣乾坩苷尴擀泔淦澉绀橄旰矸疳酐" };
const char* PY_mb_gang ={u8"刚钢缸纲岗港杠冈肛扛戆罡筻" };
const char* PY_mb_gao ={u8"高搞告稿膏篙皋羔糕镐睾诰郜藁缟槔槁杲锆" };
const char* PY_mb_ge ={u8"个各革合格割歌隔盖哥葛铬阁戈搁鸽胳疙蛤咯屹鬲仡哿圪塥嗝纥搿膈硌镉袼颌虼舸骼" };
const char* PY_mb_gei ={u8"给" };
const char* PY_mb_gen ={u8"根跟亘茛哏艮" };
const char* PY_mb_geng ={u8"更耕颈庚羹埂耿梗哽赓绠鲠" };
const char* PY_mb_gong ={u8"工公共供功攻红巩贡汞宫恭龚躬弓拱珙肱蚣觥" };
const char* PY_mb_gou ={u8"够构沟句狗钩勾购苟垢佝诟岣遘媾缑枸觏彀笱篝鞲" };
const char* PY_mb_gu ={u8"鼓固古骨故顾股谷估雇孤姑贾辜菇咕箍沽蛊嘏诂菰呱崮汩梏轱牯牿臌毂瞽罟钴锢鸪鹄痼蛄酤觚鲴鹘" };
const char* PY_mb_gua ={u8"挂刮瓜括剐寡褂卦诖呱栝胍鸹" };
const char* PY_mb_guai ={u8"怪乖拐掴" };
const char* PY_mb_guan ={u8"关管观官灌贯惯冠馆罐棺纶倌莞掼涫盥鹳矜鳏" };
const char* PY_mb_guang ={u8"光广逛咣犷桄胱" };
const char* PY_mb_gui ={u8"规贵归硅鬼轨龟桂瑰圭闺诡癸柜跪刽傀炔匦刿庋宄妫桧炅晷皈簋鲑鳜" };
const char* PY_mb_gun ={u8"滚辊棍衮绲磙鲧" };
const char* PY_mb_guo ={u8"国过果锅郭涡裹馘埚掴呙帼崞猓椁虢聒蜾蝈" };
const char* PY_mb_h ={u8"和会后何黄胡洪侯贺霍扈韩华郝化好合还活很回号毫花或海话红火害" };
const char* PY_mb_ha ={u8"哈蛤虾铪" };
const char* PY_mb_hai ={u8"还海害孩骸氦亥骇嘿咳嗨胲醢" };
const char* PY_mb_han ={u8"含焊旱喊汉寒汗函韩酣憨邯涵罕翰撼捍憾悍邗菡撖阚瀚晗焓顸颔蚶鼾" };
const char* PY_mb_hang ={u8"行航夯杭吭巷沆绗珩颃" };
const char* PY_mb_hao ={u8"好号毫耗豪郝浩镐壕嚎貉蒿薅嗥嚆濠灏昊皓颢蚝" };
const char* PY_mb_he ={u8"和合河何核赫荷褐喝贺呵禾吓盒菏貉阂涸鹤诃劾壑嗬阖纥曷盍颌蚵翮" };
const char* PY_mb_hei ={u8"黑嘿嗨" };
const char* PY_mb_hen ={u8"很狠痕恨" };
const char* PY_mb_heng ={u8"横衡恒哼亨蘅行珩桁" };
const char* PY_mb_hong ={u8"红洪轰烘哄虹鸿宏弘黉訇讧荭蕻薨闳泓" };
const char* PY_mb_hou ={u8"后候厚侯喉猴吼堠後逅瘊篌糇鲎骺" };
const char* PY_mb_hu ={u8"和护互湖呼户弧乎胡糊虎忽核瑚戏壶葫蝴狐唬沪冱唿囫岵猢怙惚浒滹琥槲轷觳烀煳戽扈祜瓠鹄鹕鹱笏醐斛" };
const char* PY_mb_hua ={u8"化花话划滑华画哗猾豁骅桦砉铧" };
const char* PY_mb_huai ={u8"坏怀划淮槐徊踝" };
const char* PY_mb_huan ={u8"还环换欢缓患幻焕桓唤痪豢涣宦郇奂萑擐圜獾洹浣漶寰逭缳锾鲩鬟" };
const char* PY_mb_huang ={u8"黄簧荒皇慌蝗磺凰惶煌晃幌恍谎隍徨湟潢遑璜肓癀蟥篁鳇" };
const char* PY_mb_hui ={u8"会回灰挥辉汇毁慧恢绘惠徽溃堕徊蛔悔卉晦贿秽烩讳诲诙茴荟蕙咴哕喙隳洄浍彗缋珲桧晖恚虺蟪麾" };
const char* PY_mb_hun ={u8"混浑荤昏婚魂诨馄阍溷" };
const char* PY_mb_huo ={u8"和活或火货获伙霍豁惑祸劐藿攉嚯夥钬锪镬耠蠖" };
const char* PY_mb_j ={u8"级贾江蒋姜焦金靳晋就进加经家结阶间件及解较机军接教极九见" };
const char* PY_mb_ji ={u8"级及机极几积给基其记己期系革计集即际季激济技击继急剂既纪寄挤鸡迹绩齐奇吉脊辑籍疾肌棘畸圾稽箕饥讥姬缉汲嫉蓟冀伎祭悸寂忌妓藉丌亟乩剞佶偈诘墼芨芰荠蒺蕺掎叽咭哜唧岌嵴洎屐骥畿玑楫殛戟戢赍觊犄齑矶羁嵇稷瘠虮笈笄暨跻跽霁鲚鲫髻麂" };
const char* PY_mb_jia ={u8"加家架价甲夹假钾贾稼驾嘉枷佳荚颊嫁茄挟嘏伽郏葭岬浃迦珈戛胛恝铗镓痂瘕袷蛱笳袈跏" };
const char* PY_mb_jian ={u8"间件见建坚减检践尖简碱剪艰渐肩键健柬鉴剑歼监兼浅奸箭茧舰俭笺煎缄硷拣捡荐槛贱饯溅涧僭谏谫菅蒹搛囝湔蹇謇缣枧楗戋戬牮犍毽腱睑锏鹣裥笕翦趼踺鲣鞯" };
const char* PY_mb_jiang ={u8"将降讲强江浆蒋奖疆僵姜桨匠酱茳洚绛缰犟礓耩糨豇" };
const char* PY_mb_jiao ={u8"较教交角叫脚胶浇焦觉校蕉搅酵郊铰窖椒礁骄娇嚼矫侥狡饺缴绞剿轿佼僬艽茭挢噍峤徼姣敫皎鹪蛟醮跤鲛" };
const char* PY_mb_jie ={u8"结阶解接节家界截介借价届街揭洁杰竭皆秸劫桔捷睫姐戒藉芥疥诫楷偈讦诘拮喈嗟婕孑桀碣疖颉蚧羯鲒骱" };
const char* PY_mb_jin ={u8"进金近紧斤今尽仅劲浸禁津筋锦晋巾襟谨靳烬卺荩堇噤馑廑妗缙瑾槿赆觐衿矜" };
const char* PY_mb_jing ={u8"经精京径井静竟晶净境镜景警劲茎敬惊睛竞荆兢鲸粳痉靖刭儆阱菁獍憬泾迳弪婧肼胫腈旌靓" };
const char* PY_mb_jiong ={u8"炯窘迥炅扃" };
const char* PY_mb_jiu ={u8"就九旧究久救酒纠揪玖韭灸厩臼舅咎疚僦啾阄柩桕鸠鹫赳鬏" };
const char* PY_mb_ju ={u8"具据局举车句聚距巨居锯剧矩拒柜桔鞠拘狙疽驹菊咀沮踞俱惧炬倨讵苣苴莒掬遽屦琚枸椐榘榉橘犋飓钜锔窭裾趄醵踽龃雎瞿鞫" };
const char* PY_mb_juan ={u8"卷捐鹃娟倦眷绢俊鄄狷涓桊蠲锩镌隽" };
const char* PY_mb_jue ={u8"决觉绝角脚掘嚼撅攫抉倔爵诀厥劂谲矍蕨嗟噘噱崛獗孓珏桷橛爝镢蹶觖巨额" };
const char* PY_mb_jun ={u8"军均菌君龟钧峻俊竣浚郡骏捃皲筠麇" };
const char* PY_mb_k ={u8"可开看蒯克孔邝寇科口空苦快考刻靠况块困宽矿抗卡" };
const char* PY_mb_ka ={u8"卡喀咖咯佧咔胩" };
const char* PY_mb_kai ={u8"开凯揩楷慨剀垲蒈忾恺铠锎锴" };
const char* PY_mb_kan ={u8"看刊坎槛堪勘砍嵌侃莰阚戡龛瞰" };
const char* PY_mb_kang ={u8"抗康炕慷糠扛亢伉闶钪" };
const char* PY_mb_kao ={u8"考靠拷烤尻栲犒铐" };
const char* PY_mb_ke ={u8"可克科刻客壳颗棵柯呵坷苛磕咳渴课嗑岢恪溘骒缂珂轲氪瞌钶锞稞疴窠颏蝌髁" };
const char* PY_mb_ken ={u8"肯啃垦恳裉" };
const char* PY_mb_keng ={u8"坑吭铿" };
const char* PY_mb_kong ={u8"孔空控恐倥崆箜" };
const char* PY_mb_kou ={u8"口扣抠寇芤蔻叩眍筘" };
const char* PY_mb_ku ={u8"苦库枯酷哭窟裤刳堀喾绔骷" };
const char* PY_mb_kua ={u8"跨夸垮挎胯侉" };
const char* PY_mb_kuai ={u8"会快块筷侩蒯郐哙狯浍脍" };
const char* PY_mb_kuan ={u8"宽款髋" };
const char* PY_mb_kuang ={u8"况矿狂框匡筐眶旷诓诳邝圹夼哐纩贶" };
const char* PY_mb_kui ={u8"奎溃馈亏盔岿窥葵魁傀愧馗匮夔隗蒉揆喹喟悝愦逵暌睽聩蝰篑跬" };
const char* PY_mb_kun ={u8"困昆坤捆悃阃琨锟醌鲲髡" };
const char* PY_mb_kuo ={u8"扩括适阔廓栝蛞" };
const char* PY_mb_l ={u8"了来赖罗吕刘鲁李林雷廖卢梁厉廉陆龙黎鹿量理路里论两利领流力立料连老六轮类列" };
const char* PY_mb_la ={u8"拉落啦蜡腊蓝垃喇辣剌邋旯砬瘌" };
const char* PY_mb_lai ={u8"来赖莱崃徕涞濑赉睐铼癞籁" };
const char* PY_mb_lan ={u8"兰烂蓝览栏婪拦篮阑澜谰揽懒缆滥岚漤榄斓罱镧褴" };
const char* PY_mb_lang ={u8"浪朗郎狼琅榔廊莨蒗啷阆锒稂螂" };
const char* PY_mb_lao ={u8"老劳落牢涝捞络佬姥酪烙潦唠崂栳铑铹痨耢醪" };
const char* PY_mb_le ={u8"了乐勒肋仂叻泐鳓" };
const char* PY_mb_lei ={u8"类雷累勒垒泪镭蕾磊儡擂肋羸诔嘞嫘缧檑耒酹" };
const char* PY_mb_leng ={u8"冷棱楞塄愣" };
const char* PY_mb_li ={u8"理里利力立离例历粒厘礼李隶黎璃励犁梨丽厉篱狸漓鲤莉荔吏栗砾傈俐痢沥哩鬲俪俚郦坜苈莅蓠藜呖唳喱猁悝溧澧逦娌嫠骊缡枥栎轹戾砺詈罹锂鹂疠疬蛎蜊蠡笠篥粝醴跞雳鲡鳢黧" };
const char* PY_mb_lia ={u8"俩" };
const char* PY_mb_lian ={u8"连联练炼脸链莲镰廉怜涟帘敛恋蔹奁潋濂琏楝殓臁裢裣蠊鲢立案" };
const char* PY_mb_liang ={u8"量两粮良亮梁凉辆粱晾谅墚莨椋踉靓魉" };
const char* PY_mb_liao ={u8"了料疗辽僚撩聊燎寥潦撂镣廖蓼尥嘹獠寮缭钌鹩" };
const char* PY_mb_lie ={u8"列裂烈劣猎冽埒捩咧洌趔躐鬣" };
const char* PY_mb_lin ={u8"林磷临邻淋麟琳霖鳞凛赁吝蔺啉嶙廪懔遴檩辚膦瞵粼躏" };
const char* PY_mb_ling ={u8"领另零令灵岭铃龄凌棱陵拎玲菱伶羚酃苓呤囹泠绫柃棂瓴聆蛉翎鲮" };
const char* PY_mb_liu ={u8"流六留刘硫柳陆馏瘤溜琉榴碌浏遛骝绺旒熘锍镏鹨鎏" };
const char* PY_mb_lo ={u8"咯" };
const char* PY_mb_long ={u8"龙垄弄笼隆聋咙窿拢陇垅茏泷珑栊胧砻癃" };
const char* PY_mb_lou ={u8"漏露楼娄搂篓陋偻蒌喽嵝镂瘘耧蝼髅" };
const char* PY_mb_lu ={u8"路录陆炉露芦卢颅庐掳卤虏鲁麓碌赂鹿潞禄戮垆撸噜泸渌漉逯璐栌橹轳辂辘氇胪镥鸬鹭簏舻鲈六绿" };
const char* PY_mb_luan ={u8"卵乱峦挛孪滦脔娈栾鸾銮" };
const char* PY_mb_lue ={u8"略掠锊" };
const char* PY_mb_lun ={u8"论轮伦抡仑沦纶囵" };
const char* PY_mb_luo ={u8"落罗螺洛络逻咯烙萝锣箩骡裸骆倮蠃荦捋摞猡泺漯珞椤脶硌镙瘰雒" };
const char* PY_mb_lv ={u8"率律旅虑驴吕铝侣履屡缕氯滤绿捋闾榈膂稆褛偻" };
const char* PY_mb_m ={u8"面命马孟穆梅糜们民毛茅苗莫没米明么每门名磨美密满亩目呒" };
const char* PY_mb_ma ={u8"马么麻吗妈骂嘛码摩抹玛蚂唛犸嬷杩蟆" };
const char* PY_mb_mai ={u8"麦脉卖买埋迈劢荬霾" };
const char* PY_mb_man ={u8"满慢曼漫蔓瞒馒蛮谩墁幔缦熳镘颟螨鳗鞔" };
const char* PY_mb_mang ={u8"忙芒盲茫氓莽邙漭硭蟒" };
const char* PY_mb_mao ={u8"毛矛冒貌贸帽猫茅锚铆卯茂袤茆峁泖瑁昴牦耄旄懋瞀蟊髦" };
const char* PY_mb_me ={u8"么麽" };
const char* PY_mb_mei ={u8"没每美煤霉酶梅妹眉玫枚媒镁昧寐媚糜谜莓嵋猸浼湄楣镅鹛袂魅" };
const char* PY_mb_men ={u8"们门闷扪焖懑钔" };
const char* PY_mb_meng ={u8"孟猛蒙盟梦萌锰氓檬勐甍瞢懵朦礞虻蜢蠓艋艨" };
const char* PY_mb_mi ={u8"米密迷蜜秘眯醚靡糜谜弥觅泌幂芈谧蘼咪嘧猕汨宓弭脒祢敉糸縻麋" };
const char* PY_mb_mian ={u8"面棉免绵眠冕勉娩缅沔渑湎腼眄" };
const char* PY_mb_miao ={u8"苗秒描庙妙瞄藐渺喵邈缈缪杪淼眇鹋" };
const char* PY_mb_mie ={u8"灭蔑乜咩蠛篾" };
const char* PY_mb_min ={u8"民敏抿皿悯闽苠岷闵泯缗玟珉愍黾鳘" };
const char* PY_mb_ming ={u8"命明名鸣螟盟铭冥茗溟暝瞑酩" };
const char* PY_mb_miu ={u8"谬缪" };
const char* PY_mb_mo ={u8"无磨没万末模膜摸墨摩脉莫抹冒默貉嘿摹蘑魔沫漠寞陌谟茉蓦馍嫫殁镆秣瘼耱貊貘" };
const char* PY_mb_mou ={u8"某谋牟侔哞缪眸蛑蝥鍪" };
const char* PY_mb_mu ={u8"亩目木母墓模幕牧姆穆姥牟拇牡暮募慕睦仫坶苜沐毪钼" };
const char* PY_mb_n ={u8"年能内那聂农你南难呢女泥哪拿念牛宁脑粘尼纳嗯" };
const char* PY_mb_na ={u8"那南哪拿纳呢钠呐娜捺肭镎衲" };
const char* PY_mb_nai ={u8"耐哪奶乃氖奈鼐艿萘柰" };
const char* PY_mb_nan ={u8"南难男喃囝囡楠腩蝻赧" };
const char* PY_mb_nang ={u8"囊攮囔馕曩" };
const char* PY_mb_nao ={u8"脑闹努挠恼淖孬垴呶猱瑙硇铙蛲" };
const char* PY_mb_ne ={u8"呢哪呐讷" };
const char* PY_mb_nei ={u8"内那哪馁" };
const char* PY_mb_nen ={u8"嫩恁" };
const char* PY_mb_neng ={u8"能" };
const char* PY_mb_ni ={u8"你泥尼呢逆拟尿妮霓倪匿腻溺伲坭猊怩昵旎祢慝睨铌鲵" };
const char* PY_mb_nian ={u8"年念粘蔫拈碾撵捻酿廿埝辇黏鲇鲶" };
const char* PY_mb_niang ={u8"娘酿" };
const char* PY_mb_niao ={u8"尿鸟溺茑嬲脲袅" };
const char* PY_mb_nie ={u8"镍啮涅捏聂孽镊乜陧蘖嗫颞臬蹑" };
const char* PY_mb_nin ={u8"您恁" };
const char* PY_mb_ning ={u8"宁凝拧柠狞泞佞苎咛甯聍" };
const char* PY_mb_niu ={u8"牛扭钮纽拗狃忸妞" };
const char* PY_mb_nong ={u8"农弄浓脓侬哝" };
const char* PY_mb_nou ={u8"耨" };
const char* PY_mb_nu ={u8"努奴怒弩胬孥驽" };
const char* PY_mb_nuan ={u8"暖" };
const char* PY_mb_nuo ={u8"诺娜挪懦糯傩搦喏锘" };
const char* PY_mb_nv ={u8"女恧钕衄" };
const char* PY_mb_nve ={u8"虐疟" };
const char* PY_mb_o ={u8"哦喔噢欧偶鸥殴藕呕怄耦" };
const char* PY_mb_ou ={u8"区欧偶鸥殴藕呕沤讴怄瓯耦" };
const char* PY_mb_p ={u8"批平判潘彭庞裴蒲配片派破排品皮喷盘偏评怕培普贫跑炮" };
const char* PY_mb_pa ={u8"怕派爬帕扒耙啪趴琶葩杷钯筢" };
const char* PY_mb_pai ={u8"派排拍牌迫哌徘湃俳蒎" };
const char* PY_mb_pan ={u8"判盘叛番潘攀磐盼畔胖拚爿泮袢襻蟠蹒" };
const char* PY_mb_pang ={u8"旁膀磅乓庞耪胖彷滂逄螃" };
const char* PY_mb_pao ={u8"跑炮刨抛泡咆袍匏狍庖脬疱" };
const char* PY_mb_pei ={u8"配培陪胚呸裴赔佩沛辔帔旆锫醅霈" };
const char* PY_mb_pen ={u8"喷盆湓" };
const char* PY_mb_peng ={u8"碰棚蓬朋捧膨砰抨烹澎彭硼篷鹏堋嘭怦蟛" };
const char* PY_mb_pi ={u8"批皮坏否辟坯脾疲砒霹披劈琵毗啤匹痞僻屁譬丕仳陂陴邳郫圮埤鼙芘擗吡噼庀淠媲纰枇甓睥罴铍癖裨疋蚍蜱貔" };
const char* PY_mb_pian ={u8"片偏便篇骗扁谝骈缏犏胼翩蹁" };
const char* PY_mb_piao ={u8"票漂朴飘瓢剽莩嘌嫖骠缥殍瞟螵" };
const char* PY_mb_pie ={u8"撇瞥丿苤氕" };
const char* PY_mb_pin ={u8"品贫频拼苹聘拚姘嫔榀牝颦" };
const char* PY_mb_ping ={u8"平评瓶凭苹冯乒坪萍屏俜娉枰鲆冖" };
const char* PY_mb_po ={u8"破迫坡泼繁朴泊颇婆魄粕叵陂鄱泺珀攴钋钷钹皤笸" };
const char* PY_mb_pou ={u8"剖裒掊" };
const char* PY_mb_pu ={u8"普谱扑埔铺暴葡朴蒲堡脯仆莆菩圃浦曝瀑匍噗溥濮璞氆镤镨蹼" };
const char* PY_mb_q ={u8"起前其钱乔齐祁秦屈邱戚瞿去气全期群情区强切取七求清确权且青" };
const char* PY_mb_qi ={u8"起其气期七器齐奇汽企漆欺旗畦启弃歧稽缉栖戚妻凄柒沏棋崎脐祈祁骑岂乞契砌迄泣讫亟亓俟圻芑芪荠萁萋葺蕲嘁屺岐岖汔淇骐绮琪琦杞桤槭耆欹祺憩碛颀蛴蜞綦綮蹊鳍麒" };
const char* PY_mb_qia ={u8"卡恰掐洽伽葜袷髂" };
const char* PY_mb_qian ={u8"前千钱浅签迁铅潜牵钳纤谴扦钎仟谦乾黔遣堑嵌欠歉倩佥阡芊芡茜荨掮岍悭慊骞搴褰缱椠犍肷愆钤虔箬箝" };
const char* PY_mb_qiang ={u8"强将枪抢墙腔呛羌蔷戕嫱樯戗炝锖锵镪襁蜣羟跄" };
const char* PY_mb_qiao ={u8"桥瞧壳巧敲乔蕉橇锹悄侨鞘撬翘峭俏窍雀劁诮谯荞峤愀憔缲樵硗跷鞒" };
const char* PY_mb_qie ={u8"切且砌茄怯窃伽郄惬慊妾挈锲箧" };
const char* PY_mb_qin ={u8"亲侵勤秦钦琴芹擒禽寝沁芩揿吣嗪噙廑溱檎锓矜覃螓衾" };
const char* PY_mb_qing ={u8"情清青轻倾请亲庆氢晴卿擎氰顷苘圊檠磬蜻罄箐綮謦鲭黥" };
const char* PY_mb_qiong ={u8"穷琼邛茕穹蛩筇跫銎" };
const char* PY_mb_qiu ={u8"求球秋丘仇龟邱囚酋泅俅巯犰湫逑遒楸赇虬蚯蝤裘糗鳅鼽" };
const char* PY_mb_qu ={u8"去区取曲且渠屈趋驱趣蛆躯娶龋戌诎劬苣蕖蘧岖衢阒璩觑氍朐祛磲鸲癯蛐蠼麴瞿黢" };
const char* PY_mb_quan ={u8"全权圈劝泉醛颧痊拳犬券诠荃悛绻辁畎铨蜷筌鬈" };
const char* PY_mb_que ={u8"确却缺炔瘸鹊榷雀阕阙悫" };
const char* PY_mb_qun ={u8"群裙逡" };
const char* PY_mb_r ={u8"人如日阮荣认入任热然容让润弱燃染壤绕仁溶刃仍" };
const char* PY_mb_ran ={u8"然燃染冉苒蚺髯" };
const char* PY_mb_rang ={u8"让壤嚷瓤攘禳穰" };
const char* PY_mb_rao ={u8"绕扰饶荛娆桡" };
const char* PY_mb_re ={u8"热若惹" };
const char* PY_mb_ren ={u8"人认任仁刃忍壬韧妊纫仞荏葚饪轫稔衽" };
const char* PY_mb_reng ={u8"仍扔" };
const char* PY_mb_ri ={u8"日" };
const char* PY_mb_rong ={u8"容溶荣熔融绒戎茸蓉冗嵘狨榕肜蝾" };
const char* PY_mb_rou ={u8"肉揉柔糅蹂鞣" };
const char* PY_mb_ru ={u8"如入儒乳茹蠕孺辱汝褥蓐薷嚅洳溽濡缛铷襦颥" };
const char* PY_mb_ruan ={u8"软阮朊" };
const char* PY_mb_rui ={u8"瑞锐蕊芮蕤枘睿蚋" };
const char* PY_mb_run ={u8"润闰" };
const char* PY_mb_ruo ={u8"弱若偌箬" };
const char* PY_mb_s ={u8"是上时孙宋苏沈粟施邵佘申师帅沙隋石史生说社深水所三十使事数四实少式山手" };
const char* PY_mb_sa ={u8"撒萨洒卅仨挲脎飒" };
const char* PY_mb_sai ={u8"塞思赛腮鳃噻" };
const char* PY_mb_san ={u8"三散叁伞馓毵糁" };
const char* PY_mb_sang ={u8"桑丧嗓搡磉颡" };
const char* PY_mb_sao ={u8"扫梢搔骚嫂埽缫缲臊瘙鳋" };
const char* PY_mb_se ={u8"色塞瑟涩啬铯穑" };
const char* PY_mb_sen ={u8"森" };
const char* PY_mb_seng ={u8"僧" };
const char* PY_mb_sh ={u8"数厦山删商少召社设甚声市师始手收守书属术输双水谁睡税顺" };
const char* PY_mb_sha ={u8"沙杀砂啥纱莎刹傻煞杉厦唼嗄挲歃铩痧裟霎鲨" };
const char* PY_mb_shai ={u8"色筛晒" };
const char* PY_mb_shan ={u8"山单闪善珊扇陕掸苫杉删煽衫擅赡膳汕缮栅剡讪鄯埏芟潸姗嬗骟膻禅钐疝蟮舢跚鳝" };
const char* PY_mb_shang ={u8"上商伤尚汤墒赏晌裳垧绱殇熵觞" };
const char* PY_mb_shao ={u8"少烧稍绍召哨梢鞘捎芍勺韶邵劭苕潲杓蛸筲艄" };
const char* PY_mb_she ={u8"社设射摄舌折涉舍蛇奢赊赦慑厍佘摺猞滠歙畲麝" };
const char* PY_mb_shen ={u8"深身神什伸参甚渗沈肾审申慎砷呻娠绅婶诜谂莘葚哂渖椹胂矧蜃" };
const char* PY_mb_sheng ={u8"生胜声省升盛绳剩圣牲乘甥嵊渑晟眚笙" };
const char* PY_mb_shi ={u8"是时十使事实式识世试石什示市史师始施士势湿适食失视室氏似蚀诗释殖拾饰驶匙狮尸虱矢屎柿拭誓逝嗜噬仕侍恃嘘峙谥埘莳蓍弑轼贳炻铈螫舐筮酾豕鲥鲺礻饣" };
const char* PY_mb_shou ={u8"手受收首守熟授寿兽售瘦狩绶艏" };
const char* PY_mb_shu ={u8"数书树属术输述熟束鼠疏殊舒蔬薯叔署枢梳抒淑赎孰暑曙蜀黍戍竖墅庶漱恕俞丨倏塾菽摅沭澍姝纾毹腧殳秫" };
const char* PY_mb_shua ={u8"刷耍唰" };
const char* PY_mb_shuai ={u8"衰帅摔甩蟀" };
const char* PY_mb_shuan ={u8"栓拴闩涮" };
const char* PY_mb_shuang ={u8"双霜爽泷孀" };
const char* PY_mb_shui ={u8"水说谁睡税" };
const char* PY_mb_shun ={u8"顺吮瞬舜" };
const char* PY_mb_shuo ={u8"说数硕朔烁蒴搠妁槊铄" };
const char* PY_mb_si ={u8"四思死斯丝似司饲食私厕撕嘶肆寺嗣伺巳厮俟兕厶咝汜泗澌姒驷缌祀锶鸶耜蛳笥" };
const char* PY_mb_song ={u8"松送宋颂耸怂讼诵凇菘崧嵩忪悚淞竦" };
const char* PY_mb_sou ={u8"搜艘擞嗽叟薮嗖嗾馊溲飕瞍锼螋" };
const char* PY_mb_su ={u8"素速苏塑缩俗诉宿肃酥粟僳溯夙谡蔌嗉愫涑簌觫稣" };
const char* PY_mb_suan ={u8"算酸蒜狻" };
const char* PY_mb_sui ={u8"随穗碎虽岁尿隋绥髓遂隧祟谇荽濉邃燧眭睢" };
const char* PY_mb_sun ={u8"损孙笋荪狲飧榫隼" };
const char* PY_mb_suo ={u8"所缩锁索莎蓑梭唆琐唢嗦嗍娑桫挲睃羧" };
const char* PY_mb_t ={u8"他同它唐谭陶汤童涂田佟提题体图天头通条特土团统台她太套铁" };
const char* PY_mb_ta ={u8"他它她塔踏塌獭挞蹋拓嗒闼溻漯遢榻沓铊趿鳎" };
const char* PY_mb_tai ={u8"台太态胎抬泰苔酞汰邰薹呔骀肽炱钛跆鲐" };
const char* PY_mb_tan ={u8"谈碳探炭弹坦贪滩坍摊瘫坛檀痰潭谭毯袒叹郯澹昙忐钽锬镡" };
const char* PY_mb_tang ={u8"堂糖唐塘汤搪棠膛倘躺淌趟烫傥帑溏瑭樘铴镗耥螗螳羰醣" };
const char* PY_mb_tao ={u8"套讨逃陶萄桃掏涛滔绦淘鼗叨啕洮韬焘饕" };
const char* PY_mb_te ={u8"特忒忑慝铽" };
const char* PY_mb_teng ={u8"腾疼藤誊滕" };
const char* PY_mb_ti ={u8"提题体替梯惕剔踢锑蹄啼嚏涕剃屉倜荑悌逖绨缇鹈裼醍扌" };
const char* PY_mb_tian ={u8"天田添填甜佃恬舔腆掭忝阗殄畋" };
const char* PY_mb_tiao ={u8"条调跳挑迢眺佻苕祧窕蜩笤粜龆鲦髫" };
const char* PY_mb_tie ={u8"铁贴帖萜餮" };
const char* PY_mb_ting ={u8"听停庭挺廷厅烃汀亭艇莛葶婷梃町铤蜓霆" };
const char* PY_mb_tong ={u8"同通统铜痛筒童桶侗恫桐酮瞳彤捅佟仝垌茼嗵峒恸潼砼" };
const char* PY_mb_tou ={u8"头投透偷钭骰" };
const char* PY_mb_tu ={u8"图土突途徒凸涂吐兔屠秃堍荼菟钍酴" };
const char* PY_mb_tuan ={u8"团湍抟彖疃图案" };
const char* PY_mb_tui ={u8"推退腿颓蜕褪忒煺" };
const char* PY_mb_tun ={u8"囤褪吞屯臀氽饨暾豚" };
const char* PY_mb_tuo ={u8"脱拖托妥椭舵魄鸵陀驮驼拓唾乇佗坨庹沱柝柁橐砣铊箨酡跎鼍" };
const char* PY_mb_w ={u8"为我无王汪卫魏吴韦闻乌邬翁温伍问外五位物委完温万文往武务围误晚" };
const char* PY_mb_wa ={u8"瓦挖凹哇蛙洼娃袜佤娲腽" };
const char* PY_mb_wai ={u8"外歪崴" };
const char* PY_mb_wan ={u8"完万晚弯碗顽湾挽玩蔓娩豌丸烷皖惋宛婉腕剜芄莞菀纨绾琬脘畹蜿" };
const char* PY_mb_wang ={u8"往王望网忘妄亡旺芒汪枉罔尢惘辋魍" };
const char* PY_mb_wei ={u8"为位委围维唯卫微伟未威危尾谓喂味胃魏伪遗违韦畏纬巍桅惟潍苇萎蔚渭尉慰偎诿隈隗圩葳薇囗帏帷崴嵬猥猬闱沩洧涠逶娓玮韪軎炜煨痿艉鲔" };
const char* PY_mb_wen ={u8"问温文稳纹闻蚊瘟吻紊刎阌汶璺雯亠" };
const char* PY_mb_weng ={u8"嗡翁瓮蓊蕹" };
const char* PY_mb_wo ={u8"我握窝蜗涡沃挝卧斡倭莴喔幄渥肟硪龌" };
const char* PY_mb_wu ={u8"无五物武务误伍舞污悟雾午恶屋乌吴亡诬钨巫呜芜梧吾毋捂侮坞戊晤勿兀仵阢邬圬芴唔庑怃忤浯寤迕妩婺骛杌牾於焐鹉鹜痦蜈鋈鼯" };
const char* PY_mb_x ={u8"学下行许徐邢萧肖薛熊解项习冼小线性新些想心向相系席现西修象先形" };
const char* PY_mb_xi ={u8"系席西习细吸析喜洗铣稀戏隙希息袭锡烯牺悉惜溪腊栖昔熙硒矽晰嘻膝夕熄汐犀檄媳僖兮隰郗茜菥葸蓰奚唏徙饩阋浠淅屣嬉玺樨曦觋欷歙熹禊禧皙穸裼蜥螅蟋舄舾羲粞翕醯蹊鼷" };
const char* PY_mb_xia ={u8"下夏吓狭霞唬瞎虾匣辖暇峡侠厦呷狎遐瑕柙硖瘕罅黠" };
const char* PY_mb_xian ={u8"线现先县限见显鲜献险陷宪纤洗掀弦铣腺锨仙咸贤衔舷闲涎嫌馅羡冼苋莶藓岘猃暹娴氙燹祆鹇痫蚬筅籼酰跣跹霰" };
const char* PY_mb_xiang ={u8"想向相象响项箱乡降香像详橡享湘厢镶襄翔祥巷芗葙饷庠骧缃蟓鲞飨" };
const char* PY_mb_xiao ={u8"小消削效笑校销硝萧肖孝霄哮嚣宵淆晓啸哓崤潇逍骁绡枭枵蛸筱箫魈" };
const char* PY_mb_xie ={u8"些解写斜谢协械叶血卸屑鞋歇邪胁蟹泄泻契楔蝎挟携谐懈偕亵勰燮薤撷獬廨渫瀣邂绁缬榭榍颉躞" };
const char* PY_mb_xin ={u8"新心信锌芯辛寻欣薪忻衅囟馨昕歆镡鑫" };
const char* PY_mb_xing ={u8"行性形型星兴省醒姓幸腥猩惺刑邢杏陉荇荥擤饧悻硎" };
const char* PY_mb_xiong ={u8"雄胸兄凶熊匈汹芎" };
const char* PY_mb_xiu ={u8"修锈休袖秀朽宿臭羞嗅绣咻岫馐庥溴鸺貅髹" };
const char* PY_mb_xu ={u8"续许须需序虚絮畜叙蓄绪徐墟戌嘘酗旭恤婿吁诩勖圩蓿洫浒溆顼栩煦砉盱胥糈醑" };
const char* PY_mb_xuan ={u8"选旋宣悬玄券轩喧癣眩绚儇谖萱揎泫渲漩璇楦暄炫煊碹铉镟痃" };
const char* PY_mb_xue ={u8"学血削雪穴靴薛谑噱泶踅鳕" };
const char* PY_mb_xun ={u8"训旬迅讯寻循巡荤浚勋熏询驯殉汛逊巽郇埙荀蕈薰峋徇獯恂洵浔曛窨醺鲟彐" };
const char* PY_mb_y ={u8"一有杨严余阎姚颜袁燕俞岳恽乐叶羊尹尤用要以于也样义与由压员月意又运原油验" };
const char* PY_mb_ya ={u8"压亚呀牙芽雅蚜鸭匹押鸦丫崖衙涯哑讶伢垭揠岈迓娅琊桠氩砑睚痖" };
const char* PY_mb_yan ={u8"验研严颜眼言盐演岩沿烟延掩宴炎燕衍铅焉咽阉淹蜒阎奄艳堰厌砚雁唁彦焰谚殷厣赝剡俨偃兖谳阽郾鄢芫菸崦恹闫阏湮滟妍嫣琰檐晏胭腌焱罨筵酽魇餍鼹" };
const char* PY_mb_yang ={u8"样养氧扬洋阳羊秧央杨仰殃鸯佯疡痒漾徉怏泱炀烊恙蛘鞅" };
const char* PY_mb_yao ={u8"要药约摇腰咬邀耀陶侥疟妖瑶尧遥窑谣姚舀钥夭爻吆崾徭幺珧杳轺曜肴铫鹞窈繇鳐" };
const char* PY_mb_ye ={u8"也业页叶液夜野爷冶邪哗咽椰噎耶掖曳腋拽靥谒邺揶晔烨铘" };
const char* PY_mb_yi ={u8"一以义意已移医议依易乙艺益异宜仪亿遗伊役衣疑亦谊翼译抑忆疫壹揖铱颐夷胰沂姨彝椅蚁倚矣邑屹臆逸肄裔毅溢诣翌绎刈劓仡佚佾诒圯埸懿苡荑薏弈奕挹弋呓咦咿嗌噫峄嶷猗饴怿怡悒漪迤驿缢殪轶贻欹旖熠眙钇镒镱痍瘗癔翊蜴舣羿翳酏黟衤" };
const char* PY_mb_yin ={u8"因引阴印音银烟隐饮荫茵殷姻吟淫寅尹胤鄞圻垠堙茚吲喑狺夤洇湮氤铟瘾窨蚓霪龈" };
const char* PY_mb_ying ={u8"应影硬营英映迎樱婴鹰缨莹萤荧蝇赢盈颖嬴郢茔荥莺萦蓥撄嘤膺滢潆瀛瑛璎楹媵鹦瘿颍罂" };
const char* PY_mb_yo ={u8"育哟唷" };
const char* PY_mb_yong ={u8"用勇永拥涌蛹庸佣臃痈雍踊咏泳恿俑壅墉喁慵邕镛甬鳙饔" };
const char* PY_mb_you ={u8"有由又油右友优幼游尤诱犹幽悠忧邮铀酉佑釉卣攸侑莠莜莸尢呦囿宥柚猷牖铕疣蚰蚴蝣蝤繇鱿黝鼬" };
const char* PY_mb_yu ={u8"于与育鱼雨玉余遇预域语愈渔予羽愚御谷欲宇蔚尉迂淤盂榆虞舆俞逾愉渝隅娱屿禹芋郁吁喻峪狱誉浴寓裕豫驭粥禺毓伛俣谀谕萸菀蓣揄圄圉嵛狳饫馀庾阈鬻妪妤纡瑜昱觎腴腧欤於煜熨燠聿钰鹆鹬瘐瘀窬窳蜮蝓竽臾舁雩龉肀" };
const char* PY_mb_yuan ={u8"员原圆源元远愿院缘援园怨鸳渊冤垣袁辕猿苑垸塬芫掾圜沅媛瑗橼爰眢鸢螈箢鼋" };
const char* PY_mb_yue ={u8"月说越约乐跃曰阅钥岳粤悦龠瀹栎樾刖钺" };
const char* PY_mb_yun ={u8"运员云匀均允孕耘郧陨蕴酝晕韵郓芸狁恽愠纭韫殒昀氲熨" };
const char* PY_mb_z ={u8"在这主中张章赵曾郑周邹朱种着祝甄庄宗詹臧祖左展争战作正之制重组治只子自质指" };
const char* PY_mb_za ={u8"杂扎咱匝砸咋咂" };
const char* PY_mb_zai ={u8"在再载栽灾仔哉宰崽甾" };
const char* PY_mb_zan ={u8"赞咱暂攒拶瓒昝簪糌趱錾" };
const char* PY_mb_zang ={u8"藏脏葬赃奘驵臧" };
const char* PY_mb_zao ={u8"造早遭燥凿糟枣皂藻澡蚤躁噪灶唣" };
const char* PY_mb_ze ={u8"则择责侧泽咋仄赜啧帻迮昃笮箦舴" };
const char* PY_mb_zei ={u8"贼" };
const char* PY_mb_zen ={u8"怎谮" };
const char* PY_mb_zeng ={u8"增曾综憎赠缯甑罾锃" };
const char* PY_mb_zh ={u8"扎炸摘债战展长张章钟着照找这真争正政之制治只中周州主住抓转专撰赚装状准" };
const char* PY_mb_zha ={u8"查扎炸闸铡轧渣蜡喳札眨栅榨咋乍诈柞揸吒咤哳喋楂砟痄蚱齄" };
const char* PY_mb_zhai ={u8"寨侧择摘窄斋翟祭宅债砦瘵" };
const char* PY_mb_zhan ={u8"战展站占粘颤瞻毡詹沾盏斩辗崭蘸栈湛绽谵搌旃" };
const char* PY_mb_zhang ={u8"长张章掌仗障胀涨账樟彰漳杖丈帐瘴仉鄣幛嶂獐嫜璋蟑" };
const char* PY_mb_zhao ={u8"着照找招朝召赵爪罩沼兆嘲昭肇诏啁棹钊笊" };
const char* PY_mb_zhe ={u8"这着者折哲浙遮蛰辙锗蔗谪摺柘辄磔鹧褶蜇赭" };
const char* PY_mb_zhen ={u8"真针阵镇振震珍诊斟甄砧臻贞侦枕疹圳蓁浈溱缜桢椹榛轸赈胗朕祯畛稹鸩箴" };
const char* PY_mb_zheng ={u8"争正政整证征蒸症丁郑挣睁狰怔拯帧诤峥徵钲铮筝" };
const char* PY_mb_zhi ={u8"之制治只质指直支织止至置志值知识执职植纸致枝殖脂智氏肢秩址滞汁芝吱蜘侄趾旨挚掷帜峙稚炙痔窒卮陟郅埴芷摭帙徵忮彘咫骘栉枳栀桎轵轾贽胝膣祉祗黹雉鸷痣蛭絷酯跖踬踯豸觯" };
const char* PY_mb_zhong ={u8"中种重众钟终忠肿仲盅衷冢忪锺螽舯踵" };
const char* PY_mb_zhou ={u8"轴周洲州皱骤舟诌粥肘帚咒宙昼荮啁妯纣绉胄碡籀繇酎" };
const char* PY_mb_zhu ={u8"主注著住助猪朱铸属株筑柱术驻逐祝竹贮珠诸蛛诛烛煮拄瞩嘱蛀伫侏邾茱洙渚潴杼槠橥炷铢疰瘃褚竺箸舳翥躅麈" };
const char* PY_mb_zhua ={u8"抓爪挝" };
const char* PY_mb_zhuai ={u8"转曳拽嘬" };
const char* PY_mb_zhuan ={u8"转专传砖撰赚篆啭馔沌颛" };
const char* PY_mb_zhuang ={u8"装状壮庄撞幢桩妆僮奘" };
const char* PY_mb_zhui ={u8"追锥椎赘坠缀惴骓缒" };
const char* PY_mb_zhun ={u8"准屯谆肫窀" };
const char* PY_mb_zhuo ={u8"着著捉桌缴拙卓琢茁酌啄灼浊倬诼擢浞涿濯棹焯禚斫镯" };
const char* PY_mb_zi ={u8"子自资字紫仔籽姿吱兹咨滋淄孜滓渍谘茈呲嵫姊孳缁梓辎赀恣眦锱秭耔笫粢趑觜訾龇鲻髭" };
const char* PY_mb_zong ={u8"总纵宗综棕鬃踪偬枞腙粽" };
const char* PY_mb_zou ={u8"走邹奏揍诹陬鄹驺鲰" };
const char* PY_mb_zu ={u8"组族足阻祖租卒诅俎菹镞" };
const char* PY_mb_zuan ={u8"钻赚纂攥缵躜" };
const char* PY_mb_zui ={u8"最罪嘴堆咀醉蕞" };
const char* PY_mb_zun ={u8"尊遵撙樽鳟" };
const char* PY_mb_zuo ={u8"作做左座坐昨撮凿搓琢佐柞阼唑嘬怍胙祚笮" };

typedef struct
{

QString T9;
QString PY;
const char* MB;
}T9PY_IDX;

const T9PY_IDX t9PY_index[] ={
{u8"2","a",PY_mb_a},
{u8"2","b",PY_mb_b},
{u8"2","c",PY_mb_c},
{u8"3","d",PY_mb_d},
{u8"3","e",PY_mb_e},
{u8"3","f",PY_mb_f},
{u8"4","g",PY_mb_g},
{u8"4","h",PY_mb_h},
{u8"5","j",PY_mb_j},
{u8"5","k",PY_mb_k},
{u8"5","l",PY_mb_l},
{u8"6","m",PY_mb_m},
{u8"6","n",PY_mb_n},
{u8"6","o",PY_mb_o},
{u8"7","p",PY_mb_p},
{u8"7","q",PY_mb_q},
{u8"7","r",PY_mb_r},
{u8"7","s",PY_mb_s},
{u8"8","t",PY_mb_t},
{u8"9","w",PY_mb_w},
{u8"9","x",PY_mb_x},
{u8"9","y",PY_mb_y},
{u8"9","z",PY_mb_z},
{u8"22","ba",PY_mb_ba},
{u8"22","ca",PY_mb_ca},
{u8"23","ce",PY_mb_ce},
{u8"23","be",PY_mb_bei},
{u8"24","ai",PY_mb_ai},
{u8"24","bi",PY_mb_bi},
{u8"24","ch",PY_mb_ch},
{u8"24","ci",PY_mb_ci},
{u8"26","co",PY_mb_cou},
{u8"26","bo",PY_mb_bo},
{u8"26","an",PY_mb_an},
{u8"26","ao",PY_mb_ao},
{u8"28","bu",PY_mb_bu},
{u8"28","cu",PY_mb_cu},
{u8"32","da",PY_mb_da},
{u8"32","fa",PY_mb_fa},
{u8"33","de",PY_mb_de},
{u8"33","fe",PY_mb_fei},
{u8"34","di",PY_mb_di},
{u8"34","ei",PY_mb_ei},
{u8"36","en",PY_mb_en},
{u8"36","fo",PY_mb_fo},
{u8"37","er",PY_mb_er},
{u8"36","do",PY_mb_dou},
{u8"38","du",PY_mb_du},
{u8"38","fu",PY_mb_fu},
{u8"42","ga",PY_mb_ga},
{u8"42","ha",PY_mb_ha},
{u8"43","ge",PY_mb_ge},
{u8"43","he",PY_mb_he},
{u8"46","go",PY_mb_gou},
{u8"46","ho",PY_mb_hou},
{u8"48","gu",PY_mb_gu},
{u8"48","hu",PY_mb_hu},
{u8"52","ka",PY_mb_ka},
{u8"52","la",PY_mb_la},
{u8"53","le",PY_mb_le},
{u8"53","ke",PY_mb_ke},
{u8"54","ji",PY_mb_ji},
{u8"54","li",PY_mb_li},
{u8"56","ko",PY_mb_kou},
{u8"56","lo",PY_mb_lo},
{u8"58","lu",PY_mb_lu},
{u8"58","lv",PY_mb_lv},
{u8"58","ju",PY_mb_ju},
{u8"58","ku",PY_mb_ku},
{u8"62","ma",PY_mb_ma},
{u8"62","na",PY_mb_na},
{u8"63","me",PY_mb_me},
{u8"63","ne",PY_mb_ne},
{u8"64","mi",PY_mb_mi},
{u8"64","ni",PY_mb_ni},
{u8"66","mo",PY_mb_mo},
{u8"66","no",PY_mb_nou},
{u8"68","mu",PY_mb_mu},
{u8"68","nu",PY_mb_nu},
{u8"68","nv",PY_mb_nv},
{u8"68","ou",PY_mb_ou},
{u8"72","pa",PY_mb_pa},
{u8"72","pe",PY_mb_pei},
{u8"72","ra",PY_mb_ran},
{u8"72","sa",PY_mb_sa},
{u8"73","re",PY_mb_re},
{u8"73","se",PY_mb_se},
{u8"74","pi",PY_mb_pi},
{u8"74","qi",PY_mb_qi},
{u8"74","ri",PY_mb_ri},
{u8"74","sh",PY_mb_sh},
{u8"74","si",PY_mb_si},
{u8"76","so",PY_mb_sou},
{u8"76","po",PY_mb_po},
{u8"76","ro",PY_mb_rou},
{u8"78","pu",PY_mb_pu},
{u8"78","qu",PY_mb_qu},
{u8"78","ru",PY_mb_ru},
{u8"78","su",PY_mb_su},
{u8"82","ta",PY_mb_ta},
{u8"83","te",PY_mb_te},
{u8"84","ti",PY_mb_ti},
{u8"86","to",PY_mb_tou},
{u8"88","tu",PY_mb_tu},
{u8"92","wa",PY_mb_wa},
{u8"92","ya",PY_mb_ya},
{u8"92","za",PY_mb_za},
{u8"93","ze",PY_mb_ze},
{u8"93","ye",PY_mb_ye},
{u8"94","yi",PY_mb_yi},
{u8"94","xi",PY_mb_xi},
{u8"94","zh",PY_mb_zh},
{u8"94","zi",PY_mb_zi},
{u8"96","zo",PY_mb_zou},
{u8"96","wo",PY_mb_wo},
{u8"96","yo",PY_mb_yo},
{u8"98","wu",PY_mb_wu},
{u8"98","xu",PY_mb_xu},
{u8"98","yu",PY_mb_yu},
{u8"98","zu",PY_mb_zu},
{u8"224","bai",PY_mb_bai},
{u8"224","cai",PY_mb_cai},
{u8"226","can",PY_mb_can},
{u8"226","cao",PY_mb_cao},
{u8"226","ban",PY_mb_ban},
{u8"226","bao",PY_mb_bao},
{u8"234","bei",PY_mb_bei},
{u8"236","ben",PY_mb_ben},
{u8"236","cen",PY_mb_cen},
{u8"242","bia",PY_mb_bian},
{u8"242","cha",PY_mb_cha},
{u8"243","che",PY_mb_che},
{u8"243","bie",PY_mb_bie},
{u8"244","chi",PY_mb_chi},
{u8"246","bin",PY_mb_bin},
{u8"246","cho",PY_mb_chou},
{u8"248","chu",PY_mb_chu},
{u8"264","ang",PY_mb_ang},
{u8"266","con",PY_mb_cong},
{u8"268","cou",PY_mb_cou},
{u8"282","cua",PY_mb_cuan},
{u8"284","cui",PY_mb_cui},
{u8"286","cun",PY_mb_cun},
{u8"286","cuo",PY_mb_cuo},
{u8"324","dai",PY_mb_dai},
{u8"326","dan",PY_mb_dan},
{u8"326","dao",PY_mb_dao},
{u8"326","fan",PY_mb_fan},
{u8"334","fei",PY_mb_fei},
{u8"336","fen",PY_mb_fen},
{u8"336","den",PY_mb_deng},
{u8"342","dia",PY_mb_dia},
{u8"343","die",PY_mb_die},
{u8"346","din",PY_mb_ding},
{u8"348","diu",PY_mb_diu},
{u8"366","don",PY_mb_dong},
{u8"368","dou",PY_mb_dou},
{u8"368","fou",PY_mb_fou},
{u8"382","dua",PY_mb_duan},
{u8"384","dui",PY_mb_dui},
{u8"386","dun",PY_mb_dun},
{u8"386","duo",PY_mb_duo},
{u8"424","gai",PY_mb_gai},
{u8"424","hai",PY_mb_hai},
{u8"426","han",PY_mb_han},
{u8"426","gan",PY_mb_gan},
{u8"426","gao",PY_mb_gao},
{u8"426","hao",PY_mb_hao},
{u8"434","hei",PY_mb_hei},
{u8"434","gei",PY_mb_gei},
{u8"436","gen",PY_mb_gen},
{u8"436","hen",PY_mb_hen},
{u8"466","gon",PY_mb_gong},
{u8"466","hon",PY_mb_hong},
{u8"468","gou",PY_mb_gou},
{u8"468","hou",PY_mb_hou},
{u8"482","hua",PY_mb_hua},
{u8"482","gua",PY_mb_gua},
{u8"484","gui",PY_mb_gui},
{u8"484","hui",PY_mb_hui},
{u8"486","hun",PY_mb_hun},
{u8"486","huo",PY_mb_huo},
{u8"486","gun",PY_mb_gun},
{u8"486","guo",PY_mb_guo},
{u8"524","kai",PY_mb_kai},
{u8"524","lai",PY_mb_lai},
{u8"526","lan",PY_mb_lan},
{u8"526","kan",PY_mb_kan},
{u8"526","kao",PY_mb_kao},
{u8"526","lao",PY_mb_lao},
{u8"534","lei",PY_mb_lei},
{u8"536","len",PY_mb_leng},
{u8"536","ken",PY_mb_ken},
{u8"542","jia",PY_mb_jia},
{u8"542","lia",PY_mb_lia},
{u8"543","jie",PY_mb_jie},
{u8"543","lie",PY_mb_lie},
{u8"546","lin",PY_mb_lin},
{u8"546","jin",PY_mb_jin},
{u8"546","jio",PY_mb_jiong},
{u8"548","jiu",PY_mb_jiu},
{u8"548","liu",PY_mb_liu},
{u8"566","lon",PY_mb_long},
{u8"566","kon",PY_mb_kong},
{u8"568","kou",PY_mb_kou},
{u8"568","lou",PY_mb_lou},
{u8"582","lua",PY_mb_luan},
{u8"582","kua",PY_mb_kua},
{u8"582","jua",PY_mb_juan},
{u8"583","jue",PY_mb_jue},
{u8"583","lue",PY_mb_lue},
{u8"584","kui",PY_mb_kui},
{u8"586","lun",PY_mb_lun},
{u8"586","luo",PY_mb_luo},
{u8"586","kun",PY_mb_kun},
{u8"586","kuo",PY_mb_kuo},
{u8"586","jun",PY_mb_jun},
{u8"624","mai",PY_mb_mai},
{u8"624","nai",PY_mb_nai},
{u8"626","nan",PY_mb_nan},
{u8"626","man",PY_mb_man},
{u8"626","mao",PY_mb_mao},
{u8"626","nao",PY_mb_nao},
{u8"634","nei",PY_mb_nei},
{u8"634","mei",PY_mb_mei},
{u8"636","nen",PY_mb_nen},
{u8"636","men",PY_mb_men},
{u8"642","mia",PY_mb_mian},
{u8"642","nia",PY_mb_nian},
{u8"643","mie",PY_mb_mie},
{u8"643","nie",PY_mb_nie},
{u8"646","nin",PY_mb_nin},
{u8"646","min",PY_mb_min},
{u8"648","miu",PY_mb_miu},
{u8"648","niu",PY_mb_niu},
{u8"666","non",PY_mb_nong},
{u8"668","mou",PY_mb_mou},
{u8"668","nou",PY_mb_nou},
{u8"682","nua",PY_mb_nuan},
{u8"683","nve",PY_mb_nve},
{u8"686","nuo",PY_mb_nuo},
{u8"724","pai",PY_mb_pai},
{u8"734","pei",PY_mb_pei},
{u8"724","sai",PY_mb_sai},
{u8"726","san",PY_mb_san},
{u8"726","pan",PY_mb_pan},
{u8"726","pao",PY_mb_pao},
{u8"736","pen",PY_mb_pen},
{u8"726","ran",PY_mb_ran},
{u8"726","rao",PY_mb_rao},
{u8"726","sao",PY_mb_sao},
{u8"736","sen",PY_mb_sen},
{u8"736","ren",PY_mb_ren},
{u8"742","pia",PY_mb_pian},
{u8"742","qia",PY_mb_qia},
{u8"742","sha",PY_mb_sha},
{u8"743","pie",PY_mb_pie},
{u8"743","qie",PY_mb_qie},
{u8"743","she",PY_mb_she},
{u8"744","shi",PY_mb_shi},
{u8"748","shu",PY_mb_shu},
{u8"746","qin",PY_mb_qin},
{u8"746","pin",PY_mb_pin},
{u8"746","qio",PY_mb_qiong},
{u8"746","sho",PY_mb_shou},
{u8"748","qiu",PY_mb_qiu},
{u8"766","ron",PY_mb_rong},
{u8"768","pou",PY_mb_pou},
{u8"768","rou",PY_mb_rou},
{u8"766","son",PY_mb_song},
{u8"768","sou",PY_mb_sou},
{u8"782","sua",PY_mb_suan},
{u8"782","rua",PY_mb_ruan},
{u8"782","qua",PY_mb_quan},
{u8"783","que",PY_mb_que},
{u8"784","rui",PY_mb_rui},
{u8"784","sui",PY_mb_sui},
{u8"786","sun",PY_mb_sun},
{u8"786","suo",PY_mb_suo},
{u8"786","run",PY_mb_run},
{u8"786","ruo",PY_mb_ruo},
{u8"786","qun",PY_mb_qun},
{u8"824","tai",PY_mb_tai},
{u8"826","tan",PY_mb_tan},
{u8"826","tao",PY_mb_tao},
{u8"836","ten",PY_mb_teng},
{u8"842","tia",PY_mb_tian},
{u8"843","tie",PY_mb_tie},
{u8"846","tin",PY_mb_ting},
{u8"866","ton",PY_mb_tong},
{u8"868","tou",PY_mb_tou},
{u8"882","tua",PY_mb_tuan},
{u8"884","tui",PY_mb_tui},
{u8"886","tun",PY_mb_tun},
{u8"886","tuo",PY_mb_tuo},
{u8"924","wai",PY_mb_wai},
{u8"924","zai",PY_mb_zai},
{u8"926","zan",PY_mb_zan},
{u8"926","wan",PY_mb_wan},
{u8"926","yan",PY_mb_yan},
{u8"926","yao",PY_mb_yao},
{u8"926","zao",PY_mb_zao},
{u8"934","zei",PY_mb_zei},
{u8"934","wei",PY_mb_wei},
{u8"936","zen",PY_mb_zen},
{u8"936","wen",PY_mb_wen},
{u8"942","xia",PY_mb_xia},
{u8"942","zha",PY_mb_zha},
{u8"943","xie",PY_mb_xie},
{u8"943","zhe",PY_mb_zhe},
{u8"944","zhi",PY_mb_zhi},
{u8"946","zho",PY_mb_zhou},
{u8"946","xin",PY_mb_xin},
{u8"946","xio",PY_mb_xiong},
{u8"946","yin",PY_mb_yin},
{u8"948","xiu",PY_mb_xiu},
{u8"948","zhu",PY_mb_zhu},
{u8"966","yon",PY_mb_yong},
{u8"966","zon",PY_mb_zong},
{u8"968","you",PY_mb_you},
{u8"968","zou",PY_mb_zou},
{u8"982","zua",PY_mb_zuan},
{u8"982","yua",PY_mb_yuan},
{u8"982","xua",PY_mb_xuan},
{u8"983","xue",PY_mb_xue},
{u8"983","yue",PY_mb_yue},
{u8"984","zui",PY_mb_zui},
{u8"986","zun",PY_mb_zun},
{u8"986","zuo",PY_mb_zuo},
{u8"986","yun",PY_mb_yun},
{u8"986","xun",PY_mb_xun},
{u8"2264","bang",PY_mb_bang},
{u8"2364","beng",PY_mb_beng},
{u8"2426","bian",PY_mb_bian},
{u8"2426","biao",PY_mb_biao},
{u8"2464","bing",PY_mb_bing},
{u8"2264","cang",PY_mb_cang},
{u8"2364","ceng",PY_mb_ceng},
{u8"2424","chai",PY_mb_chai},
{u8"2426","chan",PY_mb_chan},
{u8"2426","chao",PY_mb_chao},
{u8"2436","chen",PY_mb_chen},
{u8"2466","chon",PY_mb_chong},
{u8"2468","chou",PY_mb_chou},
{u8"2482","chua",PY_mb_chuai},
{u8"2484","chui",PY_mb_chui},
{u8"2486","chun",PY_mb_chun},
{u8"2486","chuo",PY_mb_chuo},
{u8"2664","cong",PY_mb_cong},
{u8"2826","cuan",PY_mb_cuan},
{u8"3264","dang",PY_mb_dang},
{u8"3264","fang",PY_mb_fang},
{u8"3364","feng",PY_mb_feng},
{u8"3364","deng",PY_mb_deng},
{u8"3426","dian",PY_mb_dian},
{u8"3426","diao",PY_mb_diao},
{u8"3464","ding",PY_mb_ding},
{u8"3664","dong",PY_mb_dong},
{u8"3826","duan",PY_mb_duan},
{u8"4264","gang",PY_mb_gang},
{u8"4364","geng",PY_mb_geng},
{u8"4664","gong",PY_mb_gong},
{u8"4824","guai",PY_mb_guai},
{u8"4826","guan",PY_mb_guan},
{u8"4264","hang",PY_mb_hang},
{u8"4364","heng",PY_mb_heng},
{u8"4664","hong",PY_mb_hong},
{u8"4824","huai",PY_mb_huai},
{u8"4826","huan",PY_mb_huan},
{u8"5264","kang",PY_mb_kang},
{u8"5264","lang",PY_mb_lang},
{u8"5364","leng",PY_mb_leng},
{u8"5364","keng",PY_mb_keng},
{u8"5426","lian",PY_mb_lian},
{u8"5426","liao",PY_mb_liao},
{u8"5426","jian",PY_mb_jian},
{u8"5426","jiao",PY_mb_jiao},
{u8"5464","jing",PY_mb_jing},
{u8"5464","ling",PY_mb_ling},
{u8"5466","jion",PY_mb_jiong},
{u8"5664","long",PY_mb_long},
{u8"5664","kong",PY_mb_kong},
{u8"5824","kuai",PY_mb_kuai},
{u8"5826","kuan",PY_mb_kuan},
{u8"5826","luan",PY_mb_luan},
{u8"5826","juan",PY_mb_juan},
{u8"6264","mang",PY_mb_mang},
{u8"6264","nang",PY_mb_nang},
{u8"6364","meng",PY_mb_meng},
{u8"6364","neng",PY_mb_neng},
{u8"6426","mian",PY_mb_mian},
{u8"6426","miao",PY_mb_miao},
{u8"6426","nian",PY_mb_nian},
{u8"6426","niao",PY_mb_niao},
{u8"6464","ming",PY_mb_ming},
{u8"6464","ning",PY_mb_ning},
{u8"6664","nong",PY_mb_nong},
{u8"6826","nuan",PY_mb_nuan},
{u8"7264","pang",PY_mb_pang},
{u8"7364","peng",PY_mb_peng},
{u8"7264","rang",PY_mb_rang},
{u8"7264","sang",PY_mb_sang},
{u8"7364","seng",PY_mb_seng},
{u8"7364","reng",PY_mb_reng},
{u8"7424","shai",PY_mb_shai},
{u8"7426","shan",PY_mb_shan},
{u8"7426","shao",PY_mb_shao},
{u8"7426","pian",PY_mb_pian},
{u8"7426","piao",PY_mb_piao},
{u8"7426","qian",PY_mb_qian},
{u8"7426","qiao",PY_mb_qiao},
{u8"7436","shen",PY_mb_shen},
{u8"7464","ping",PY_mb_ping},
{u8"7464","qing",PY_mb_qing},
{u8"7466","qion",PY_mb_qiong},
{u8"7468","shou",PY_mb_shou},
{u8"7482","shua",PY_mb_shua},
{u8"7484","shui",PY_mb_shui},
{u8"7486","shun",PY_mb_shun},
{u8"7486","shuo",PY_mb_shuo},
{u8"7664","rong",PY_mb_rong},
{u8"7664","song",PY_mb_song},
{u8"7826","suan",PY_mb_suan},
{u8"7826","quan",PY_mb_quan},
{u8"7826","ruan",PY_mb_ruan},
{u8"8264","tang",PY_mb_tang},
{u8"8364","teng",PY_mb_teng},
{u8"8426","tian",PY_mb_tian},
{u8"8426","tiao",PY_mb_tiao},
{u8"8464","ting",PY_mb_ting},
{u8"8664","tong",PY_mb_tong},
{u8"8826","tuan",PY_mb_tuan},
{u8"9264","wang",PY_mb_wang},
{u8"9264","zang",PY_mb_zang},
{u8"9264","yang",PY_mb_yang},
{u8"9364","weng",PY_mb_weng},
{u8"9364","zeng",PY_mb_zeng},
{u8"9424","zhai",PY_mb_zhai},
{u8"9426","zhan",PY_mb_zhan},
{u8"9426","zhao",PY_mb_zhao},
{u8"9426","xian",PY_mb_xian},
{u8"9426","xiao",PY_mb_xiao},
{u8"9436","zhen",PY_mb_zhen},
{u8"9464","xing",PY_mb_xing},
{u8"9464","ying",PY_mb_ying},
{u8"9466","zhon",PY_mb_zhong},
{u8"9468","zhou",PY_mb_zhou},
{u8"9482","zhua",PY_mb_zhua},
{u8"9484","zhui",PY_mb_zhui},
{u8"9486","zhun",PY_mb_zhun},
{u8"9486","zhuo",PY_mb_zhuo},
{u8"9466","xion",PY_mb_xiong},
{u8"9664","yong",PY_mb_yong},
{u8"9664","zong",PY_mb_zong},
{u8"9826","yuan",PY_mb_yuan},
{u8"9826","xuan",PY_mb_xuan},
{u8"9826","zuan",PY_mb_zuan},
{u8"94264","xiang",PY_mb_xiang},
{u8"94264","zhang",PY_mb_zhang},
{u8"94364","zheng",PY_mb_zheng},
{u8"94664","xiong",PY_mb_xiong},
{u8"94664","zhong",PY_mb_zhong},
{u8"94824","zhuai",PY_mb_zhuai},
{u8"94826","zhuan",PY_mb_zhuan},
{u8"24264","chang",PY_mb_chang},
{u8"24364","cheng",PY_mb_cheng},
{u8"24664","chong",PY_mb_chong},
{u8"24824","chuai",PY_mb_chuai},
{u8"24826","chuan",PY_mb_chuan},
{u8"48264","guang",PY_mb_guang},
{u8"48264","huang",PY_mb_huang},
{u8"54264","jiang",PY_mb_jiang},
{u8"54264","liang",PY_mb_liang},
{u8"54664","jiong",PY_mb_jiong},
{u8"58264","kuang",PY_mb_kuang},
{u8"64264","niang",PY_mb_niang},
{u8"74264","qiang",PY_mb_qiang},
{u8"74264","shang",PY_mb_shang},
{u8"74364","sheng",PY_mb_sheng},
{u8"74664","qiong",PY_mb_qiong},
{u8"74824","shuai",PY_mb_shuai},
{u8"74826","shuan",PY_mb_shuan},
{u8"248264","chuang",PY_mb_chuang},
{u8"748264","shuang",PY_mb_shuang},
{u8"948264","zhuang",PY_mb_zhuang},
{u8"","",PY_mb_space}
};

PY::PY()
{
#if 1
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/usr/lib/firmware/py.db");
    QSqlDatabase::removeDatabase("SQLITE");
#else
    QFile f(":/Py/py.txt");
    if (!f.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug("@@@ ERROR %s %d, failed to open file\n", __FUNCTION__, __LINE__);
        return;
    }

    QTextStream stream(&f);
    QString line;
    /* use UTF-8 */
    stream.setCodec("UTF-8");
    while (!stream.atEnd()) {
        QString key;
        QStringList value;
        line = stream.readLine();
        value = line.split(" ");
        key = value.at(0);
        key.remove("-");
        value.removeAt(0);

        py.insert(key, value);
    }
    f.close();
#endif
}


QMap<QString, QString> PY::getPinYin(const QString& keys)
{
    QMap<QString, QString> result;
    for(const T9PY_IDX* index = &t9PY_index[0]; index != nullptr; index++)
    {
        if(index->T9 == keys)
        {
            result.insert(QString(index->PY), QString(index->MB));
        }
        else if(index->T9 == "")
        {
            break;
        }
    }
    return result;
}

QString PY::getPY(const QString &keys)
{
    for(const T9PY_IDX* index = &t9PY_index[0]; index != nullptr; index++) {
        if(index->PY == keys) {
            return QString(index->MB);
        } else if(index->T9 == "") {
            return "";
        }
    }

    return "";
}

QStringList PY::getCandidate(const QString &keys)
{
    QStringList list;
    list.clear();
    if (keys == "")
        return list;

    if (!db.open()) {
        qDebug("### %s %d, %s", __FUNCTION__, __LINE__, db.lastError().text().data());
        return list;
    }

    QSqlQuery query(db);
    QString sql;
    sql = "SELECT val FROM pytable WHERE key LIKE " + QString("'") + keys + QString("%'");
    query.prepare(sql);
    if (!query.exec()) {
        qDebug("### %s %d, %s", __FUNCTION__, __LINE__, qPrintable(query.lastError().text()));
        db.close();
        return list;
    }

    while (query.next()) {
        QString val = query.value(0).toString();
        list.append(val.split(" "));
    }

    db.close();
    return list;
}
