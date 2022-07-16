= チュートリアル

//abstract{
前の章では、RubyとTeXLiveのインストールを説明し、サンプルPDFファイルを生成しました。

この章では、自で書いた原稿ファイルからPDFファイルを生成する方法を説明します。

なおこの章は、RubyとTeXLiveのインストールが済んでいること、またサンプルのPDFファイルが生成できたことを前提にしています。
まだの人は前の章を見てください。
//}

#@#//makechaptitlepage[toc=on]



=={sec-terminology} 用語の説明

このあとの説明で使用する用語を紹介します。

: Starter
    Re:VIEW Starterのことです。
    「Re:VIEW Starter」はちょっと長いので、この文章では省略して「Starter」と呼んでいます。
: プロジェクトのzipファイル
    Re:VIEW StarterのWebサイトでプロジェクトを作ったときに、最後にダウンロードされるzipファイルのことです。
    単に「zipファイル」と呼ぶこともあります。
: @<file>{mybook.zip}
    説明で使用するプロジェクトのzipファイル名です。
    これはサンプルであり、実際にはたとえば「@<file>{samplebook.zip}」だったり「@<file>{brabra-book.zip}」だったりします。
: プロジェクトのフォルダ
    zipファイルを解凍したときにできるフォルダです。
    たとえばzipファイル名が「@<file>{mybook.zip}」なら、解凍してできるフォルダは「@<file>{mybook/}」なので、これがプロジェクトのフォルダになります。
: 「@<file>{mybook/}」フォルダ
    プロジェクトのフォルダのことです。
    フォルダ名はあくまでサンプルであり、プロジェクトごとに異なることに注意してください。
: 原稿ファイル
    原稿となるテキストファイルです。
    これをもとにPDFファイルが生成されます。
    原稿ファイルは拡張子が「@<file>{.re}」なので、「@<file>{*.re}ファイル」と呼ぶこともあります。
    なお文字コードは必ずUTF-8にしてください。
: @<file>{*.re}ファイル
    原稿ファイルのことです。
    拡張子が「@<file>{.re}」なので、こう呼ばれることがあります。
: 「@<file>{contents/}」フォルダ
    原稿ファイルが置かれているフォルダです。
    最近のRe:VIEW Starterでは、デフォルトで原稿ファイルを「@<file>{contents/}」フォルダに置くことになっています（以前はプロジェクトのフォルダ直下に置かれていました）。
: テキストエディタ
    テキストファイルを作成したり変更するためのアプリケーションのことです。
    単に「エディタ」と呼ぶこともあります。
    有名なものだと「Visual Studio Code」「Atom」「Emacs」「Vim」「サクラエディタ」「秀丸」「メモ帳」などがあります。
: エディタ
    テキストエディタのことです。
: コンパイル
    原稿ファイルからPDFファイルを生成することです。
    Re:VIEW StarterではPDFだけでなくHTMLやePubのファイルも生成できるので、どの形式を生成するかを明示するなら「PDFへコンパイルする」「ePubへコンパイルする」などと言います。


== フォルダとファイルの説明

プロジェクトの「@<file>{mybook.zip}」を解凍すると、数多くのファイルが作られます。
それらのうち、重要なものを選んで解説します。
すべてのファイルについての解説は@<chapref>{92-filelist}を参照してください。

#@# : @<file>{Gemfile}
#@#	@<code>{gem}コマンドが使用します。通常は気にしなくていいです。
#@# : @<file>{README.md}
#@#	プロジェクトの説明が書かれたファイルです。
#@#	ユーザが好きなように上書きすることを想定しています。
#@# : @<file>{Rakefile}
#@#	@<code>{rake}コマンドが使用します。
#@#	コマンドを追加する場合は、このファイルは変更せず、かわりに「@<file>{lib/tasks/*.rake}」を変更してください。
 : @<file>{catalog.yml}
	原稿ファイルが順番に並べられたファイルです。
	原稿ファイルを追加した・削除した場合は、このファイルも編集します。
#@# : @<file>{catalog.yml.orig}
#@#	Re:VIEWでのオリジナルファイルです。
 : @<file>{config-starter.yml}
	Starter独自の設定ファイルです。
	Starterでは「@<file>{cofnig.yml}」と「@<file>{cofnig-starter.yml}」の両方を使います。
 : @<file>{config.yml}
	Re:VIEWの設定ファイルです。
	Starterによりいくつか変更と拡張がされています。
#@# : @<file>{config.yml.orig}
#@#	Re:VIEWでのオリジナルファイルです。
 : @<file>{contents/}
	原稿ファイルを置くフォルダです@<fn>{fn-zuxns}。
 : @<file>{contents/*.re}
	原稿ファイルです。
	章(Chapter)ごとにファイルが分かれます。
#@# : @<file>{css/}
#@#	HTMLファイルで使うCSSファイルを置くフォルダです。
 : @<file>{images/}
	画像ファイルを置くフォルダです。
	この下に章(Chapter)ごとのサブフォルダを作ることもできます。
#@# : @<file>{layouts/layout.epub.erb}
#@#	原稿ファイルからePubファイルを生成するためのテンプレートです。
#@# : @<file>{layouts/layout.html5.erb}
#@#	原稿ファイルからHTMLファイルを生成するためのテンプレートです。
#@# : @<file>{layouts/layout.tex.erb}
#@#	原稿ファイルからLaTeXファイルを生成するためのテンプレートです。
#@# : @<file>{lib/hooks/beforetexcompile.rb}
#@#	LaTeXファイルをコンパイルする前に編集するスクリプトです。
#@# : @<file>{lib/ruby/*.rb}
#@#	StarterによるRe:VIEWの拡張を行うRubyスクリプトです。
#@# : @<file>{lib/ruby/mytasks.rake}
#@#	ユーザ独自のRakeコマンドを追加するためのファイルです。
#@# : @<file>{lib/ruby/review.rake}
#@#	Re:VIEWで用意されているRakeタスクのファイルです。
#@#	Starterによって変更や拡張がされています。
#@# : @<file>{lib/ruby/review.rake.orig}
#@#	Starterによって変更や拡張がされる前の、オリジナルのタスクファイルです。
#@# : @<file>{lib/ruby/starter.rake}
#@#	Starterが追加したRakeタスクが定義されたファイルです。
#@# : @<file>{locale.yml}
#@#	国際化用のファイルです。
#@#	たとえば「リスト1.1」を「プログラム1.1」に変更したい場合は、このファイルを変更します。
#@# : @<file>{mybook-epub/}
#@#	ePubファイルを生成するときの中間生成ファイルが置かれるフォルダです。
#@#	通常は気にする必要はありません。
 : @<file>{mybook-pdf/}
	PDFファイルを生成するときの中間生成ファイルが置かれるフォルダです。
	@<LaTeX>{}ファイルをデバッグするときに必要となりますが、通常は気にする必要はありません。
#@# : @<file>{mybook.epub}
#@#	生成されたePubファイルです。
#@#	ファイル名はプロジェクトによって異なります。
 : @<file>{mybook.pdf}
	生成されたPDFファイルです。
	ファイル名はプロジェクトによって異なります。
 : @<file>{review-ext.rb}
	Re:VIEWを拡張するためのファイルです。
	このファイルから「@<file>{lib/ruby/*.rb}」が読み込まれています。
 : @<file>{sty/}
	@<LaTeX>{}で使うスタイルファイルが置かれるフォルダです。
#@# : @<file>{sty/jumoline.sty}
#@#	@<LaTeX>{}で使うスタイルファイルのひとつです。
 : @<file>{sty/mycolophon.sty}
	奥付@<fn>{fn-7ypmf}の内容が書かれたスタイルファイルです。
	奥付を変更したい場合はこのファイルを編集します。
 : @<file>{sty/mystyle.sty}
	ユーザが独自に@<LaTeX>{}マクロを定義・上書きするためのファイルです。
	中身は空であり、ユーザが自由に追加して構いません。
 : @<file>{sty/mytextsize.sty}
	PDFにおける本文の高さと幅を定義したファイルです。
	@<LaTeX>{}では最初に本文の高さと幅を決める必要があるので、他のスタイルファイルから分離されてコンパイルの最初に読み込めるようになっています。
 : @<file>{sty/mytitlepage.sty}
	大扉@<fn>{fn-cq9ws}の内容が書かれたスタイルファイルです。
	大扉のデザインを変更したい場合はこのファイルを編集します。
 : @<file>{sty/starter*.sty}
	Starter独自のスタイルファイルです。
	ここに書かれた@<LaTeX>{}マクロを変更したい場合は、このファイルを変更するよりも「@<file>{sty/mystyle.sty}」に書いたほうがバージョンアップがしやすくなります。
#@# : @<file>{sty/starter-headline.sty}
#@#	章(Chapter)や節(Section)や項(Subsection)の@<LaTeX>{}マクロが定義されたファイルです。


//footnote[fn-zuxns][原稿ファイルを置くフォルダ名は「@<file>{config.yml}」の「@<code>|contentdir: contents|」で変更できます。]
//footnote[fn-7ypmf][@<em>{奥付}とは、本のタイトルや著者や出版社や版や刷などの情報が書かれたページのことです。通常は本のいちばん最後のページに置かれます。]
//footnote[fn-cq9ws][@<em>{大扉}とは、タイトルページのことです。表紙のことではありません。]


== 原稿の追加と変更

原稿の追加と変更の方法を説明します。

原稿の追加より変更のほうが簡単なので、変更する方法を先に説明します。


=== 既存の原稿ファイルを変更する

プロジェクトのフォルダには、サンプルとなる原稿ファイルが存在します。
まずはこれを変更してみましょう。

 - (1) まず、お好みのテキストエディタを使って「@<file>{mybook/contents/00-preface.re}」を開いてください。
 - (2) 次に、先頭の「@<code>{= はじめに}」の下に何か適当なテキストを追加して（例：@<list>{6f3fh}）、原稿ファイルを保存してください。
 - (3) 原稿ファイルを保存したら、コンパイル@<fn>{fn-r19pw}しましょう。
       MacならTerminal.app@<fn>{f90kk}、Windowsならコマンドプロンプトを開き、「@<code>{rake pdf}」（またはDockerを使っているなら「@<code>{rake docker:pdf}」）を実行してください。

//footnote[fn-r19pw][「コンパイル」とは、ここでは原稿ファイルからPDFファイル（またはHTMLやePub）を生成することです。このあとも使う用語なので覚えてください。また用語については@<secref>{sec-terminology}も参照してください。]

//list[6f3fh][原稿ファイルの内容]{
= はじめに

@<b>{見ろ、人がゴミのようだ！}       @<balloon>{追加}

...（以下省略）...
//}

//footnote[f90kk][Terminal.appは、ファインダで「アプリケーション」フォルダ > 「ユーティリティ」フォルダ > 「ターミナル」をダブルクリックすると起動できます。]

これで新しいPDFファイルが生成されるはずです。
生成された新しいPDFファイルを開き、さきほど追加した行が「はじめに」の章に表示されていることを確認してください。

//note[プロジェクトのフォルダに原稿ファイルがあるとコンパイルエラー]{

Starterのデフォルトでは、原稿ファイル(@<file>{*.re})を「@<file>{contents/}」フォルダに置くよう設定されています。
この場合、もし原稿ファイルがプロジェクトのフォルダ（たとえば「@<file>{mybook/}」の直下）にあると、コンパイル@<fn>{fn-zt1bb}できずエラーになります。

エラーになるのは、Starterの仕組みに起因します。
Starterではコンパイル時に、「@<file>{contents/}」に置かれた原稿ファイル（@<file>{*.re}）をプロジェクトフォルダの直下にコピーしてからコンパイルします）@<fn>{fn-g6oit}。
そのため、プロジェクトフォルダ直下に別の原稿ファイルがあるとコンパイル時に上書きしてしまう可能性があるため、あえてエラーにしているのです。

//footnote[fn-zt1bb][@<em>{コンパイル}とは、ここでは原稿ファイルからPDFファイルを生成することを指します。]
//footnote[fn-g6oit][Re:VIEW 2.5の仕様上、コンパイル時に原稿ファイルがプロジェクトフォルダの直下にないといけないため。]

//}

ここまでが、既存の原稿ファイルを変更する方法でした。
次に、新しい原稿ファイルを追加する方法を説明します。


=== 新しい原稿ファイルを追加する

新しい原稿ファイルを追加するには、次のようにします。

 - (1) 新しい原稿ファイルを作成する。
 - (2) 作成した原稿ファイルをプロジェクトに登録する。
 - (3) PDFファイルを生成し、原稿の内容が反映されることを確認する。

順番に説明しましょう。

===== (1) 新しい原稿ファイルを作成する

お好みのテキストエディタを使って、新しい原稿ファイル「@<file>{01-test.re}」を作成します。

このとき、次の点に注意してください。

 * 原稿ファイルの拡張子は「@<file>{.re}」にします。
 * 原稿ファイルの置き場所は「@<file>{contents/}」フォルダにします。
   つまりファイルパスは「@<file>{mybook/contents/01-test.re}」になります。
 * 原稿ファイルの文字コードは「UTF-8」にします。

新しい原稿ファイル「@<file>{contents/01-test.re}」の中身は、たとえば@<list>{wrmlp}のようにしてください。

//list[wrmlp][原稿ファイル「@<file>{contents/01-test.re}」]{
@<nop>{}= サンプル章タイトル

@<nop>{}//abstract{
概要概要概要
@<nop>{}//}

@<nop>{}== サンプル節タイトル
本文本文本文
//}

//note[原稿ファイルに番号をつけるべきか]{
この例では原稿ファイル名を「@<file>{01-test.re}」にしました。
しかしファイル名に「@<file>{01-}」のような番号は、必ずしもつける必要はありません（つけてもいいし、つけなくてもいい）。

ファイル名に番号をつけるのは、利点と欠点があります。

 * 利点は、MacのファインダやWindowsのエクスプローラで表示したときに、ファイルが章の順番に並ぶことです。
 * 欠点は、章の順番を入れ替えるときにファイル名の変更が必要なこと、またそれにより章ID@<fn>{fn-9yivn}が変わるのでその章や節を参照している箇所もすべて変更になることです。
   番号をつけていない場合は、「@<file>{catalog.yml}」での順番を入れ替えるだけで済み、参照箇所も修正する必要はありません。

//footnote[fn-9yivn][章IDについては@<secref>{03-syntax|subsec-chapterid}で説明します。]

自分の好きなほうを選んでください。
//}

===== (2) 原稿ファイルをプロジェクトに登録する

次に、作成した原稿ファイルをプロジェクトに登録しましょう。
プロジェクトのフォルダにある「@<file>{catalog.yml}」をテキストエディタで開き、@<list>{g9t1b}のように変更してください。
なお、このファイルでは「@<code>{#}」以降は行コメントであり読み飛ばされます。

//list[g9t1b][ファイル「@<file>{catalog.yml}」]{
PREDEF:
  - 00-preface.re

CHAPS:
  @<del>{- 01-install.re}   @<balloon>{この行を削除}
  @<b>{- 01-test.re}      @<balloon>{この行を追加}
  - 02-tutorial.re

APPENDIX:

POSTDEF:
  - 99-postface.re

##
## ■Tips
## ...（以下省略）...
//}

ファイルを変更したら、忘れずに保存してください。

これで、新しい原稿ファイルがプロジェクトに登録できました。

===== (3) PDFファイルを生成し、原稿の内容が反映されたか確認する

試しにPDFファイルを生成してみましょう。
MacならTerminal.app、Windowsならコマンドプロンプトを開き、次のコマンドを実行してください。

//terminal[][PDFファイルを生成する]{
$ @<userinput>{rake pdf}          @<balloon>{Dockerを使っていない場合}
$ @<userinput>{rake docker:pdf}   @<balloon>{Dockerを使っている場合}
//}

新しいPDFファイルが生成されるので、表示してみてください。
新しい原稿ファイルの章が追加されていれば成功です。


=== 「@<file>{catalog.yml}」の説明

「@<file>{catalog.yml}」の内容は次のような構造になっています。

 * 「@<code>{PREDEF:}」は「まえがき」を表します。
 * 「@<code>{CHAPS:}」は本文を表します。
 * 「@<code>{APPENDIX:}」は付録を表します。
 * 「@<code>{POSTDEF:}」は「あとがき」を表します。

//list[][ファイル「@<file>{catalog.yml}」]{
@<b>{PREDEF:}
  - 00-preface.re      @<balloon>{まえがきの章}

@<b>{CHAPS:}
  - 01-install.re      @<balloon>{本文の章}
  - 02-tutorial.re     @<balloon>{本文の章}
  - 03-syntax.re       @<balloon>{本文の章}

@<b>{APPENDIX:}
  - 92-filelist.re     @<balloon>{付録の章}

@<b>{POSTDEF:}
  - 99-postfix.re      @<balloon>{あとがきの章}
//}

また次のような点に注意してください。

 * まえがきや付録やあとがきは、なければ省略できます。
 * まえがきとあとがきには、章番号や節番号がつきません。
 * 目次はまえがきのあとに自動的につけられます@<fn>{fn-qyuwz}。
 * 大扉（タイトルページ）や奥付も自動的につけられます@<fn>{fn-fa6pt}。

//footnote[fn-qyuwz][目次をつけたくない場合は、「@<file>{config.yml}」に「@<code>{toc: false}」を設定してください。]
//footnote[fn-fa6pt][大扉をつけたくない場合は、「@<file>{config.yml}」に「@<code>{titlepage: false}」を設定してください。また奥付をつけたくない場合は「@<code>{colophon: false}」を設定してください。]

//note[YAML形式]{
「@<file>{catalog.yml}」の内容は、「YAML」という形式で書かれています。
YAMLについてはGoogle検索で調べてください。
ここでは3点だけ注意点を紹介します。

  * タブ文字を使わないこと。
  * 「@<code>{-}」のあとに半角空白をつけること。
  * 「@<code>{#}」以降は行コメントとして読み飛ばされる。

//}


==={subsec-compileerror} コンパイルエラーになったら

PDFファイルの生成がエラーになったら、以下の点を確認してください。

 * インライン命令がきちんと閉じているか
 * ブロック命令の引数が足りているか、多すぎないか
 * 「@<code>|//}|」が足りてないか、または多すぎないか
 * 「@<code>|@@<nop>{}<fn>{}|」や「@<code>|@@<nop>{}<img>{}|」や「@<code>|@@<nop>{}<table>{}|」のラベルが合っているか
 * 「@<code>|@@<nop>{}<chapref>{}|」で指定した章IDが合っているか
 * 「@<code>|@@<nop>{}<secref>{}|」で指定した節や項が存在するか
 * 脚注の中で「@<code>{]}」を「@<code>{\]}」とエスケープしているか
 * 「@<code>|//image|」で指定した画像ファイルが存在するか
 * 原稿ファイル名を間違っていないか
 * 原稿ファイルの文字コードがUTF-8になっているか
 * 索引に何も登録してないのに索引機能をオンにしていないか（詳細は@<secref>{03-syntax|sec-term}を参照）

詳しくは@<secref>{05-faq|sec-compileerror}を見てください。

それでもエラーになる場合は、中間ファイルを削除してみましょう。
たとえばプロジェクト名が「@<file>{mybook}」だったら、「@<file>{mybook-pdf}」というフォルダが作られているはずです。
これを削除してから、コンパイルし直してみてください。

//terminal[][中間ファイルを削除してコンパイルし直す]{
$ @<userinput>{rm -rf mybook-pdf}       @<balloon>{中間ファイルを削除して、}
$ @<userinput>{rake pdf}                @<balloon>{コンパイルし直す}
//}

それでもダメなら、「@<hlink>{https://twitter.com/search?q=%23reviewstarter, #reviewstarter}」というタグでツイートしていただければ、相談に乗ります。


=== 文章をチェックする

Starterでは、「textlint」というツールを使って原稿の文章をチェックできます。

たとえば「Starterを使うときれいなPDFを作成@<bou>{することが}できます」という文章は、「Starterを使うときれいなPDFを作成@<bou>{できます}」のように簡潔にできます。
このような指摘を行ってくれるのがtextlintです。

textlintをStarterのプロジェクトで使う方法は、@<secref>{06-bestpractice|sec-textlint}で解説しています。
今はまだtextlintを使う必要はありませんが、Starterに慣れてきたら使ってみてください。



=={sec-basicsyntax} 基本的な記法

原稿ファイルは、ある決まった書き方（記法）に従って記述します。
たとえば、次のような記法があります。

 * 章(Chapter)は「@<code>{= }」で始め、節(Section)は「@<code>{== }」で始める。
 * 箇条書きは「@<code>{ * }」で始める。
 * プログラムコードは「@<code>|//list{...//}|」で囲う。
 * 強調は「@<code>|@@<nop>{}<strong>{...}|」または「@<code>|@@<nop>{}<B>{...}|」で囲う。

ここでは記法のうち基本的なものを説明します。
詳しいことは@<chapref>{03-syntax}で説明します。


=== コメント

行コメントは「@<code>{#@#}」で、また範囲コメントは「@<code>{#@+++}」と「@<code>{#@---}」で表します。
どちらも行の先頭から始まってないと、コメントとして認識されません。

//list[][サンプル][]{
本文1。
@<b>|#@#|本文2。
本文3。

@<b>|#@+++|
本文4。
@<b>|#@---|
本文5。
//}

//sampleoutputbegin[表示結果]

本文1。
#@#本文2。
本文3。

#@+++
本文4。
#@---
本文5。

//sampleoutputend



詳しくは@<secref>{03-syntax|sec-comment}を参照してください。


=== 段落と改行

空行があると、新しい段落になります。
改行は無視されるか、または半角空白扱いになります。
通常は1文ごとに改行して書きます。

//list[][サンプル][]{
言葉を慎みたまえ。君はラピュタ王の前にいるのだ。

これから王国の復活を祝って、諸君にラピュタの力を見せてやろうと思ってね。
見せてあげよう、ラピュタの雷を！

旧約聖書にあるソドムとゴモラを滅ぼした天の火だよ。
ラーマヤーナではインドラの矢とも伝えているがね。
//}

//sampleoutputbegin[表示結果]

言葉を慎みたまえ。君はラピュタ王の前にいるのだ。

これから王国の復活を祝って、諸君にラピュタの力を見せてやろうと思ってね。
見せてあげよう、ラピュタの雷を！

旧約聖書にあるソドムとゴモラを滅ぼした天の火だよ。
ラーマヤーナではインドラの矢とも伝えているがね。

//sampleoutputend



詳しくは@<secref>{03-syntax|sec-paragraph}を参照してください。


=== 見出し

章(Chapter)や節(Section)といった見出しは、「@<code>{= }」や「@<code>{== }」で始めます。
また章には概要を書くといいでしょう。

//list[][サンプル][]{
@<b>|=| 章(Chapter)見出し

@<b>|//abstract{|
章の概要。
@<b>|//}|

@<b>|==| 節(Section)見出し

@<b>|===| 項(Subsection)見出し

@<b>|====| 目(Subsubsection)見出し

@<b>|=====| 段(Paragraph)見出し

@<b>|======| 小段(Subparagraph)見出し
//}



Starterでは、章(Chapter)は1ファイルにつき1つだけにしてください。
1つのファイルに複数の章(Chapter)を入れないでください。

見出しについての詳細は@<secref>{03-syntax|sec-heading}を参照してください。


=== 箇条書き

番号なし箇条書きは「@<code>{ * }」で始めます（先頭に半角空白が必要）。

//needvspace[latex][6zw]
//list[][サンプル][]{
@<b>| * |箇条書き1
@<b>| * |箇条書き2
@<b>| ** |入れ子の箇条書き
@<b>| *** |入れ子の入れ子
//}

//sampleoutputbegin[表示結果]

 * 箇条書き1
 * 箇条書き2
 ** 入れ子の箇条書き
 *** 入れ子の入れ子

//sampleoutputend



番号つき箇条書きは「@<code>{ 1. }」のように始める方法と、「@<code>{ - A. }」のように始める方法があります（どちらも先頭に半角空白が必要）。
後者では番号の自動採番はされず、指定された文字列がそのまま出力されます。

//list[][サンプル][]{
 @<b>|1.| この記法では数字しか指定できず、
 @<b>|2.| また入れ子にもできない。

 @<b>|- (A)| この記法だと、英数字だけでなく
 @<b>|- (B)| 任意の文字列が使える
 @<b>|-- (B-1)| 入れ子もできるし、
 @<b>|***| 番号なし箇条書きも含められる
//}

//sampleoutputbegin[表示結果]

 1. この記法では数字しか指定できず、
 2. また入れ子にもできない。

 - (A) この記法だと、英数字だけでなく
 - (B) 任意の文字列が使える
 -- (B-1) 入れ子もできるし、
 *** 番号なし箇条書きも含められる

//sampleoutputend



箇条書きの詳細は@<secref>{03-syntax|sec-list}を参照してください。


=== 用語リスト

用語リスト（HTMLでいうところの「@<code>{<dl><dt><dd>}」）は、「@<code>{ : }」で始めて@<fn>{axm3t}、次の行からインデントします@<fn>{diwmv}。
//footnote[axm3t][先頭の半角空白は入れるようにしましょう。過去との互換性のため、先頭の半角空白がなくても動作しますが、箇条書きとの整合性のために半角空白を入れることを勧めます。]
//footnote[diwmv][説明文のインデントは、半角空白でもタブ文字でもいいです。]

//list[][サンプル][]{
@<b>| : |用語1
    説明文。
    説明文。
@<b>| : |用語2
    説明文。
    説明文。
//}

//sampleoutputbegin[表示結果]

 : 用語1
    説明文。
    説明文。
 : 用語2
    説明文。
    説明文。

//sampleoutputend



詳しくは@<secref>{03-syntax|sec-termlist}を参照してください。


=== 太字と強調

太字は「@<code>|@@<nop>{}<b>{...}|」で囲み、強調は「@<code>|@@<nop>{}<B>{...}|」または「@<code>|@@<nop>{}<strong>{...}|」で囲みます。
強調は、太字になるだけでなくフォントがゴシック体になります。

//list[][サンプル][]{
テキスト@<b>|@@<nop>$$<b>{|テキスト@<b>|}|テキスト。

テキスト@<b>|@@<nop>$$<B>{|テキスト@<b>|}|テキスト。
//}

//sampleoutputbegin[表示結果]

テキスト@<b>{テキスト}テキスト。

テキスト@<B>{テキスト}テキスト。

//sampleoutputend



日本語の文章では、強調するときは太字のゴシック体にするのがよいとされています。
なので強調には「@<code>|@@<nop>{}<B>{...}|」または「@<code>|@@<nop>{}<strong>{...}|」を使い、「@<code>|@@<nop>{}<b>{...}|」は使わないでください。

強調や太字などテキストの装飾についての詳細は@<secref>{03-syntax|sec-decoration}を参照してください。

//note[インライン命令]{
「@<code>|@@<nop>{}<B>{...}|」のような記法は@<em>{インライン命令}と呼ばれます。
インライン命令は入れ子にできますが（Starterによる拡張）、複数行を含めることはできません。
詳細は@<secref>{03-syntax|subsec-inlinecmd}を見てください。

#@#インライン命令は入れ子にできます（Starterによる拡張）。
#@#たとえば「@<code>|@@<nop>{}<code>{fn(@@<nop>{}<b>{@@<nop>{}<i>{arg}})}|」と書くと「@<code>{fn(@<b>{@<i>{arg}})}」のように表示されます。
#@#
#@#またインライン命令は必ず1行に記述します。
#@#複数行を含めることはできません。
#@#
#@#//list[][このような書き方はできない]{
#@#@<B>|@@<nop>{}<B>{|テキスト
#@#テキスト
#@#テキスト@<B>|}|
#@#//}

//}


=== 等幅フォント

文字列を等幅フォントで表示するには、「@<code>|@@<nop>{}<tt>{...}|」を使います。
ただしこれを使うことはお勧めしません。
それよりも、それぞれの用途に合ったインライン命令を使いましょう。

 * プログラムコードやコマンド文字列を表すには「@<code>|@@<nop>{}<code>{...}|」を使ってください。
   違いの分かりやすい例でいうと、たとえば「@<code>|@@<nop>{}<tt>{'`}|」は「@<tt>{'`}」と表示され、「@<code>|@@<nop>{}<code>{'`}|」は「@<code>{'`}」と表示されます@<fn>{fn-j2dx9}。
 * ファイル名を表すには「@<code>|@@<nop>{}<file>{...}|」を使ってください。
   等幅フォントではなくゴシック体で表示されます。

//footnote[fn-j2dx9][使用する等幅フォントによっては同じように表示されます。]


=== プログラムリスト

プログラムリストは「@<code>|//list[ラベル][説明文]{ ... //}|」で囲みます。

  * ラベルは、他と重複しない文字列にします。
  * 「@<code>|@@<nop>{}<list>{ラベル名}|」のようにプログラムリストを参照できます。
  * 説明文に「@<code>{]}」を含める場合は、「@<code>{\]}」のようにエスケープします。

//list[][サンプル][]{
サンプルコードを@<b>|@@<nop>$$<list>{fib1}|に示します。

@<b>|//list[fib1][フィボナッチ数列]|{
def fib(n):
    return n if n <= 1 else fib(n-1) + fib(n-2)
@<b>|//}|
//}

//sampleoutputbegin[表示結果]

サンプルコードを@<list>{fib1}に示します。

//list[fib1][フィボナッチ数列]{
def fib(n):
    return n if n <= 1 else fib(n-1) + fib(n-2)
//}

//sampleoutputend



第1引数と第2引数のどちらも、省略できます。
たとえば第1引数だけを省略するには「@<code>|//list[][説明]{|」のようにします。
両方とも省略するには「@<code>|//list[][]{|」または「@<code>|//list{|」のようにします。

またプログラムリストの中で、インライン命令が使えます@<fn>{0hz8w}。
たとえば次の例では、追加した箇所を「@<code>|@@<nop>{}<ins>{...}|」で、削除した箇所を「@<code>|@@<nop>{}<del>{...}|」で表しています。
//footnote[0hz8w][プログラムリストの中では、「@<code>|@@<nop>{}<B>{}|」（強調）ではなく「@<code>|@@<nop>{}<b>{}|」（太字）を使ってください。なぜなら、「@<code>|@@<nop>{}<B>{}|」を使うとフォントが等幅フォントからゴシック体に変更されてしまい、表示がずれてしまうからです。]

//list[][サンプル][]{
/@<nop>$$/list{
function fib(n) {
  @<b>{@@<nop>$$<del>|}if (n <= 1) { return n; }@<b>{|}
  @<b>{@@<nop>$$<del>|}else        { return fib(n-1) + fib(n-2); }@<b>{|}
  @<b>{@@<nop>$$<ins>|}return n <= 1 ? n : fib(n-1) + fib(n-2);@<b>{|}
}
/@<nop>$$/}
//}

//sampleoutputbegin[表示結果]

//list{
function fib(n) {
  @<del>|if (n <= 1) { return n; }|
  @<del>|else        { return fib(n-1) + fib(n-2); }|
  @<ins>|return n <= 1 ? n : fib(n-1) + fib(n-2);|
}
//}

//sampleoutputend



その他、行番号をつけたり外部ファイルを読み込んだりできます。
プログラムコードについての詳細は@<secref>{03-syntax|sec-program}を参照してください。

また出力結果を表す「@<code>|//output|」という命令もあります。
詳細は@<secref>{03-syntax|subsec-output}を参照してください。

//note[ブロック命令]{
「@<code>|//list{ ... //}|」のような形式の命令を、@<B>{ブロック命令}といいます。
ブロック命令は入れ子にできますが（Starterによる拡張）、できないものもあります。
詳細は@<secref>{03-syntax|subsec-blockcmd}を見てください。
//}


=== ターミナル画面

ターミナル（端末）の画面は、「@<code>|//terminal{ ... //}|」を使います。
次の例では、引数にラベル名と説明文字列を指定します。
また「@<code>|@@<nop>{}<userinput>{...}|」はユーザ入力を表します。

//list[][サンプル][]{
@<b>|//terminal[term-1][PDFを生成]{|
$ @@<nop>$$<userinput>{rake pdf}          @@<nop>$$<balloon>{Dockerを使わない場合}
$ @@<nop>$$<userinput>{rake docker:pdf}   @@<nop>$$<balloon>{Dockerを使う場合}
@<b>|//}|
//}

//sampleoutputbegin[表示結果]

//terminal[term-1][PDFを生成]{
$ @<userinput>{rake pdf}          @<balloon>{Dockerを使わない場合}
$ @<userinput>{rake docker:pdf}   @<balloon>{Dockerを使う場合}
//}

//sampleoutputend



ラベル名を指定していれば、プログラムリストと同じように「@<code>|@@<nop>{}<list>{ラベル名}|」で参照できます。
またラベル名と説明文字列はどちらも省略可能です。
どちらも省略すると「@<code>|//terminal{ ... //}|」のように書けます。

詳しくは@<secref>{03-syntax|sec-terminal}を参照してください。


=== 脚注

脚注は、脚注をつけたい箇所に「@<code>|@@<nop>{}<fn>{ラベル}|」をつけ、段落の終わりに「@<code>|//footnote[ラベル][脚注文]|」を書きます。
脚注文の中では「@<code>|]|」を「@<code>|\]|」と書いてください。

//needvspace[latex][6zw]
//list[][サンプル][]{
本文テキスト@<b>|@@<nop>$$<fn>{fn-12}|。

@<b>|//footnote[fn-12][このように脚注文を書きます。]|
//}

//sampleoutputbegin[表示結果]

本文テキスト@<fn>{fn-12}。

//footnote[fn-12][このように脚注文を書きます。]

//sampleoutputend




=== 図

図を入れるには、「@<code>|//image[画像ファイル名][説明文][オプション]|」を使います。

 * 画像ファイルは「@<file>{images/}」フォルダに置きます。
 * 画像ファイルの拡張子は指定しません。
 * ラベルを使って「@<code>|@@<nop>{}<img>{ラベル}|」のように参照できます。

//list[][サンプル][]{
@<b>|//image[tw-icon][サンプル画像][scale=0.3]|
//}

//sampleoutputbegin[表示結果]

//image[tw-icon][サンプル画像][scale=0.3]

//sampleoutputend



Starterでは、画像を入れる位置を指定したり、画像の周りに枠線をつけたりできます。
詳しくは@<secref>{03-syntax|sec-image}を参照してください。


=== ノート

Starterでは、本文を補足する文章を「ノート」という囲み枠で表します。

//list[][サンプル][]{
@<b>|//note|[ムスカの苦手なもの]{
実は、ムスカには「虫が苦手」という公式な設定があります。
有名な『読める、読めるぞ！』のシーンでムスカが顔の周りに群がるハエを追い払うのは、邪魔だったからだけでなく、虫が苦手だったからです。
/@<nop>$$/}
//}

//sampleoutputbegin[表示結果]

//note[ムスカの苦手なもの]{
実は、ムスカには「虫が苦手」という公式な設定があります。
有名な『読める、読めるぞ！』のシーンでムスカが顔の周りに群がるハエを追い払うのは、邪魔だったからだけでなく、虫が苦手だったからです。
//}

//sampleoutputend



ノート本文には箇条書きやプログラムコードを埋め込めます。
詳しくは@<secref>{03-syntax|sec-note}を参照してください。

また、補足情報や注意喚起や警告を表す囲み枠もあります。
詳しくは@<secref>{03-syntax|subsec-miniblock}を参照してください。

//list[][サンプル][]{
@<b>|//info|[解決のヒント]{
本製品を手に取り、古くから伝わるおまじないを唱えてみましょう。
すると天空の城への門が開きます。
/@<nop>$$/}

@<b>|//caution|[使用上の注意]{
本製品を石版にかざすと、天空の城から雷が発射されます。
周りに人がいないことを確かめてから使用してください。
/@<nop>$$/}

@<b>|//warning|[重大な警告]{
本製品を持ったまま滅びの呪文を唱えると、天空の城は自動的に崩壊します。
大変危険ですので、決して唱えないでください。
/@<nop>$$/}
//}

//sampleoutputbegin[表示結果]

//info[解決のヒント]{
本製品を手に取り、古くから伝わるおまじないを唱えてみましょう。
すると天空の城への門が開きます。
//}

//caution[使用上の注意]{
本製品を石版にかざすと、天空の城から雷が発射されます。
周りに人がいないことを確かめてから使用してください。
//}

//warning[重大な警告]{
本製品を持ったまま滅びの呪文を唱えると、天空の城は自動的に崩壊します。
大変危険ですので、決して唱えないでください。
//}

//sampleoutputend




=== 表

表は、次のように書きます。

 * 「@<code>|//table[ラベル][説明文]{ ... //}|」で囲みます。
 * セルは1つ以上のタブで区切ります。
 * ヘッダの区切りは「@<code>{-}」または「@<code>{=}」を12個以上並べます。
 * ラベルを使って「@<code>|@@<nop>{}<table>{ラベル}|」のように参照できます。

//list[][サンプル][]{
@<b>|//table[tbl-31][サンプル表]{|
Name	Val1	Val2
@<b>|--------------------|
AA	12	34
BB	56	78
@<b>|//}|
//}

//sampleoutputbegin[表示結果]

//table[tbl-31][サンプル表]{
Name	Val1	Val2
--------------------
AA	12	34
BB	56	78
//}

//sampleoutputend



PDFではセルの右寄せ・左寄せ・中央揃えができます。
またCSVファイルからデータを読み込めます。
詳しくは@<secref>{03-syntax|sec-table}を参照してください。


=== 数式

@<LaTeX>{}の書き方を使って数式を記述できます。

//list[][サンプル][]{
@<b>|//texequation[euler][オイラーの公式]{|
e^{i\theta} = \sin{\theta} + i\cos{\theta}
@<b>|//}|

@<b>|@@<nop>$$<m>$\theta = \pi$|のときは@<b>|@@<nop>$$<m>$e^{i\pi} = -1$|となり、これはオイラーの等式と呼ばれます。
//}

//sampleoutputbegin[表示結果]

//texequation[euler][オイラーの公式]{
e^{i\theta} = \sin{\theta} + i\cos{\theta}
//}

@<m>$\theta = \pi$のときは@<m>$e^{i\pi} = -1$となり、これはオイラーの等式と呼ばれます。

//sampleoutputend



詳しくは@<secref>{03-syntax|sec-mathexpr}を参照してください。


=== 会話形式

Starterでは、会話形式も書けます。
会話形式は、アイコン画像を使う方法と使わない方法があります。

//list[][サンプル][]{
@<b>|//talklist{|
@<b>|//talk[avatar-b]|{
あの方は何も盗らなかったわ。私のために闘ってくださったんです。
/@<nop>$$/}
@<b>|//talk[avatar-g]|{
いや、ヤツはとんでもないものを盗んでいきました……
あなたの心です。
/@<nop>$$/}
@<b>|//}|
//}

//sampleoutputbegin[表示結果]

//talklist{
//talk[avatar-b]{
あの方は何も盗らなかったわ。私のために闘ってくださったんです。
//}
//talk[avatar-g]{
いや、ヤツはとんでもないものを盗んでいきました……
あなたの心です。
//}
//}

//sampleoutputend



//list[][サンプル][]{
@<b>|//talklist{|
@<b>|//talk[][クラリス]|{
あの方は何も盗らなかったわ。私のために闘ってくださったんです。
/@<nop>$$/}
@<b>|//talk[][銭形警部]|{
いや、ヤツはとんでもないものを盗んでいきました……
あなたの心です。
/@<nop>$$/}
@<b>|//}|
//}

//sampleoutputbegin[表示結果]

//talklist{
//talk[][クラリス]{
あの方は何も盗らなかったわ。私のために闘ってくださったんです。
//}
//talk[][銭形警部]{
いや、ヤツはとんでもないものを盗んでいきました……
あなたの心です。
//}
//}

//sampleoutputend



詳しくは@<secref>{03-syntax|sec-talk}を参照してください。

//note[白黒印刷でも判別できる画像を使う]{
このサンプルでは、色が違うだけのアイコン画像を使っています。
そのせいで、白黒印刷すると誰が誰だか判別できなくなります。
もし白黒印刷するなら、色に頼らず判別できるようなアイコン画像を使いましょう。
//}

//needvspace[latex][4zw]
//note[会話形式にしても分かりやすくはならない]{
@<B>{会話形式を採用しても、説明が分かりやすくなるとは限りません。}
会話形式にすると楽しさや親しみやすさを向上できますが、それは説明の分かりやすさとは違います。

会話形式だけど説明がよく分からない本はたくさんあります。
先生役や先輩役のキャラクターが何かの説明をして、それが読者には伝わっていないのに、生徒役や後輩役のキャラクターが「なるほど！」とか「そういうことか！」と言っているような本、見たことありませんか？
先生や先輩の説明を苦もなく理解できるほどの優秀な生徒や後輩は、本の中にしかいません。

同様のことはマンガ形式にもいえます。
分かりやすく説明したいなら分かりやすく説明する技術を学ぶべきであり、マンガにしたり会話形式にすることではありません。

たとえば、『@<href>{https://www.c-r.com/book/detail/1108, わかばちゃんと学ぶ　Git使い方入門}』が分かりやすいのはマンガだからではなく、分かりやすく説明する技術を作者の湊川先生が身につけているからです@<fn>{fn-pwgc3}。
@<B>{分かりやすく説明できる人がたまたまマンガで説明しているから分かりやすいのであって、マンガや会話形式にすれば何でも分かりやすくなるわけではありません。}
ここを履き違えないようにしましょう。
//}

//footnote[fn-pwgc3][@<href>{https://www.youtube.com/watch?v=t2eiA2ylNW0, 湊川先生による文章改善の発表動画}を見ると、分かりやすく説明する技術を先生自身が持っていることがよく分かります。]


=== 用語、索引

用語は「@<code>|@@<nop>{}<term>{用語名((よみかた))}|」のように書くとゴシック体で表示され、かつ本の巻末の索引に載ります。
ゴシック体にするけど索引に載せないなら「@<code>|@@<nop>{}<termnoidx>{用語名}|」、ゴシック体にせず索引に載せるなら「@<code>|@@<nop>{}<idx>{用語名((よみかた))}|」、索引に載せるけど表示はしないなら「@<code>|@@<nop>{}<hidx>{用語名((よみかた))}|」とします。

索引は、デフォルトではオフになっています。
索引を使うには、@<file>{config.yml}で「@<code>|makeindex: true|」を設定してください（370行目ぐらいにあります）。
索引は@<LaTeX>{}の機能を使うので、今のところPDFでしかサポートされません。
また索引機能をオンにすると@<LaTeX>{}のコンパイル回数が増えるので、コンパイル時間が延びます。
原稿執筆中はオフにし、完成間近になったらオンにするといいでしょう。

なお索引に登録する用語が何もない場合は、索引を使おうとするとコンパイルエラーになります。
本文に1つでも「@<code>|@@<nop>{}<term>{}|」や「@<code>|@@<nop>{}<idx>{}|」を入れてから索引機能を有効化してください。

Starterでは索引語の親子関係を指定したり、ページ番号のかわりに「〜を見よ」と指定できます。
詳しくは@<secref>{03-syntax|sec-term}を参照してください。


=== 単語展開

キーを単語に展開できます。
たとえば辞書ファイル「@<file>{data/words.txt}」の中に、キー「apple」に対応した単語「アップル」が登録されているとします。
すると、本文に「@<code>|@@<nop>{}<w>{apple}|」と書くと「アップル」に展開されます。
「@<code>|@@<nop>{}<wb>{apple}|」なら展開して太字になります。
また「@<code>|@@<nop>{}<W>{apple}|」なら展開して強調表示します。
#@#「@<code>|@@<nop>{}<wb>{apple}|」なら展開して太字になります（「@<code>|@@<nop>{}<b>{@@<nop>{}<w>{apple}}|」と同じです）。
#@#また「@<code>|@@<nop>{}<W>{apple}|」なら展開して強調表示します（「@<code>|@@<nop>{}<B>{@@<nop>{}<w>{apple}}|」と同じです）。

この機能は、表記が定まっていない単語に使うと便利です。
たとえば「Apple」と「アップル」のどちらの表記にするか悩んでるなら、本文には `@<w>{apple}` と書いておけば、あとから辞書の中身を変えるだけでどちらの表記にも対応できます。

詳しくは@<secref>{03-syntax|sec-words}を参照してください。



=={sec-pdftype} 印刷用PDFと電子用PDF

Starterでは、印刷用と電子用とを切り替えてPDFファイルを生成できます。
両者の違いはあとで説明するとして、まず印刷用と電子用のPDFファイルを生成する方法を説明します。


=== 印刷用と電子用を切り替えてPDFを生成する

Starterでは、印刷用と電子用とを切り替えてPDFを生成できます（デフォルトは印刷用）。
具体的には次のどれかを行います@<fn>{fn-0xkt4}。

 * 「@<code>|rake pdf @<b>{t=pbook}|」を実行すると印刷用PDFが生成され、「@<code>|rake pdf @<b>{t=ebook}|」@<fn>{fn-3pf5z}を実行すると電子用PDFが生成される。
 * 環境変数「@<code>{$STARTER_TARGET}」を「@<code>|pbook|」に設定してから「`rake pdf`」を実行すると印刷用PDFが生成され、「@<code>|ebook|」に設定してから実行すると電子用PDFが生成される。
 * 「@<file>{config-starter.yml}」に設定項目「@<code>{target:}」があるので、これを「@<code>{pbook}」（印刷用）または「@<code>{ebook}」（電子用）に設定する。

//footnote[fn-0xkt4][強制力はこの順序であり、設定ファイルより環境変数のほうが、また環境変数より`rake`コマンドのオプションのほうが優先されます。]
//footnote[fn-3pf5z][「@<code>{pbook}」は「printing book」、「@<code>{ebook}」は「electronic book」を表します。]

//terminal[][macOSやLinuxの場合@<fn>{fn-3pf5z}]{
$ @<userinput>{rake pdf @<b>{t=pbook}}    @<balloon>{印刷用PDFを生成}
$ @<userinput>{rake pdf @<b>{t=ebook}}    @<balloon>{電子用PDFを生成}
## または
$ @<userinput>{@<b>{export STARTER_TARGET=pbook}}  @<balloon>{印刷用に設定}
$ @<userinput>{rake pdf}          @<balloon>{またはDockerを使うなら rake docker:pdf}
$ @<userinput>{@<b>{export STARTER_TARGET=ebook}}  @<balloon>{電子用に設定}
$ @<userinput>{rake pdf}          @<balloon>{またはDockerを使うなら rake docker:pdf}
//}

Windowsの場合は、「@<code>{set STARTER_TARGET=pbook}」や「@<code>{set STARTER_TARGET=ebook}」を使って環境変数を設定してください。

環境変数を未設定に戻すには、次のようにします。

//terminal[][macOSやLinuxの場合]{
$ @<userinput>{@<b>{unset STARTER_TARGET}}    @<balloon>{環境変数を未設定に戻す}
//}


=== 印刷用PDFと電子用PDFの違い

印刷用PDFと電子用PDFには、次のような違いがあります。

 : カラー
	印刷用では、カラーは使われず白黒になります（画像は除く）。@<br>{}
	電子用では、カラーが使われます@<fn>{fn-8w0hm}。
 : 左右の余白幅
	印刷用では、左右の余白幅が異なります。
	具体的には、見開きにおいて内側の余白を約2cm、外側の余白を約1.5cmにしています@<fn>{fn-yuyf5}。
	これは見開きでの読みやすさを確保したうえで本文幅をできるだけ広げるための工夫です。@<br>{}
	電子用では見開きを考慮する必要がないので、左右の余白幅は同じに設定されます。
 : ノンブル
	印刷用には自動的にノンブルがつき、電子用にはつきません。
	「ノンブル」とはすべてのページにつけられる通し番号であり、印刷所に入稿するときに必要です。
	ノンブルについての詳細は@<secref>{05-faq|sec-nombre}を参照してください。
 : 表紙
	印刷用では、表紙がつきません。
	なぜなら、表紙のPDFファイルは本文とは別にして印刷所に入稿するからです。@<br>{}
	電子用では、（設定されていれば）表紙がつきます@<fn>{fn-yybgl}。

//footnote[fn-8w0hm][カラーの設定は「@<file>{sty/starter-color.sty}」を見てください。変更する場合はこのファイルではなく「@<file>{sty/mystyle.sty}」に書くといいでしょう。]
//footnote[fn-yuyf5][余白幅は初期設定によって多少の違いがあります。設定の詳細は「@<file>{sty/mytextsize.sty}」を見てください。]
//footnote[fn-yybgl][表紙のつけ方は@<secref>{04-customize|subsec-coverpdf}を見てください。]



=={sec-preview} 高速プレビュー

ページ数が多くなると、PDFファイルへのコンパイルに時間がかかるようになり、執筆に支障が出ます。

ここでは高速にプレビューするための機能を紹介します。


=== 指定した章だけをコンパイルする

Starterでは、指定した章(Chapter)だけを@<LaTeX>{}でコンパイルできます。
これは章の数が多い場合や、著者が多数いる合同誌の場合にはとても効果的です。
具体的には次のようにします。

 * 「@<code>|rake pdf @<b>{c=03-syntax}|」のようにすると、「@<file>{03-syntax.re}」だけをコンパイルします。
 * または環境変数「@<code>|$STARTER_CHAPTER|」を設定する方法でも、章を指定できます。

//terminal[][例：03-syntax-faq.reだけをコンパイルする]{
$ @<userinput>{@<b>{rake pdf c=03-syntax}}   @<balloon>{「.re」はつけない}
### または
$ @<userinput>{@<b>{export STARTER_CHAPTER=03-syntax}}   @<balloon>{「.re」はつけない}
$ @<userinput>{rake pdf}   @<balloon>{Dockerを使っているなら rake docker:pdf}
//}

コンパイルする章を指定したとき、Starterは次のような動作になります。

 * 他の章は無視されます。
 * 表紙や、目次や、大扉や、奥付も無視されます。
 * @<LaTeX>{}のコンパイル回数が1回だけになります（コンパイル時間を短縮するため）。

なお「@<code>{$STARTER_CHAPTER}」を設定した場合、全体をコンパイルするときにはリセットしてください。

//terminal[][全体をコンパイルする]{
$ @<userinput>{@<b>{unset STARTER_CHAPTER}}    @<balloon>{「$」はつけないことに注意}
//}


=== コンパイル回数を1回だけに制限する

Re:VIEWおよびStarterでは、@<LaTeX>{}のコンパイルが最大で3回行われます@<fn>{mb3pa}。

//footnote[mb3pa][索引があると、コンパイル回数がもう1回増えます。]

 * 1回目のコンパイルで章や節のページ番号が分かる。
 * 2回目のコンパイルで目次が作成される。
 * もし2回目のコンパイルでページ番号が変わると、3回目のコンパイルが行われる。

しかし、ページ番号が合ってなくてもいいからとにかく仕上がりを確認したい場面はよくあり、そんなときは3回もコンパイルされるのは時間の無駄です。

そこでStarterでは、@<LaTeX>{}のコンパイル回数を制限する機能を用意しました。

 * 「@<code>|rake pdf @<b>{n=1}|」のようにすると、@<LaTeX>{}のコンパイルが1回しか行われません。
 * または環境変数「@<code>|$STARTER_COMPILETIMES|」を「@<code>|1|」に設定する方法でも、同じように制限できます。

//terminal[][@<LaTeX>{}のコンパイル回数を1回に制限してコンパイル]{
$ @<userinput>{rake pdf @<b>{n=1} }
### または
$ @<userinput>{@<b>{STARTER_COMPILETIMES=1} rake pdf}
//}


=== 画像読み込みを省略するドラフトモード

Starterでは、画像の読み込みを省略する「ドラフトモード」を用意しました。
ドラフトモードにすると、画像のかわりに枠線が表示されます。
こうすると、（@<LaTeX>{}のコンパイル時間は変わりませんが）DVIファイルからPDFを生成する時間が短縮されます。

図やスクリーンショットが多い場合や、印刷用に高解像度の画像を使っている場合は、この機能は特に効果が高いです。

ドラフトモードにするには、次のどれを実行します@<fn>{fn-b5nlc}。

 * 「@<code>|rake pdf @<b>{d=on}|」でコンパイルする。
 * 環境変数「@<em>{$STARTER_DRAFT}」の値を「@<code>|on|」に設定してからコンパイルする。
 * @<file>{config-starter.yml}で「@<code>{draft: true}」を設定してからコンパイルする。

//footnote[fn-b5nlc][強制力はこの順序であり、設定ファイルより環境変数のほうが、また環境変数より`rake`コマンドのオプションのほうが優先されます。]

//terminal[][画像読み込みを省略するドラフトモードでPDFを生成する]{
$ @<userinput>{rake pdf @<b>{d=on}}     @<balloon>{ドラフトモードをonにする}
### または
$ @<userinput>{export STARTER_DRAFT=on} @<balloon>{ドラフトモードをonにする}
$ @<userinput>{rake pdf}                @<balloon>{またはDocker環境なら rake docker:pdf}
//}

環境変数の設定をクリアするには、「@<code>|unset STARTER_DRAFT|」を実行してください。

また「ドラフトモードにしてPDF生成時間を短縮したい、でもこの画像は表示して確認したい」というときもあるでしょう。
そんなときは「@<code>|//image[...][...][@<b>{draft=off}]|」のように指定すると、その画像はドラフトモードが解除されてPDFに表示されます。


=== 自動リロードつきHTMLプレビュー

Starterでは、HTMLでプレビューするための機能を用意しました。
便利なことに、原稿を変更すると自動的にリロードされます。
PDFと比べてHTMLの生成はずっと高速なので、原稿執筆中に入力間違いを見つけるにはHTMLのほうが向いています。

使い方は、まずWebサーバを起動します。

//terminal[][Webサーバを起動する]{
$ @<userinput>{rake web:server}          @<balloon>{Dockerを使っていない場合}
$ @<userinput>{rake docker:web:server}   @<balloon>{Dockerを使っている場合}
//}

起動したらブラウザで @<em>{http://localhost:9000/} にアクセスし、適当な章を開いてください。
そして開いた章の原稿ファイル（@<file>{*.re}）を変更すると、ブラウザの画面が自動的にリロードされ、変更が反映されます。

原稿執筆中は、エディタのウィンドウの後ろにプレビュー画面が少し見えるようにするといいでしょう。

いくつか注意点があります。

 * 表示はHTMLで行っているため、PDFでの表示とは差異があります。
   執筆中はHTMLでプレビューし、区切りのいいところでPDFによる表示を確認するといいでしょう。
 * 今のところ数式はプレビューできません。
 * 変更が反映されるのは、開いているページと対応した原稿ファイルが変更された場合だけです。
   たとえば「@<file>{foo.html}」を開いているときに「@<file>{foo.re}」を変更するとプレビューに反映されますが、別の「@<file>{bar.re}」を変更しても反映されません。
 * 画面右上の「Rebuild and Reload」リンクをクリックすると、原稿ファイルが変更されていなくても強制的にコンパイルとリロードがされます。
 * 原稿ファイルに入力間違いがあった場合は、画面にエラーが表示されます。
   エラー表示はあまり分かりやすくないので、今後改善される予定です。
 * Webサーバを終了するには、Controlキーを押しながら「c」を押してください。
