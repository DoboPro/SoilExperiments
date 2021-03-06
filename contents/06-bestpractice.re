= よりよい本づくり

//abstract{
せっかく本を作るなら、よりよい本づくりを目指しましょう。

この章では、よりよい本にするためのポイントを紹介します。
//}

#@#//makechaptitlepage[toc=on]



== まえがき


=== まえがきには章番号をつけない

ときどき、「まえがき」に章番号がついている技術系同人誌を見かけます（@<img>{preface_numbered}）。
しかし一般的には、「まえがき」や「あとがき」には章番号はつけません。

//image[preface_numbered][間違って章番号がついた「まえがき」][scale=0.8,border=on]

Re:VIEWおよびStarterでは、「@<file>{catalog.yml}」の「@<code>|PREDEF:|」や「@<code>|POSTDEF:|」に指定した原稿ファイルには、章番号がつきません。
これを間違えて「@<code>|CHAPS:|」に含めてしまうと、「まえがき」や「あとがき」に章番号がついてしまうので気をつけてください。


=== まえがきに「本書の目的」を入れる

「まえがき」に本の概要や目的があると、本を手にとった人がその本を買うかどうかを判断できます。

次のは「本書の目的」のサンプルです。

//sampleoutputbegin[サンプル]

===={notoc} 本書の目的

本書の目的は、SQLを初めてさわる初心者が、簡単な検索と集計をSQLでできるようになることです。
マーケティング部に配属された新卒1年目の人が、SQLで簡単なデータ分析をできるようになりたいなら、この本はぴったりです。

SQLのチューニングや、データベース設計といった内容は、本書の範囲ではありません。

//sampleoutputend


=== まえがきに「対象読者」を入れる

先ほどの話と似ていますが、まえがきに「本の対象読者」を書きましょう。
本を手にとった人が、自分がその本の対象読者かどうか判断できます。

このとき、「初心者」と「初級者」をちゃんと区別するといいでしょう。

 * 「初心者」は入門書をまだ読んでいない人や読んでる途中の人
 * 「初級者」は入門書を読み終えた人、実務での経験が浅い人

次のは「対象読者」のサンプルです。

//sampleoutputbegin[サンプル]

===={notoc} 本書の対象読者

本書は、何らかのオブジェクト指向言語の入門書を読み終えた初級者を対象としています。
そのため、「オブジェクト」「クラス」「メソッド」などの用語は説明なしに使用します。
まったくの初心者は本書の対象ではないので注意してください。

//sampleoutputend


=== まえがきに「前提知識」を入れる

これまでの話と似ていますが、その本を読むのにどんな前提知識がどのくらいのレベルで必要かを「まえがき」に書いておくと、本を手にとった人は買うかどうかの判断がしやすいです。

このとき、具体例を添えておくといいでしょう。
たとえば「Linuxの基礎知識を前提とします」だけでは、どんな基礎知識がどのレベルで必要なのか、よくわかりません。
もしこれが「@<code>|ln -s|でシンボリックリンクが作れること」「@<code>{ps -ef|grep gzip}が何をしているのか分かること」「パイプとリダイレクトの違いが説明できること」だと、必要な前提知識のレベルがよく分かります。

次のは「前提知識」のサンプルです。

//sampleoutputbegin[サンプル]

===={notoc} 本書の前提知識

本書は、Python をある程度使いこなしている中級者以上を対象にしています。そのため、Pythonの基礎知識を持っていることを前提とします。

具体的には、次のことがすべて分かることが前提となります。

 * 「@<code>|[x for x in range(1, 11) if x % 2]|」の意味が分かる
 * 「@<code>|(lambda x, y: x + y)(3, 4)|」の結果が予想できる
 * 「@<code>|x=1|」と「@<code>|fn(x=1)|」の違いが分かる
 * 「@<code>|return|」と「@<code>|yield|」の違いが説明できる
 * 「@<code>|@property|」が何か分かる

//sampleoutputend


=== まえがきにサポートサイトのURLを載せる

本の正誤表が載っていたり、サンプルコードがダウンロードできるサイトのことをここでは「サポートサイト」と呼ぶことにします。

本や同人誌を書いたら、ぜひサポートサイトを用意しましょう。
そして正誤表とサンプルコード、できれば質問ができる連絡先を用意しましょう。

そしてそのURLをまえがき（と奥付）に載せましょう。

次のはサポートサイト紹介文のサンプルです。

//sampleoutputbegin[サンプル]

==== サポートサイト

本書の正誤表は次のサイトに載っています。
サンプルコードもここからダウンロードできます。

 * @<href>{https://www.example.com/mygreatbook/}

//sampleoutputend


=== まえがきに謝辞を載せる

レビューしてくれた人や編集者がいたら、まえがきに謝辞を書きましょう。
家族への謝辞を入れるのもよくあります。

謝辞を忘れるのはかなり失礼な行為に当たります。
また名前を間違ったり、名前が抜けるのも大変失礼です。
締切間際に謝辞を書くと間違える可能性が高いので、執筆期間の早いうちに謝辞を書いておきましょう。


=== まえがきにソフトウェアのバージョンを載せる

まえがきに、使用した（または動作検証した）ソフトウェアのバージョンを載せるといいでしょう。

たとえばPythonの2.7なのか3.Xなのかは大きな問題です。
またLinuxだとCentOSなのかUbuntuなのか、Ubuntuなら18.04なのか20.04なのか、といった情報をまえがきに書いておきましょう。


=== まえがきの章タイトル以外は目次に載せない

目次には「まえがき」だけが載っていればよく、「本書の目的」や「対象読者」や「謝辞」などは目次に載せる必要はありません。

これらを目次に載せないための方法は2つあります。

ひとつは、節(Section)や項(Subsection)のタイトルに「@<code>|[notoc]|」オプションをつけることです。
これをつけると、その節や項は目次に載りません。

//list[][]{
@<nop>{}= はじめに

@<nop>{}==@<b>|[notoc]| 本書の目的

@<nop>{}==@<b>|[notoc]| 対象読者

@<nop>{}==@<b>|[notoc]| 謝辞

//}

もうひとつは、節(Section)や項(Subsection)を飛ばして目(Subsubsection)を使うことです。
通常、目次に乗るのは項までで目は載りません。
そこで、次のような見出しにすれば「本書の目的」や「対象読者」や「謝辞」は目次に載りません。

//list[][]{
@<nop>{}= はじめに

@<nop>{}@<b>|====| 本書の目的

@<nop>{}@<b>|====| 対象読者

@<nop>{}@<b>|====| 謝辞

//}

この方法は見出しのレベルを飛ばしているので、本文で使うのはよくありません。
しかし目次に載らないところで使うなら、あまり気にしなくてもいいでしょう。



== 初心者向け入門書


=== 初心者向け入門書ではフォントを大きめにする

Starterでは、デフォルトでは次のようなフォントサイズにしています。

 * ページがB5サイズなら、フォントは10pt
 * ページがA5サイズなら、フォントは9pt

しかし初心者向けの入門書では、次のように少し大きめのフォントを使ったほうが、紙面から受ける圧迫感が減ります@<fn>{fn-8ow3e}。

 * ページがB5サイズなら、フォントは11pt
 * ページがA5サイズなら、フォントは10pt

//footnote[fn-8ow3e][興味のある人は本屋に行って、入門書とオライリー本の本文を比べてみるといいでしょう。]

とはいえフォントを大きくしていない入門書もよく見かけます。
フォントを大きくするとページ数が増えてその分印刷代が高くなるので、どうするかはよく考えてください。

Starterで本文のフォントサイズを変える方法は、@<secref>{04-customize|subsec-fontsize}を参照してください。
またそれに合わせて本文の幅も変更する必要があるので、@<secref>{04-customize|subsec-textwidth}を参照してください。


=== 初心者向け入門書では節と項の見分けをつきやすくする

Re:VIEWでは@<LaTeX>{}のデザインをそのまま使っているので、節(Section)と項(Subsection)のデザインがよく似ており、見分けにくいです（@<img>{heading_design1}）。
初心者は本を読み慣れていないので、このデザインでは節と項の違いが分からず、結果として文書構造を理解しないまま読み進めてしまいます。

//image[heading_design1][Re:VIEWでは節(Section)と項(Subsection)が見分けにくい][scale=0.9,border=on]

Starterでは、節と項のデザインを大きく変えており、見分けやすくなっています（@<img>{heading_design2}）。
これは、初心者でも節と項の違いがすぐに分かり、文書構造を把握できるようにするための配慮です。

//image[heading_design2][Starterでは節(Section)と項(Subsection)が見分けやすい][scale=0.9,border=on]


=== 初心者向け入門書では節ごとに改ページする

初心者向けの入門書では、節(Section)ごとに改ページしていることが多いです。
そもそも初心者は本自体を読み慣れていないことが多いので、節ごとに改ページしてあげることで、文章の構造を分かりやすく示せます。

Starterでは節ごとに改ページする設定が用意されています。
詳しくは@<secref>{04-customize|subsec-newpagepersec}を参照してください。

ただし節ごとに改ページすると、当然ですが全体のページ数は増え、それを調整するために本文をあれこれ変更する必要があります。
実践するのは時間とお金（印刷代）に余裕がある場合だけにしましょう@<fn>{fn-njede}。

//footnote[fn-njede][逆にいうと、商業の入門書はそれだけのコストを掛けて制作されているということです。]



== 箇条書き

==={sec-goodenumerate} 箇条書きを正しく使い分ける

箇条書きには「番号なし」「番号つき」「ラベルつき」の3つがあります。

番号なしの箇条書きは、項目に順序がないか、あっても重要ではない場合に使います。
たとえば次の例では、公開された順に項目が並んでいるもののそこはあまり重要ではなく、項目の順番を入れ替えても文章の意味が成り立つので、番号なしの箇条書きを使います。

//list[][サンプル][]{
スタジオジブリ初期の代表作は次の通りです。

 * 風の谷のナウシカ
 * 天空の城ラピュタ
 * となりのトトロ
//}

//sampleoutputbegin[表示結果]

スタジオジブリ初期の代表作は次の通りです。

 * 風の谷のナウシカ
 * 天空の城ラピュタ
 * となりのトトロ

//sampleoutputend



番号つきの箇条書きは、手順や順位など、項目の順序が重要な場合に使います。
たとえば次の例では項目の順序が重要なので、番号つきの箇条書きを使います。

//list[][サンプル][]{
スタジオジブリ初期の代表作を、好きな順に並べました。

 1. 風の谷のナウシカ
 2. 天空の城ラピュタ
 3. となりのトトロ
//}

//sampleoutputbegin[表示結果]

スタジオジブリ初期の代表作を、好きな順に並べました。

 1. 風の谷のナウシカ
 2. 天空の城ラピュタ
 3. となりのトトロ

//sampleoutputend



ラベルつきの箇条書きは、一見すると番号つき箇条書きに似ていますが、数字ではなくアルファベットや文字を使う点が違います。
またラベルはあとから参照しやすくするために使い、順番を表すためには使いません。
そのため、ラベルつきの箇条書きは「番号なし箇条書きにラベルをつけたもの」として使います。

たとえば次の例では、項目の順序はさほど重要でないので番号なし箇条書きでもいいのですが、あとから項目を参照するのでラベルつき箇条書きにしています。

//list[][サンプル][]{
スタジオジブリ初期の代表作は次の通りです。

 - (A) 風の谷のナウシカ
 - (B) 天空の城ラピュタ
 - (C) となりのトトロ

興行収入を調べると、(A)が14.8億円、(B)が11.6億円、(C)が11.7億円でした。
//}

//sampleoutputbegin[表示結果]

スタジオジブリ初期の代表作は次の通りです。

 - (A) 風の谷のナウシカ
 - (B) 天空の城ラピュタ
 - (C) となりのトトロ

興行収入を調べると、(A)が14.8億円、(B)が11.6億円、(C)が11.7億円でした。

//sampleoutputend



番号つき箇条書きとラベルつき箇条書きは、きちんと使い分けましょう。
前者は順序に強い意味がある場合、後者は順序に意味がないまたは弱い場合に使います。


=== 箇条書き直後に継続する段落は字下げしない

段落の途中に箇条書きを入れる場合、箇条書きの直後は字下げ（インデント）をしないようにしましょう。

次の例を見てください。
箇条書きの直後に「@<code>|//noindent|」を入れることで、字下げしないようにしています。

//list[][サンプル][]{
スタジオジブリ初期の代表作には、

 * 風の谷のナウシカ
 * 天空の城ラピュタ
 * となりのトトロ

@<b>|//noindent|
が挙げられます。

しかしスタジオジブリが発足したのは実はラピュタからであり、ナウシカは厳密にはスタジオジブリの制作ではないのです。
//}

//sampleoutputbegin[表示結果]

スタジオジブリ初期の代表作には、

 * 風の谷のナウシカ
 * 天空の城ラピュタ
 * となりのトトロ

//noindent
が挙げられます。

しかしスタジオジブリが発足したのは実はラピュタからであり、ナウシカは厳密にはスタジオジブリの制作ではないのです。

//sampleoutputend



字下げは段落の始まりを表すために使います。
しかし上の例の「が挙げられます。」は段落の始まりではなく途中だと考えられるため、字下げは行いません。

もっとも、段落の途中に箇条書きを入れること自体がよくありません。
この例なら、次のように書き換えるといいでしょう。

//list[][サンプル][]{
スタジオジブリ初期の代表作には、@<b>|次の3つが挙げられます。|

 * 風の谷のナウシカ
 * 天空の城ラピュタ
 * となりのトトロ

しかしスタジオジブリが発足したのは実はラピュタからであり、ナウシカは厳密にはスタジオジブリの制作ではないのです。
//}





== 本文


=== 強調箇所は太字のゴシック体にする

日本語の文章では本文が明朝体の場合、強調箇所は太字にするだけでなく、ゴシック体にするのがよいとされています。
そのため、強調には「@<code>|@@<nop>{}<b>{...}|」ではなく「@<code>|@@<nop>{}<B>{...}|」または「@<code>|@@<nop>{}<strong>{...}|」を使ってください。

//list[][サンプル][]{
本文本文@<b>|@@<nop>$$<B>{強調}|本文本文。@@<nop>$$<balloon>{ゴシック体なので望ましい}

本文本文@<b>|@@<nop>$$<b>{太字}|本文本文。@@<nop>$$<balloon>{明朝体のままなので望ましくない}
//}

//sampleoutputbegin[表示結果]

本文本文@<B>{強調}本文本文。@<balloon>{ゴシック体なので望ましい}

本文本文@<b>{太字}本文本文。@<balloon>{明朝体のままなので望ましくない}

//sampleoutputend




=== 強調と傍点を使い分ける

傍点とは@<bou>{このように}文章の上についた小さな点のことであり、Re:VIEWやStarterなら「@<code>|@@<nop>{}<bou>{...}|」でつけられます。

傍点は強調とよく似ていますが、強調は「重要な箇所」を表すのに対し、傍点は「重要ではないけど他と区別したい・注意を向けたい」という用途で使います。

たとえば次の例では、否定文であることが見落とされないよう、傍点を使っています。
ここは重要箇所ではないので、強調は使わないほうがいいでしょう。

//quote{
//noindent
Re:VIEW Starterではアップグレード用スクリプトを用意して@<bou>{いません}。
//}

また技術系の文書ではほとんど見かけませんが、小説や漫画では「何か含みを持たせた表現」や「のちの伏線になる箇所」に傍点を使います。
参考までに、『ワールドトリガー』22巻@<fn>{fn-z94o3}から傍点を使った例を（ネタバレは避けつつ）引用します。

//quote{
//noindent
その@<ruby>{追尾弾, ハウンド}は@<bou>{相手を動かすため}の@<ruby>{追尾弾, ハウンド}なのよ @<small>{(p.132)}
//}

//quote{
//noindent
だとすると、@<ruby>{雨取, あまとり}ちゃんは人を@<bou>{狙って撃てない}のか？ @<small>{(p.133)}
//}

//quote{
//noindent
今の@<ruby>{千佳, ちか}は間違いなくちゃんと
@<bou>{戦う意志}を持ってますよ @<small>{(p.134)}
//}

//quote{
//noindent
#@#さっきの@<ruby>{弾, たま}は@<bou>{追尾性能を切った}@<ruby>{追尾弾, ハウンド}か……!? @<small>{(p.174)}
さっきの@<ruby>{弾, たま}は@<bou>{■■■■を■った}■■■か……!? @<small>{(p.174)}
//}

//footnote[fn-z94o3][『ワールドトリガー』22巻（葦原大介、集英社、2020年）]


=== [PDF] 記号と日本語はくっつくことに注意する

PDFでは、読みやすさのために日本語と英数字の間に少しアキ（隙間）が入ります。
これは内部で使っている組版用ソフト「@<LaTeX>{}」の仕様です。

//list[][サンプル][]{
あいうえおABC DEFかきくけこ123。
//}

//sampleoutputbegin[表示結果]

あいうえおABC DEFかきくけこ123。

//sampleoutputend



しかし記号の場合はアキが入りません。
たとえば次の例では、「ン」と「-」の間にはアキが入っていません。

//list[][サンプル][]{
オプション-pを使う。
//}

//sampleoutputbegin[表示結果]

オプション-pを使う。

//sampleoutputend



このような場合は、半角空白を入れるか、またはカッコでくくるといいでしょう。

//list[][サンプル][]{
オプション -p を使う。

オプション「-p」を使う。
//}

//sampleoutputbegin[表示結果]

オプション -p を使う。

オプション「-p」を使う。

//sampleoutputend




=== [PDF] 等幅フォントで余計な空白が入るのを防ぐ

Re:VIEWやStarterでは、PDFを作成するために「@<LaTeX>{}」という組版ソフトを使っています。
この@<LaTeX>{}では、半角空白は次のように扱われます。

 * 文章中の半角空白は、何個連続していても1個分の空白しか出力されない。
 * ただし「.」と「:」と「!」と「?」の直後の半角空白は、1個しかなくても2個分の空白が出力される。

このルールは、英語の文章を書くうえでは妥当な仕様です。
そしてこのルールは、フォントに依らず適用されます。
そのため等幅フォントを使っているときでも、「.」と「:」と「!」と「?」の直後に半角空白があると2個分の空白が出力されます。

しかし、等幅フォントを使うのはたいていプログラムコードやコマンドを表す場合なので、半角空白が勝手に2個出力されてしまうのは困りものです。
たとえば、@<br>{}
「@<code>|{a: 1}|」と書いたつもりが、@<br>{}
「@<code>|{a:  1}|」と表示されるのは、意図したことではないでしょう。

そこでStarterでは、等幅フォントの場合はこのルールを適用しないようにしています。
そのための「@<code>|\frenchspacing|」@<fn>{fn-2zb8y}というマクロが@<LaTeX>{}にはあるので、これを使います。
具体的には、@<LaTeX>{}マクロを次のように上書きしています。

//list[][]{
%% 「@<tt>{}」を上書き
\renewcommand{\reviewtt}[1]{{%
  @<b>|\frenchspacing|%   % 「! ? : .」の直後の空白が2文字分になるのを防ぐ
  \texttt{#1}%      % 等幅フォントで表示
}}
//}

//footnote[fn-2zb8y][「@<code>{\frenchspacing}」というのは、「フランス流の空白の入れ方」という意味です。フランス語では「. : ! ?」の直後でも空白は1個なようです。]

「@<code>|@@<nop>{}<code>{}|」が呼び出す「@<code>|\reviewcode|」マクロにも同じ変更をしています。
このおかげで、Starterでは「@<code>|@@<nop>{}<tt>{}|」や「@<code>|@@<nop>{}<code>{}|」を使ったときに空白が2個出力されるのを防いでいます。

ただし、本来このようなルール変更は「@<code>|@@<nop>{}<code>{}|」にだけ行うべきであり、「@<code>|@@<nop>{}<tt>{}|」では変更すべきではありません。
現実には「@<code>|@@<nop>{}<tt>{}|」がプログラムコードを表すのに広く使われていることを鑑みて、Starterでは「@<code>|@@<nop>{}<tt>{}|」でもルール変更をしています。
しかし本来はすべきでないと知っておいてください。

なお「@<code>|@@<nop>{}<tt>{}|」を本来の動作に戻すには、@<file>{sty/mystyle.sty}に次のマクロ定義を追加してください。

//list[][@<file>{sty/mystyle.sty}]{
%% @@<nop>{}<tt>{} を本来の動作に戻す
\renewcommand{\reviewtt}[1]{%
  \texttt{#1}%      % 等幅フォントで表示
}
//}


=== 文章中のコードは折り返しする

(TODO)


=== ノートとコラムを使い分ける

ノートとコラムはよく似ています。次のように使い分けるといいでしょう。

 * 本文に対する補足情報は、ノートを使う。
   あくまで補足情報なので、文章が長くなりすぎないよう注意する。
 * 章(Chapter)の終わりに、長めの関連情報やエッセーを書く場合はコラムを使う。
   これは節(Section)と同じ扱いにするので、「@<code>|==[column]|」を使う。

ときどき、ノートで書くべきことをすべてコラムで書いている同人誌を見かけます。
あまりよいことではないので、ノートとコラムの使い分けを検討してみてください。
また使い分けがよく分からないと思ったら、商業の技術書籍をいくつか参考にしてみてください。



== 見出し

=== 節タイトルが複数行になるなら下線や背景色を使わない

Starterでは節(Section)のタイトルに下線や背景色をつけられます。
しかしそれらは節タイトルが1行に収まる場合だけを想定しており、複数行の場合は考慮されていません（@<img>{section_title_wlines}）。

//image[section_title_wlines][節タイトルが長くて複数行になった場合][scale=0.9,border=on,pos=p]

複数行になるぐらいの長い節タイトルがある場合は、下線も背景色も使わないデザインを選びましょう。
Starterであれば、次のどれかを選ぶといいでしょう。

 * 「@<code>{numbox}」… 節番号を白ヌキ文字（@<img>{section_title_wlines}上から2番目）
 * 「@<code>{leftline}」… 節タイトル左に縦線（@<img>{section_title_wlines}上から4番目）
 * 「@<code>{circle}」… 大きい円に白ヌキ文字（@<img>{section_title_wlines}上から5番目）

このうち「@<code>{circle}」は、節タイトルが1行の場合でも2行分の高さを必要とするので、他のデザインと比べてページ数が若干増えることに注意してください。

なおStarterにおける節タイトルのデザインを変更する方法は、@<secref>{04-customize|subsec-sectitle}を参照してください。


=== 項を参照するなら項番号をつける

「@<code>|@@<nop>{}<secref>{}|」や「@<code>|@@<nop>{}<hd>{}|」で項(Subsection)を参照するなら、項にも番号をつけましょう。
番号のついていない見出しを参照するのは止めておいたほうがいいでしょう。

項に番号をつける方法は、@<secref>{04-customize|subsec-subsecnum}を参照してください。



== プログラムコード

=== 0とOや1とlが見分けやすいフォントを使う

プログラムコードやターミナルでは、0とOや、1とlが見分けやすい等幅フォントを使ってください（@<img>{font_beramono}）。
具体的には「@<em>{beramono}」フォントか「@<em>{inconsolata}」フォントを使うといいでしょう。

//image[font_beramono][0とOや、1とlが見分けやすい等幅フォントを使う][scale=0.8]

Starterでは、プログラムコードやターミナルの等幅フォントを選べる設定を用意しています。
詳しくは@<secref>{04-customize|subsec-ttfont}を参照してください。


=== フォントを小さくしすぎない

プログラムコードやターミナルのフォントサイズが小さすぎると、とても読みづらくなります。
具体的には、8pt以下@<fn>{fn-5c1j2}にするのはやめましょう。

//footnote[fn-5c1j2][念のために説明すると、「8pt以下」には8ptも含まれます。]

昔は長い行をページ内に収める必要があったため、プログラムコードのフォントサイズを小さくする必要がありました。
しかし今は長い行を自動的に折り返す機能があるので、小さいフォントを使う必要性は薄れています。
また、たとえば「@<em>{inconsolata}」フォントは@<LaTeX>{}のデフォルトフォントと比べて小さめに表示されるため、このフォントを選ぶと必要以上に小さく見えます。

Starterのデフォルトでは、本文のフォントサイズに関わらず、A5サイズなら9pt、B5サイズなら10ptのフォントサイズが使われます。

 * A5サイズなら、本文が9ptと10ptのどちらであっても、プログラムコードはデフォルトで9pt
 * B5サイズなら、本文が10ptと11ptのどちらであっても、プログラムコードはデフォルトで10pt

この調整は、「@<file>{config-starter.yml}」の設定項目「@<code>|program_default_options:|」と「@<code>|terminal_default_options:|」の中の、「@<code>|fontsize:|」で行われています@<fn>{k7dzw}。
これらの値は、本文がA5サイズ10ptまたはB5サイズ11ptなら「@<code>|small|」に設定され、A5サイズ9ptまたはB5サイズ10ptなら「@<code>|null|」に設定されます。

//footnote[k7dzw][以前は「@<code>|progoram_fontsize:|」と「@<code>|terminal_fontsize:|」という設定項目がありましたが、廃止されました。]


=== 重要箇所を目立たせる

プログラムコードが5行以上あると、読者はコードのどこに注目すればいいか、分からなくなります。
もし注目してほしい箇所が強調されていれば、読者にとってとても理解しやすくなります。

プログラムコードの中で注目してほしい箇所は、ぜひ太字にして目立たせましょう。
たとえば次の例は再帰プログラムの説明なので、再帰している箇所を太字にして目立たせています。

//list[][再帰プログラムの例]{
function @<b>|fib(n)| {
    if (n <= 1) {
        return n;
    } else {
        return @<b>|fib(n-1)| + @<b>|fib(n-2)|;
    }
}
//}

なおプログラムコードを太字にするときは、「@<code>|@@<nop>{}<B>{}|」ではなく「@<code>|@@<nop>{}<b>{}|」を使ってください。
「@<code>|@@<nop>{}<B>{}|」だと等幅フォントのはずがゴシック体に変わってしまいます。
「@<code>|@@<nop>{}<b>{}|」だと太字にするだけなので等幅フォントのままで変わりません。

//note[太字では目立たないことがある]{
太字にしても目立たない文字や記号があるので注意してください@<fn>{fn-owu4i}。

たとえば空白やタブ文字は、目に見えないので太字にしても見えません。
またピリオド「@<code>|.|」やカンマ「@<code>|,|」やハイフン「@<code>|-|」やクオート「@<code>|'"`|」などは、太字にしても目立たず、読者には気づいてもらえない可能性が高いです。

解決策としては、文字の色を変えるか、背景色を変えることです。
Starterではどのような方法にするかを検討中です。

//footnote[fn-owu4i][重要でない箇所を薄く表示したり、削除したコードに取り消し線をつける場合でも、同様の問題が起こります。]
//}


=== 重要でない箇所を目立たせない

Javaの「@<code>{public static void main(String[] args)}」や、PHPの「@<code>|<?php ?>|」は、プログラムコードの説明において重要ではないので、目立たせないようにするといいでしょう。

Starterでは「@<code>|@@<nop>{}<weak>{...}|」を使うと、プログラムコードの一部を目立たせないようにできます。

//list[][重要でない箇所を目立たせなくした例]{
@<weak>|public class Example {|
@<weak>|    public static void main(String[] args) {|
        System.out.println("Hello, world!");
@<weak>|    }|
@<weak>|}|
//}


=== 差分（追加と削除）の箇所を明示する

サンプルコードを徐々に改善するような内容の場合は、次のようにすると差分が分かりやすくなります。

 * 削除した行に「@<code>|@@<nop>{}<del>{}|」で取り消し線を引く。
 * 追加した行を「@<code>|@@<nop>{}<ins>{}|」で太字にする。

たとえば次のようなサンプルコードがあるとします。

//list[][最初のサンプルコード]{
/// ボタンを押すたびにラベルを入れ替える
$('#button').on('click', function(ev) {
  let $this = $(this);
  let prev = $this.text();
  let next = $this.data('label');
  $this.text(next).data('label', prev);
});
//}

これを改善して、次のようなコードにしました。
しかしこれだと、どこを変更したかを読者が探さないといけません。

//list[][改善したサンプルコード]{
/// ボタンを押すたびにラベルを入れ替える
function toggleLabel(ev) {
  let $this = $(this);
  let prev = $this.text();
  let next = $this.data('label');
  $this.text(next).data('label', prev);
}
$('#button').on('click', toggleLabel);
//}

もし次のように差分を分かりやすく表示すれば、読者は変更点をすぐに理解できるでしょう。

//list[][]{
/// ボタンを押すたびにラベルを入れ替える
@<del>|$('#button').on('click', function(ev) {|
@<ins>|function toggleLabel(ev) {|
  let $this = $(this);
  let prev = $this.text();
  let next = $this.data('label');
  $this.text(next).data('label', prev);
@<del>|});|
@<ins>|}|
@<ins>|$('#button').on('click', toggleLabel);|
//}

この作業はとても面倒です。
それでもこの面倒を乗り切った本だけが、初心者にとって分かりやすい本になるのです。

このほか、Gitでの差分のような表示方法も考えられます。
各自で工夫してみてください。


=== 長い行の折り返し箇所を明示する

長い行が右端で折り返されるとき、折り返された箇所が分かるような表示にするといいでしょう。
そのための方法は3つあります。

 * 折り返し箇所に何らかの目印をつける
 * 行番号をつける
 * 行末を表す記号をつける

たとえば次の例では、あたかも複数行あるかのように見えます。

//list[][][foldmark=off]{
*********************************************************************************************************************************************************************************************
//}

しかし折り返した箇所に折り返し記号をつけてみると、実は1行であることが分かります。

//list[][][foldmark=on]{
*********************************************************************************************************************************************************************************************
//}

また行番号をつけても、1行であることが分かります。

//list[][][foldmark=off,lineno=on,linenowidth=0]{
*********************************************************************************************************************************************************************************************
//}

あるいは行末を表す記号をつける方法でも、折り返した行にはその記号がつかないので、1行であることが分かります。

//list[][][foldmark=off,eolmark=on]{
*********************************************************************************************************************************************************************************************
//}

このように、方法は何でもいいので折り返し箇所が分かるような仕組みを使いましょう。

Starterでは、デフォルトで折り返し箇所に折り返し記号がつくようになってます。
また折り返し記号がプログラムコードの一部だと間違って認識されないよう、次のような工夫をしています。

 * フォントの色をグレーにして薄く表示する。
 * フォントの種類を等幅でなくローマン体にする。


=== 行番号を控えめに表示する

行番号は、プログラムコードと同じフォント・同じ色で表示すべきではありません。
行番号はあくまで脇役なので、主役であるプログラムコードよりも目立たないようにすべきです。

Starterでは、行番号をグレー表示しているので、行番号がプログラムコードよりも目立たちません。

//list[][][lineno=1,linenowidth=0]{
function fib(n) {
    if (n <= 1) {
        return n;
    } else {
        return fib(n-1) + fib(n-2);
    }
}
//}


=== 行番号を考慮して長い行を折り返す

長い行を自動的に折り返すとき、もし行番号があればそれを考慮した表示にすべきです。

Starterではそのような表示になっています。

//list[][][lineno=1,linenowidth=0]{
if error:
    sys.err.write("Something error raised. Please contact to system administrator.\n")
//}

この例を見ると、折り返した行が左端には行かず、行番号の表示スペースを避けて折り返されています。
これが、行番号つき折り返しの望ましい姿です。

これに対し、Re:VIEWでは折り返した行が左端に到達してしまい、行番号の表示スペースを侵食します。
これは行番号つき折り返しの望ましくない姿です。


==={subsec-programborder} ページまたぎしていることを可視化する

プログラムコードがページまたぎしていることが分かるようにしましょう。

 * プログラムコードに枠線がないと、ページまたぎしたときに次のページに続いているかどうか、次のページを見ないと分かりません（@<img>{program_border}左）。
 * プログラムコードに枠線があれば、ページまたぎしても次のページに続いているかどうかが、次のページを見なくても分かります（@<img>{program_border}右）。

//image[program_border][プログラムコードに枠線がない場合とある場合の違い][scale=1.0]

Starterではデフォルトでプログラムコードに枠線がつきます。
枠線をつけたくない場合は「@<file>{config-starter.yml}」の設定項目「@<code>{program_border:}」を「@<code>{false}」に設定します。

なお、プログラムコードの背景枠の四隅を角丸にすることでも、ページまたぎしていることを可視化できます。


=== インデントを可視化する

PythonやYAMLではインデントでブロック構造を表すので、ブロックの終わりを表すキーワードや記号がありません。
そのため、プログラムコードがページをまたぐとインデントが分からなくなる（つまりブロックの構造が分からなくなる）ことがあります。

これを防ぐには、何らかの方法でインデントを可視化します。
そうすると、プログラムコードがページをまたいでもインデントが分からなくなることはありません。

Starterでは「@<code>|//list[][]@<b>{[indent=4]}{ ... //}|」@<fn>{lvw95}のようにすることで、インデントごとに薄い縦線をつけられます。

//footnote[lvw95][後方互換性のために、「@<code>{indentwidth=4}」という名前でも指定できます。]

//list[][薄い縦線をつけてインデントを可視化する][indent=4]{
class Fib:

    def __call__(n):
        if n <= 1:
            return n
        else:
            return fib(n-1) + fib(n-2)
//}



== 図表

=== 図表が次のページに送られてもスペースを空けない

Re:VIEWではデフォルトで、図は現在位置に置かれるよう強制されます。
もし現在位置に図を入れるスペースがない場合は、図は次のページに表示され、そのあとに本文が続きます。
この仕様のせいで、たくさんのスペースが空いて本文がスカスカになってしまうことがあります（@<img>{figure_heretop}上）。

これはよくないので、Starterでは図が次のページに送られた場合、後続の本文を現在位置に流し込みます。
図が現在位置に入らないからといって、スペースを空けたままにする必要はありません（@<img>{figure_heretop}下）。

//image[figure_heretop][後続の本文を現在位置に流し込むかどうか]


=== 大きい図表は独立したページに表示する

たとえば図がページの3/4を占めるようなら、そのページには後続のテキストを流しこまず、その図だけのページにしましょう。

Starterだと「@<code>|//image[ファイル名][説明文][scale=1.0,@<b>{pos=p}]|」とすると、その図だけの独立したページに表示されます。


=== 図表は番号で参照する

図や表は、現在位置に入り切らないとき、自動的に次のページに送られます。
その場合、たとえば「次の図を見てください」と書いてあると「次の図」がなくて読者が混乱します。

そのため、図や表は必ず番号で参照してください。
図なら「@<code>|@@<nop>{}<img>{ファイル名}|」、表なら「@<code>|@@<nop>{}<table>{ラベル}|」で参照します。


=== 白黒印刷でも問題ないか確認する

形は同じで色だけが違う図形を使うと、白黒印刷したときに判別がつかなくなります。

白黒印刷するなら、形を変えたり線の種類を変えたりするなどして、白黒印刷しても判別できるような図にしましょう。


=== 表のカラム幅を指定する

表に長い文章を入れると、ページ横にはみ出してしまいます。

このような場合は、「@<code>{//tsize[latex][@<b>{p{70mm\}}]}」のようにカラムの幅を指定しましょう。

//list[][サンプル][]{
/@<nop>$$/tsize[latex][|l|@<b>|p{70mm}||]
/@<nop>$$/table[tbl-jqqu9][長いテキストを使ったサンプル]{
伝承地		伝承内容
-------------------------------------------
風の谷		その者、蒼き衣を纏て金色の野に降り立つべし。失われし大地との絆を結び、ついに人々を青き清浄の地に導かん。
ゴンドアの谷	リーテ・ラトバリタ・ウルス・アリアロス・バル・ネトリール
/@<nop>$$/}
//}

//sampleoutputbegin[表示結果]

//tsize[latex][|l|p{70mm}|]
//table[tbl-jqqu9][長いテキストを使ったサンプル]{
伝承地		伝承内容
-------------------------------------------
風の谷		その者、蒼き衣を纏て金色の野に降り立つべし。失われし大地との絆を結び、ついに人々を青き清浄の地に導かん。
ゴンドアの谷	リーテ・ラトバリタ・ウルス・アリアロス・バル・ネトリール
//}

//sampleoutputend




=== 表のカラムが数値なら右寄せにする

表のカラムはデフォルトで左寄せ(l)ですが、右寄せ(r)や中央揃え(c)を指定できます。
特にカラムが数値なら、右寄せにするのがいいでしょう。

//list[][サンプル][]{
/@<nop>$$/tsize[latex][@<b>{|l|c|r|}]
/@<nop>$$/table[tbl-o599k][左寄せ・中央揃え・右寄せのサンプル]{
左寄せ		中央揃え	右寄せ
-------------------------------------------
1		1		1
10		10		10
100		100		100
1000		1000		1000
/@<nop>$$/}
//}

//sampleoutputbegin[表示結果]

//tsize[latex][|l|c|r|]
//table[tbl-o599k][左寄せ・中央揃え・右寄せのサンプル]{
左寄せ		中央揃え	右寄せ
-------------------------------------------
1		1		1
10		10		10
100		100		100
1000		1000		1000
//}

//sampleoutputend





== ページデザイン

==={subsec-sidemargin} [PDF] 印刷用では左右の余白幅を充分にとる

紙の書籍では、左右いっぱいに本文を印刷してはいけません。
必ずページ左右の余白を充分に確保してください（@<img>{margin_book}）。

 * 見開きにおいて内側の余白（つまり左ページの右余白と、右ページの左余白）は、最低20mm必要です。
   それ以上切り詰めると、本を開いたときに内側の本文がとても読みにくくなります。
 * 見開きにおいて外側の余白（つまり左ページの左余白と、右ページの右余白）は、10〜15mmくらい必要です。
   それ以上切り詰めると、指が本文にかかってしまうので読みにくくなります。

//image[margin_book][紙の書籍ではページ左右の余白幅が必要][scale=0.8]

Starterではこのような制限を考慮しつつ、本文幅が最大になるよう設定しています。
そのため、@<B>{印刷用PDFファイルでは奇数ページと偶数ページで左右の余白幅が違います}。
これは意図した仕様でありバグではありません。

電子用PDFファイルではこのようなことを考慮する必要はありません。
そのため、電子用PDFでは左右の余白幅は同じです。


=== [PDF] タブレット向けでは余白を切り詰める

Starterでは、印刷用PDFと電子用PDFを切り替えて生成できます。
このとき、電子用PDFのレイアウトは印刷用PDFをほぼ忠実に再現しています。
つまり電子用PDFのレイアウトは電子用として最適化されているわけではなく、あくまで印刷用のレイアウトを流用しているだけです。

もし印刷用PDFを必要とせず、電子用PDFだけを必要とするなら、レイアウトをタブレット向けに最適化するといいでしょう。
タブレット向けのPDFでは、本文周辺の余白を切り詰めると、7インチや8インチのタブレットでの読みやすさが向上します。
余白がまったくないのもどうかと思いますが、全角1文字分ぐらいの余白があればタブレットの画面では十分です。

Starterでは、プロジェクト作成時にタブレット向けのレイアウトを選択できます。
そうすると、タブレット向けに余白を切り詰めたレイアウトになります。
印刷用PDFを必要としない人は試してみてください。

なおタブレット向けに余白を切り詰めたA5サイズの本文幅は、切り詰めていない通常のB5サイズの本文幅とほぼ同じになります。
つまりB5サイズで余白を切り詰めると本文幅が長くなりすぎるので、Starterではタブレット向けとしてはA5サイズのみを用意しています。


=== [PDF] 電子用PDFではページ番号の位置を揃える

紙の書籍においてページ番号は、見開きで左右の上隅または下隅に置かれることが多いです。
紙の書籍は見開きで読めるので、ページ番号がこのような位置でも問題ありません。

しかしこれと同じことを電子用PDFで行うと、ページ番号の位置が右上だったり左上だったり（あるいは右下だったり左下だったり）一定しないので、読みづらいです。
なぜなら、電子用PDFをタブレットで見るときは見開きではなく1ページずつ読まれるからです。

つまり紙の書籍におけるページ番号は見開きであることを前提にしており、それと同じ前提を電子用PDFにしてはいけません。

電子用PDFでは、ページ番号の位置は一定であることが望ましいです。
そのため、Starterではページ番号をページ下の真ん中に置いています。
またこの位置は紙の書籍でも通用するので、印刷用PDFと電子用PDFとで同じページレイアウトにできます。


=== 非Retina向けには本文をゴシック体にする

Re:VIEWやStarterでは、本文のフォントを明朝体にしています。
明朝体は、印刷物やRetinaディスプレイのように解像度が高いと読みやすいですが、Retinaでない（つまり高解像度でない）ディスプレイだと読みづらいです。

スマートフォンやノートパソコンではRetinaディスプレイが普及しましたが、外部ディスプレイでは高解像度ではないものがまだ一般的です。

もし高解像度でないディスプレイでも読みやすくしたいなら、本文をゴシック体にすることを検討しましょう。
Starterでは「@<file>{config-starter.yml}」の設定を変えるだけで変更できます。
詳しくは@<secref>{04-customize|subsec-fontfamily}を参照してください。



== 大扉


=== 長いタイトルでは改行箇所を明示する

本や同人誌のタイトルが長いと、大扉（タイトルページ）において不自然な箇所で改行されてしまいます（@<img>{multiline-title}上）。

これを防ぐために、Starterではタイトルを複数行で指定できるようになっています。
この場合、大扉（タイトルページ）ではタイトルが1行ずつ表示されるので、自然な位置を指定して改行できます（@<img>{multiline-title}下）。

//image[multiline-title][タイトルの改行位置を指定しなかった場合（上）とした場合（下）][scale=0.7,border=on]


==={subsec-visualtitlepage} 大扉を別のソフトで作成する

Re:VIEWやStarterが生成する大扉（タイトルページ）は、デザインがよくありません。
PhotoshopやIllustratorやKeynoteで作成したほうが、見栄えのいいデザインになります（@<img>{titlepage-samples}）。

//image[titlepage-samples][Keynoteで作成した大扉の例][scale=0.9]

Starterでは、別のソフトで作成した大扉や奥付のPDFファイルを読み込めます。
やり方は@<secref>{04-customize|subsec-coverpdf}を参照してください。

またこうして読み込んだPDFファイルにも、ノンブルがつきます。
以前は大扉や奥付のPDFファイルを読み込む機能がなかったため、最初にノンブルなしの印刷用PDFを生成し、大扉や奥付を差し替えてから、最後にノンブルをつける必要がありました。
今は印刷用PDF生成時に大扉や奥付のPDFファイルを読み込めるので、最初からノンブルつきで印刷用PDFが生成できます。

このように、別ソフトで作成さた大扉を取り込む機能がStarterでは整っています。
積極的に別ソフトで作っていきましょう。
なお印刷所へ入稿するなら、大扉に背景色をつける場合は塗り足し@<fn>{fn-79q5r}もつけましょう。
「塗り足し」が分からなければ、大扉の背景色を白にしておくと入稿時のトラブルが少なくなりま
す。

//footnote[fn-79q5r][塗り足しについては@<secref>{04-customize|subsec-bleed}を参照してください。]

//note[大扉をKeynoteやPagesで作成する]{
Keynote.appで大扉を作成しようとすると、困ったことにKeynote.appにはスライドのサイズをA5やB5にする機能がありません。
かわりにスライドを次のようなカスタムサイズにすると、ちょうどA5やB5のサイズになります。

 * A5の場合：419pt x 595pt
 * B5の場合：516pt x 728pt

またPages.appなら簡単にA5やB5にできます。
B5にしたい場合は「JIS B5」を選んでください。
//}



== 奥付


==={subsec-colophonlastpage} 奥付は最後のページに置く

紙の本は必ず偶数ページになります。
たとえば、ページ数が100ページの本はあっても101ページの本はありません。
そのため、本の最終ページも偶数ページになります。

そして奥付は、本の最後のページに置きます。
言い換えると、奥付は本の最後の偶数ページに置かれるはずです。
しかし、このことが考慮されていない同人誌がたまにあります。

実は素のRe:VIEWではこれが考慮されておらず、奥付が奇数ページに置かれることがあります@<fn>{fn-qzmgo}。
Starterではこのようなことはありません。
奥付は必ず最後の偶数ページに置かれます。気が利いてますね。

//footnote[fn-qzmgo][TechBoosterのテンプレートでは偶数ページに置かれるように修正されています。]


=== 奥付に更新履歴とイベント名を記載する

一般的に、奥付には本の更新履歴が記載されます。

同人誌ならそれに加えて、初出のイベント名も記載するといいでしょう。
そうすると、どのイベントで手に入れたかが分かりやすくなります@<fn>{fn-ksg34}。

//footnote[fn-ksg34][少なくとも新刊はこれが当てはまります。既刊だと当てはまりませんが、初出のイベント名が分かるだけでも読者の助けになります。]


=== 利用した素材の作者とURLを奥付に記載する

本の作成に使用した素材があれば、作者名とURLを奥付に記載するといいでしょう。

たとえば表紙に写真やイラストを使ったのであれば、その作者と素材へのURLを奥付に記載しましょう。


=== 利用したソフトウェアを奥付に記載する

本や同人誌をどんなソフトウェアで作ったかを奥付に記載すると、他の人の参考になります。

たとえば「InDesignで作った」「MS Word 2016で作った」「Pages 10.0で作った」「Vivliostyleで作った」という情報があると、これから本や同人誌を作ろうとする人にとって大きな手がかりとなります。

またエディタに強いこだわりがある人なら「VS Codeで執筆した」「Vimで執筆した」のようにアピールするのもいいでしょう。



=={sec-textlint} textlintによる文章チェック

この章では、「textlint」というツールを使って文章をチェックする方法を紹介します。


=== textlintとは

「@<href>{https://github.com/textlint/textlint, textlint}」とは、日本語の文章をチェックして改善点を指摘してくれるツールです。

たとえば、次のような内容のファイルがあるとします。
ファイル名の拡張子は「@<file>{.rd}」ではなく「@<file>{.md}」であることに注意してください。

//list[][@<file>{sample1.md}：改善前]{
Re:VIEW Starterを使うと、きれいなPDFファイルを作成することができます。
//}

これをtextlintでチェックすると、「もっと簡潔に書けるよ」と指摘してくれます（textlintのインストールについてはあとで説明します）。

//terminal{
$ @<userinput>{textlint sample1.md}

/Users/yourname/sample1.md
  1:35  ✓ error  【dict2】 "することができます"は冗長な表現です。"することが"を省き簡潔な表現にすると文章が明瞭になります。
解説: https://github.com/textlint-ja/textlint-rule-ja-no-redundant-expression#dict2  ja-technical-writing/ja-no-redundant-expression

✖ 1 problem (1 error, 0 warnings)
✓ 1 fixable problem.
Try to run: $ textlint --fix [file]

//}

指摘された通りに改善してみましょう。

//list[][@<file>{sample1.md}：改善後]{
Re:VIEW Starterを使うと、きれいなPDFファイルを作成@<del>{することが}できます。
//}

これをtextlintでチェックすると、指摘されなくなりました。

//terminal{
$ textlint sample1.md   @<balloon>{何もエラーが出ない}
//}

もう1つ、別の例を見てみましょう。
たとえば次のような文章があるとします。

//list[][@<file>{sample2.md}：改善前]{
ノンブルは、印刷所に入稿するときに必要です。
//}

一見すると問題がない文章ですが、textlintでチェックすると「1つの文に複数個の『に』があるよ」と指摘してくれます。

//terminal{
$ textlint sample2.md

/Users/yourname/sample1.md
  1:17  error  一文に二回以上利用されている助詞 "に" がみつかりました。  japanese/no-doubled-joshi

✖ 1 problem (1 error, 0 warnings)

//}

指摘されたことを改善してみましょう。

//list[][@<file>{sample2.md}：改善後]{
ノンブルは、印刷所@<del>{に}@<b>{へ}入稿するときに必要です。
//}

改善後は、指摘されなくなりました。

//terminal{
$ textlint sample2.md   @<balloon>{何もエラーが出ない}
//}

このように、textlintを使うと日本語文章の改善できそうな点が分かります。
とはいえ、textlintも万能ではありません。
次の項で注意点を説明します。


=== textlintの注意点

textlintは似たような文章であっても、改善点を指摘してくれないことがあります。
たとえば先ほどの1番目の例である「@<bou>{作成する}ことができます」だと改善点を指摘してくれますが、「@<bou>{作る}ことができます」だと指摘してくれません。
前者が「作成できます」に改善できたように、後者も「作れます」に改善できます。

またtextlintは「どこが改善できるか」を教えてくれますが、「どう改善できるか」は必ずしも教えてくれません。
先ほどの2番目の例がまさにそれで、『に』が複数あることは教えてくれますが、どう直せばいいかは自分で考える必要があります。

さらにtextlintの指摘がいつも正しいわけではありません。
たとえば「血も涙もない。」という文章をtextlintでチェックすると、「1つの文章に複数個の『も』があるよ」と指摘されます。
しかしこの指摘がおかしいことは、明らかでしょう。

//list[][@<file>{sample3.md}：修正前]{
血も涙もない。
//}

//terminal{
$ textlint sample3.md

/Users/yourname/sample3.md
  1:4  error  一文に二回以上利用されている助詞 "も" がみつかりました。  japanese/no-doubled-joshi

✖ 1 problem (1 error, 0 warnings)

//}

『も』が複数個現れないように修正できますが、これはさすがにやりすぎです。
しないほうがいいでしょう。

//list[][@<file>{sample3.md}：修正後]{
@<del>{血も涙もない。}
@<b>{血と涙のどちらも欠いている。}
//}

//terminal{
$ textlint sample3.md   @<balloon>{何もエラーが出ない}
//}

このような過剰な指摘が起きたのは、Starterがデフォルトで用意したtextlint用の設定が、技術文章向けだからです。
textlintは、事前に設定されたルールに従って文章をチェックするツールです。
設定されたルールが小説向けであれば小説向けのチェックをし、技術文章向けであれば技術文章向けのチェックをします。

textlintの設定は、プロジェクトフォルダの直下にある「@<file>{.textlintrc}」というファイルで変更できます。
たとえば次のように変更すると、複数の『も』が登場してもエラーにならなくなります。

//list[][@<file>{.textlintrc}]{
{
  "filters": {
  }
, "rules": {
    "preset-japanese": false
  @<del>|, "preset-ja-technical-writing": true|
  @<b>|, "preset-ja-technical-writing": {|
      @<b>|"no-doubled-joshi": {|
        @<b>|"allow": ["も"]|
      @<b>|}|
    @<b>|}|
  , "preset-jtf-style": false
  , "preset-ja-spacing": false
  , "preset-ja-engineering-paper": false
  }
//}

「@<file>{.textlintrc}」についてこれ以上の解説はしません。
詳しく知りたい人は「textlint 使い方」でGoogle検索してください。

ここまでが、textlintについての一般的な説明でした。
次の項から、Starterでtextlintを使う方法を説明します。


=== Starterのプロジェクトでtextlintを使う

Starterのプロジェクトでtextlintを使うには、次のようにします。

 - (1) Node.jsとnpmコマンドをインストールする。
 - (2) textlintをインストールする。
 - (3) textlintで原稿をチェックする。

(1)と(2)は準備なので、プロジェクトごとに一度だけ行います。

それぞれ順番に説明します。


==== (1) Node.jsとnpmコマンドをインストール

textlintを実行するには、@<href>{https://nodejs.org/, Node.js}とnpmコマンドをインストールする必要があります。

 * Dockerを使っている場合は、Dockerイメージの中にNode.jsとnpmコマンドがインストール済みなので、何もする必要がありません。
 * Dockerを使っていない場合は、@<href>{https://nodejs.org/}にアクセスしてNode.jsをインストールしてください。
   npmコマンドも自動的にインストールされます。

//note[Node.jsのバージョンについて]{
インストールするNode.jsのバージョンは、「LTS」と書かれたほうを選ぶといいでしょう。
Current」と書かれたほうのバージョンでも動作しますが、こちらは上級者向けです。
//}

==== (2) textlintをインストール

次に、textlintとその関連ライブラリをインストールします。
StarterではそのためのRakeタスクが用意されているので、次のコマンドを実行してください。

//terminal[][textlintと関連ライブラリをインストール]{
$ @<userinput>{rake textlint:setup}         @<balloon>{Dockerを使わない場合}
$ @<userinput>{rake docker:textlint:setup}  @<balloon>{Dockerを使う場合}
//}

これでtextlintのインストールは完了しました。

==== (3) textlintで原稿をチェック

textlintを使って原稿の文章をチェックするには、「@<code>{rake textlint}」（または「@<code>{rake docker:textlint}」）を実行してください。

//terminal[][textlintで原稿の文章をチェックする（結果は省略）]{
$ @<userinput>{rake textlint}         @<balloon>{Dockerを使わない場合}
$ @<userinput>{rake docker:textlint}  @<balloon>{Dockerを使う場合}
//}

たくさんのエラーが出るので驚くでしょう。
指摘された点のすべてを修正する必要はありません。
自分で納得できたことだけを修正すればいいです。

ただし出力結果を見ると、ファイル名と行番号が原稿とは違うことに気づくはずです。
この理由を次の項で説明します。


=== Starterにおけるtextlint実行の仕組み

textlintは、Starterの原稿ファイル(@<file>{*.re})には対応していません。
そこでStarterでは、次のような仕組みでtextlintを実行します。

 - (1) 原稿ファイル(@<file>{*.re})をMarkdown形式のファイル(@<file>{*.md})に変換する。
 - (2) Markdown形式のファイルをtextlintでチェックする。

このような仕組みのため、textlintが報告するのはMarkdown形式のファイルにおける行番号であり、原稿ファイルの行番号ではありません。
よってtextlintの指摘事項を反映するには、出力された行番号をもとにMarkdownファイルを見て指摘内容を確認し、原稿ファイルに戻って修正するという手順になります。

これは理想的とは言い難いです。
解決方法は3つ考えられます。

 - (A) textlintを改造して、Starterの原稿ファイルを直接読んで解釈できるようにする。
 - (B) 原稿ファイルとMarkdownファイルの行番号が一致するように変換する。
 - (C) 原稿ファイルとMarkdownファイルとの行番号のマッピングデータを生成し、それを利用してtextlintの出力結果に含まれる行番号をMarkdownファイルの行番号から原稿ファイルの行番号に書き換える。

どれも手間のかかる作業になるので、将来も含めて対応はあまり期待しないでください。

もしもっといい方法を思いついた人がいたら、ぜひ教えてくださるようお願いします。


//note[Markdownへの変換は精度がよくない]{
StarterにおけるMarkdown形式への変換機能はtextlintで使うために実装したので、「textlintで使えればそれでいい」という割り切りをしています。
そのため、Markdown形式への変換は精度があまりよくありません。

「こう改善してほしい」と具体的に提案していただければ対応しますが、そもそもあまり力を入れた機能ではないことをご了承ください。
//}
