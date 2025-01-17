<!DOCTYPE html>
<html lang="en" dir="ltr" class="client-nojs">
<head>
<meta charset="UTF-8" />
<title>&lt;setjmp.h> Header - C - WikiChip</title>
<meta name="generator" content="MediaWiki 1.25.3" />
<link rel="ExportRDF" type="application/rdf+xml" title="c/setjmp.h" href="/w/index.php?title=Special:ExportRDF/c/setjmp.h&amp;xmlmime=rdf" />
<link rel="alternate" type="application/x-wiki" title="Edit" href="/w/index.php?title=c/setjmp.h&amp;action=edit" />
<link rel="edit" title="Edit" href="/w/index.php?title=c/setjmp.h&amp;action=edit" />
<link rel="shortcut icon" href="/w/resources/assets/wikichip.png" />
<link rel="search" type="application/opensearchdescription+xml" href="/w/opensearch_desc.php" title="WikiChip (en)" />
<link rel="EditURI" type="application/rsd+xml" href="http://en.wikichip.org/w/api.php?action=rsd" />
<link rel="alternate" hreflang="x-default" href="/wiki/c/setjmp.h" />
<link rel="copyright" href="http://creativecommons.org/licenses/by-sa/3.0/" />
<link rel="alternate" type="application/atom+xml" title="WikiChip Atom feed" href="/w/index.php?title=Special:RecentChanges&amp;feed=atom" />
<link rel="stylesheet" href="http://en.wikichip.org/w/load.php?debug=false&amp;lang=en&amp;modules=ext.smw.style%7Cext.smw.tooltip.styles&amp;only=styles&amp;skin=vector&amp;*" />
<link rel="stylesheet" href="http://en.wikichip.org/w/load.php?debug=false&amp;lang=en&amp;modules=mediawiki.legacy.commonPrint%2Cshared%7Cmediawiki.sectionAnchor%7Cmediawiki.skinning.interface%7Cmediawiki.ui.button%7Cskins.vector.styles&amp;only=styles&amp;skin=vector&amp;*" />
<meta name="ResourceLoaderDynamicStyles" content="" />
<link rel="stylesheet" href="http://en.wikichip.org/w/load.php?debug=false&amp;lang=en&amp;modules=site&amp;only=styles&amp;skin=vector&amp;*" />
<style>a:lang(ar),a:lang(kk-arab),a:lang(mzn),a:lang(ps),a:lang(ur){text-decoration:none}
/* cache key: wikichip:resourceloader:filter:minify-css:7:4afaec9e01106da924d2f8e76e5f04b6 */</style>
<script src="http://en.wikichip.org/w/load.php?debug=false&amp;lang=en&amp;modules=startup&amp;only=scripts&amp;skin=vector&amp;*"></script>
<script>if(window.mw){
mw.config.set({"wgCanonicalNamespace":"","wgCanonicalSpecialPageName":false,"wgNamespaceNumber":0,"wgPageName":"c/setjmp.h","wgTitle":"c/setjmp.h","wgCurRevisionId":12705,"wgRevisionId":12705,"wgArticleId":482,"wgIsArticle":true,"wgIsRedirect":false,"wgAction":"view","wgUserName":null,"wgUserGroups":["*"],"wgCategories":["C standard library","Setjmp.h - C"],"wgBreakFrames":false,"wgPageContentLanguage":"en","wgPageContentModel":"wikitext","wgSeparatorTransformTable":["",""],"wgDigitTransformTable":["",""],"wgDefaultDateFormat":"dmy","wgMonthNames":["","January","February","March","April","May","June","July","August","September","October","November","December"],"wgMonthNamesShort":["","Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"],"wgRelevantPageName":"c/setjmp.h","wgRelevantArticleId":482,"wgIsProbablyEditable":true,"wgRestrictionEdit":[],"wgRestrictionMove":[],"sfgAutocompleteValues":[],"sfgAutocompleteOnAllChars":false,"sfgFieldProperties":[],"sfgCargoFields":[],"sfgDependentFields":[],"sfgShowOnSelect":[],"sfgScriptPath":"/w/extensions/SemanticForms","edgValues":null,"sfgEDSettings":null,"wgWikiEditorEnabledModules":{"toolbar":true,"dialogs":true,"hidesig":true,"preview":true,"publish":true},"wgCategoryTreePageCategoryOptions":"{\"mode\":0,\"hideprefix\":20,\"showcount\":true,\"namespaces\":false}"});
}</script><script>if(window.mw){
mw.loader.implement("user.options",function($,jQuery){mw.user.options.set({"variant":"en"});});mw.loader.implement("user.tokens",function($,jQuery){mw.user.tokens.set({"editToken":"+\\","patrolToken":"+\\","watchToken":"+\\"});});
/* cache key: wikichip:resourceloader:filter:minify-js:7:a5c52c063dc436c1ca7c9f456936a5e9 */
}</script>
<script>if(window.mw){
mw.loader.load(["ext.smw.style","mediawiki.page.startup","mediawiki.legacy.wikibits","mediawiki.legacy.ajax","skins.vector.js"]);
}</script>
<!--[if lt IE 7]><style type="text/css">body{behavior:url("/w/skins/Vector/csshover.min.htc")}</style><![endif]-->
</head>
<body class="mediawiki ltr sitedir-ltr ns-0 ns-subject page-c_setjmp_h skin-vector action-view">
		<div id="mw-page-base" class="noprint"></div>
		<div id="mw-head-base" class="noprint"></div>
		<div id="content" class="mw-body" role="main">
			<a id="top"></a>

						<div class="mw-indicators">
</div>
			<h1 id="firstHeading" class="firstHeading" lang="en">&lt;setjmp.h&gt; Header - C</h1>
						<div id="bodyContent" class="mw-body-content">
									<div id="siteSub">From WikiChip</div>
								<div id="contentSub"><span class="subpages">&lt; <a href="/wiki/c" title="c">c</a></span></div>
												<div id="jump-to-nav" class="mw-jump">
					Jump to:					<a href="#mw-head">navigation</a>, 					<a href="#p-search">search</a>
				</div>
				<div id="mw-content-text" lang="en" dir="ltr" class="mw-content-ltr"><div class="noprint" style="float:right; box-shadow: 0 0 4px #BDBDBD inset; background-color: #FFFFFF; border-radius: 5px; width:220px; padding:10px; margin-left: 10px; margin-bottom: 15px;">
<table cellspacing="0">
<tr>
<td style="border-bottom: 1px dashed #C4C4C4; display: inline-block; width: 217px; text-align: center; font-size: 15px; font-weight: bold; color: #4A98D9; margin-bottom: 10px; padding-bottom: 10px;"> <b><a href="/wiki/c/standard_library" title="c/standard library">C Standard Library</a></b>
</td></tr>
<tr>
<td style="display: block; padding-left: 20px; text-align: left;">
<p><span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/wiki/c/assert.h" title="c/assert.h">&lt;assert.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/c/c89" title="c/c89">C89</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/wiki/c/complex.h" title="c/complex.h">&lt;complex.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/c/c99" title="c/c99">C99</a>)<small>op</small></span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/wiki/c/ctype.h" title="c/ctype.h">&lt;ctype.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/c/c89" title="c/c89">C89</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/wiki/c/errno.h" title="c/errno.h">&lt;errno.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/c/c89" title="c/c89">C89</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/w/index.php?title=c/fenv.h&amp;action=edit&amp;redlink=1" class="new" title="c/fenv.h (page does not exist)">&lt;fenv.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/c/c99" title="c/c99">C99</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/w/index.php?title=c/float.h&amp;action=edit&amp;redlink=1" class="new" title="c/float.h (page does not exist)">&lt;float.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/c/c89" title="c/c89">C89</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/w/index.php?title=c/inttypes.h&amp;action=edit&amp;redlink=1" class="new" title="c/inttypes.h (page does not exist)">&lt;inttypes.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/c/c99" title="c/c99">C99</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/wiki/c/iso646.h" title="c/iso646.h">&lt;iso646.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/c/normative_addendum_1" title="c/normative addendum 1">NA1</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/w/index.php?title=c/limits.h&amp;action=edit&amp;redlink=1" class="new" title="c/limits.h (page does not exist)">&lt;limits.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/c/c89" title="c/c89">C89</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/w/index.php?title=c/locale.h&amp;action=edit&amp;redlink=1" class="new" title="c/locale.h (page does not exist)">&lt;locale.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/c/c89" title="c/c89">C89</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/w/index.php?title=c/math.h&amp;action=edit&amp;redlink=1" class="new" title="c/math.h (page does not exist)">&lt;math.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/c/c89" title="c/c89">C89</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><strong class="selflink">&lt;setjmp.h&gt;</strong><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/c/c89" title="c/c89">C89</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/wiki/c/signal.h" title="c/signal.h">&lt;signal.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/c/c89" title="c/c89">C89</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/wiki/c/stdalign.h" title="c/stdalign.h">&lt;stdalign.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/c/c11" title="c/c11">C11</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/w/index.php?title=c/stdarg.h&amp;action=edit&amp;redlink=1" class="new" title="c/stdarg.h (page does not exist)">&lt;stdarg.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/c/c89" title="c/c89">C89</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/w/index.php?title=c/stdatomic.h&amp;action=edit&amp;redlink=1" class="new" title="c/stdatomic.h (page does not exist)">&lt;stdatomic.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/c/c11" title="c/c11">C11</a>)<small>op</small></span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/w/index.php?title=c/stdbool.h&amp;action=edit&amp;redlink=1" class="new" title="c/stdbool.h (page does not exist)">&lt;stdbool.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/c/c99" title="c/c99">C99</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/w/index.php?title=c/stddef.h&amp;action=edit&amp;redlink=1" class="new" title="c/stddef.h (page does not exist)">&lt;stddef.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/c/c89" title="c/c89">C89</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/w/index.php?title=c/stdint.h&amp;action=edit&amp;redlink=1" class="new" title="c/stdint.h (page does not exist)">&lt;stdint.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/c/c99" title="c/c99">C99</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/w/index.php?title=c/stdio.h&amp;action=edit&amp;redlink=1" class="new" title="c/stdio.h (page does not exist)">&lt;stdio.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/c/c89" title="c/c89">C89</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/w/index.php?title=c/stdlib.h&amp;action=edit&amp;redlink=1" class="new" title="c/stdlib.h (page does not exist)">&lt;stdlib.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/c/c89" title="c/c89">C89</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/wiki/c/stdnoreturn.h" title="c/stdnoreturn.h">&lt;stdnoreturn.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/c/c11" title="c/c11">C11</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/w/index.php?title=c/string.h&amp;action=edit&amp;redlink=1" class="new" title="c/string.h (page does not exist)">&lt;string.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/c/c89" title="c/c89">C89</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/w/index.php?title=c/tgmath.h&amp;action=edit&amp;redlink=1" class="new" title="c/tgmath.h (page does not exist)">&lt;tgmath.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/c/c99" title="c/c99">C99</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/w/index.php?title=c/threads.h&amp;action=edit&amp;redlink=1" class="new" title="c/threads.h (page does not exist)">&lt;threads.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/c/c11" title="c/c11">C11</a>)<small>op</small></span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/w/index.php?title=c/time.h&amp;action=edit&amp;redlink=1" class="new" title="c/time.h (page does not exist)">&lt;time.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/c/c89" title="c/c89">C89</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/w/index.php?title=c/uchar.h&amp;action=edit&amp;redlink=1" class="new" title="c/uchar.h (page does not exist)">&lt;uchar.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/c/c11" title="c/c11">C11</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/w/index.php?title=c/wchar.h&amp;action=edit&amp;redlink=1" class="new" title="c/wchar.h (page does not exist)">&lt;wchar.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/c/normative_addendum_1" title="c/normative addendum 1">NA1</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/w/index.php?title=c/wctype.h&amp;action=edit&amp;redlink=1" class="new" title="c/wctype.h (page does not exist)">&lt;wctype.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/c/normative_addendum_1" title="c/normative addendum 1">NA1</a>)</span></span>
</p>
</td></tr></table>
<hr />
<p><small>op</small> - Optional Header
<span class="noprint plainlinks navbar" style="float:right;"><small><span style="white-space:nowrap;word-spacing:-.12em;"><a href="/wiki/Template:C_Standard_Library" title="Template:C Standard Library"><span style="" title="View this template">v</span></a><span style="">&#32;<b>&#183;</b>&#32;</span><a href="/wiki/Template:C_Standard_Library" title="Template:C Standard Library"><span style="" title="Discuss this template">d</span></a><span style="">&#32;<b>&#183;</b>&#32;</span><a rel="nofollow" class="external text" href="http://en.wikichip.org/w/index.php?title=Template:C_Standard_Library&amp;action=edit"><span style="" title="Edit this template">e</span></a></span></small></span>
</p>
</div>
<p>The <b>&lt;setjmp.h&gt;</b> header is part of the <a href="/wiki/standard_library" title="standard library">standard library</a> of the <a href="/wiki/C_programming_language" title="C programming language" class="mw-redirect">C programming language</a> which provides the mechanism for bypassing the normal function call and return discipline. This header was added in <a href="/wiki/C89" title="C89" class="mw-redirect">C89</a>.
</p>
<h2><span class="mw-headline" id="Types">Types</span><span class="mw-editsection"><span class="mw-editsection-bracket">[</span><a href="/w/index.php?title=c/setjmp.h&amp;action=edit&amp;section=1" title="Edit section: Types">edit</a><span class="mw-editsection-bracket">]</span></span></h2>
<table class="wikitable">

<tr>
<th> Type </th>
<th> Description </th>
<th> Since
</th></tr>
<tr>
<td> <a href="/w/index.php?title=c/setjmp.h/jmp_buf&amp;action=edit&amp;redlink=1" class="new" title="c/setjmp.h/jmp buf (page does not exist)">jmp_buf</a> </td>
<td> An array type suitable for holding calling environment info. </td>
<td> <a href="/wiki/C89" title="C89" class="mw-redirect">C89</a>
</td></tr></table>
<h2><span class="mw-headline" id="Functions">Functions</span><span class="mw-editsection"><span class="mw-editsection-bracket">[</span><a href="/w/index.php?title=c/setjmp.h&amp;action=edit&amp;section=2" title="Edit section: Functions">edit</a><span class="mw-editsection-bracket">]</span></span></h2>
<table class="wikitable">

<tr>
<th> Function </th>
<th> Description </th>
<th> Since
</th></tr>
<tr>
<td> <a href="/w/index.php?title=c/setjmp.h/longjmp&amp;action=edit&amp;redlink=1" class="new" title="c/setjmp.h/longjmp (page does not exist)">longjmp</a> </td>
<td> Restores the environment saved by the most recent invocation setjmp </td>
<td> <a href="/wiki/C89" title="C89" class="mw-redirect">C89</a>
</td></tr>
</table>
<h2><span class="mw-headline" id="Macros">Macros</span><span class="mw-editsection"><span class="mw-editsection-bracket">[</span><a href="/w/index.php?title=c/setjmp.h&amp;action=edit&amp;section=3" title="Edit section: Macros">edit</a><span class="mw-editsection-bracket">]</span></span></h2>
<p>The header provides the following macro definitions:
</p>
<table class="wikitable">

<tr>
<th> Macro Name </th>
<th> Description </th>
<th> Since
</th></tr>
<tr>
<td> <a href="/w/index.php?title=c/setjmp.h/setjmp&amp;action=edit&amp;redlink=1" class="new" title="c/setjmp.h/setjmp (page does not exist)">setjmp</a> </td>
<td> Saves its calling environment in its argument  </td>
<td> <a href="/wiki/C89" title="C89" class="mw-redirect">C89</a>
</td></tr>
</table>

<!-- 
NewPP limit report
CPU time usage: 0.327 seconds
Real time usage: 0.364 seconds
Preprocessor visited node count: 1601/1000000
Preprocessor generated node count: 1456/1000000
Post‐expand include size: 11352/2097152 bytes
Template argument size: 2482/2097152 bytes
Highest expansion depth: 8/40
Expensive parser function count: 0/100
-->

<!-- 
Transclusion expansion time report (%,ms,calls,template)
100.00%  180.373      1 - -total
100.00%  180.373      1 - Template:C_Standard_Library
 82.91%  149.552     59 - Template:C
 25.33%   45.697     59 - Template:url_parse_article
 21.83%   39.384     59 - Template:url_parse_anchor
  3.81%    6.869      1 - Template:Navbar
-->

<!-- Saved in parser cache with key wikichip:pcache:idhash:482-0!*!0!!*!*!* and timestamp 20160830054958 and revision id 12705
 -->
</div>									<div class="printfooter">
						Retrieved from "<a dir="ltr" href="http://en.wikichip.org/w/index.php?title=c/setjmp.h&amp;oldid=12705">http://en.wikichip.org/w/index.php?title=c/setjmp.h&amp;oldid=12705</a>"					</div>
													<div id='catlinks' class='catlinks'><div id="mw-normal-catlinks" class="mw-normal-catlinks"><a href="/wiki/Special:Categories" title="Special:Categories">Categories</a>: <ul><li><a href="/wiki/Category:C_standard_library" title="Category:C standard library">C standard library</a></li><li><a href="/wiki/Category:Setjmp.h_-_C" title="Category:Setjmp.h - C">Setjmp.h - C</a></li></ul></div></div>												<div class="visualClear"></div>
							</div>
		</div>
		<div id="mw-navigation">
			<h2>Navigation menu</h2>

			<div id="mw-head">
									<div id="p-personal" role="navigation" class="" aria-labelledby="p-personal-label">
						<h3 id="p-personal-label">Personal tools</h3>
						<ul>
							<li id="pt-createaccount"><a href="/w/index.php?title=Special:UserLogin&amp;returnto=c%2Fsetjmp.h&amp;type=signup" title="You are encouraged to create an account and log in; however, it is not mandatory">Create account</a></li><li id="pt-login"><a href="/w/index.php?title=Special:UserLogin&amp;returnto=c%2Fsetjmp.h" title="You are encouraged to log in; however, it is not mandatory [o]" accesskey="o">Log in</a></li>						</ul>
					</div>
									<div id="left-navigation">
										<div id="p-namespaces" role="navigation" class="vectorTabs" aria-labelledby="p-namespaces-label">
						<h3 id="p-namespaces-label">Namespaces</h3>
						<ul>
															<li  id="ca-nstab-main" class="selected"><span><a href="/wiki/c/setjmp.h"  title="View the content page [c]" accesskey="c">Page</a></span></li>
															<li  id="ca-talk" class="new"><span><a href="/w/index.php?title=Talk:c/setjmp.h&amp;action=edit&amp;redlink=1"  title="Discussion about the content page [t]" accesskey="t">Discussion</a></span></li>
													</ul>
					</div>
										<div id="p-variants" role="navigation" class="vectorMenu emptyPortlet" aria-labelledby="p-variants-label">
												<h3 id="p-variants-label"><span>Variants</span><a href="#"></a></h3>

						<div class="menu">
							<ul>
															</ul>
						</div>
					</div>
									</div>
				<div id="right-navigation">
										<div id="p-views" role="navigation" class="vectorTabs" aria-labelledby="p-views-label">
						<h3 id="p-views-label">Views</h3>
						<ul>
															<li id="ca-view" class="selected"><span><a href="/wiki/c/setjmp.h" >Read</a></span></li>
															<li id="ca-edit"><span><a href="/w/index.php?title=c/setjmp.h&amp;action=edit"  title="You can edit this page. Please use the preview button before saving [e]" accesskey="e">Edit</a></span></li>
															<li id="ca-history" class="collapsible"><span><a href="/w/index.php?title=c/setjmp.h&amp;action=history"  title="Past revisions of this page [h]" accesskey="h">View history</a></span></li>
													</ul>
					</div>
										<div id="p-cactions" role="navigation" class="vectorMenu emptyPortlet" aria-labelledby="p-cactions-label">
						<h3 id="p-cactions-label"><span>More</span><a href="#"></a></h3>

						<div class="menu">
							<ul>
															</ul>
						</div>
					</div>
										<div id="p-search" role="search">
						<h3>
							<label for="searchInput">Search</label>
						</h3>

						<form action="/w/index.php" id="searchform">
														<div id="simpleSearch">
															<input type="search" name="search" placeholder="Search" title="Search WikiChip [f]" accesskey="f" id="searchInput" /><input type="hidden" value="Special:Search" name="title" /><input type="submit" name="fulltext" value="Search" title="Search the pages for this text" id="mw-searchButton" class="searchButton mw-fallbackSearchButton" /><input type="submit" name="go" value="Go" title="Go to a page with this exact name if exists" id="searchButton" class="searchButton" />								</div>
						</form>
					</div>
									</div>
			</div>
			<div id="mw-panel">
				<div id="p-logo" role="banner"><a class="mw-wiki-logo" href="/wiki/WikiChip"  title="Visit the main page"></a></div>
						<div class="portal" role="navigation" id='p-navigation' aria-labelledby='p-navigation-label'>
			<h3 id='p-navigation-label'>Navigation</h3>

			<div class="body">
									<ul>
													<li id="n-mainpage-description"><a href="/wiki/WikiChip" title="Visit the main page [z]" accesskey="z">Main page</a></li>
													<li id="n-recentchanges"><a href="/wiki/Special:RecentChanges" title="A list of recent changes in the wiki [r]" accesskey="r">Recent changes</a></li>
													<li id="n-randompage"><a href="http://en.wikichip.org/wiki/Special:Random?nocache=1" title="Load a random page [x]" accesskey="x">Random page</a></li>
											</ul>
							</div>
		</div>
			<div class="portal" role="navigation" id='p-tb' aria-labelledby='p-tb-label'>
			<h3 id='p-tb-label'>Tools</h3>

			<div class="body">
									<ul>
													<li id="t-whatlinkshere"><a href="/wiki/Special:WhatLinksHere/c/setjmp.h" title="A list of all wiki pages that link here [j]" accesskey="j">What links here</a></li>
													<li id="t-recentchangeslinked"><a href="/wiki/Special:RecentChangesLinked/c/setjmp.h" title="Recent changes in pages linked from this page [k]" accesskey="k">Related changes</a></li>
													<li id="t-specialpages"><a href="/wiki/Special:SpecialPages" title="A list of all special pages [q]" accesskey="q">Special pages</a></li>
													<li id="t-print"><a href="/w/index.php?title=c/setjmp.h&amp;printable=yes" rel="alternate" title="Printable version of this page [p]" accesskey="p">Printable version</a></li>
													<li id="t-permalink"><a href="/w/index.php?title=c/setjmp.h&amp;oldid=12705" title="Permanent link to this revision of the page">Permanent link</a></li>
													<li id="t-info"><a href="/w/index.php?title=c/setjmp.h&amp;action=info" title="More information about this page">Page information</a></li>
													<li id="t-smwbrowselink"><a href="/wiki/Special:Browse/c-2Fsetjmp.h" rel="smw-browse">Browse properties</a></li>
											</ul>
							</div>
		</div>
				</div>
		</div>
		<div id="footer" role="contentinfo">
							<ul id="footer-info">
											<li id="footer-info-lastmod"> This page was last modified on 23 November 2015, at 15:37.</li>
											<li id="footer-info-copyright">Content is available under <a class="external" rel="nofollow" href="http://creativecommons.org/licenses/by-sa/3.0/">Creative Commons Attribution Share Alike</a> unless otherwise noted.</li>
									</ul>
							<ul id="footer-places">
											<li id="footer-places-privacy"><a href="/wiki/WikiChip:Privacy_policy" title="WikiChip:Privacy policy">Privacy policy</a></li>
											<li id="footer-places-about"><a href="/wiki/WikiChip:About" title="WikiChip:About">About WikiChip</a></li>
											<li id="footer-places-disclaimer"><a href="/wiki/WikiChip:General_disclaimer" title="WikiChip:General disclaimer">Disclaimers</a></li>
									</ul>
										<ul id="footer-icons" class="noprint">
											<li id="footer-copyrightico">
															<a href="http://creativecommons.org/licenses/by-sa/3.0/"><img src="/w/resources/assets/licenses/cc-by-sa.png" alt="Creative Commons Attribution Share Alike" width="88" height="31" /></a>
													</li>
											<li id="footer-poweredbyico">
															<a href="//www.mediawiki.org/"><img src="/w/resources/assets/poweredby_mediawiki_88x31.png" alt="Powered by MediaWiki" srcset="/w/resources/assets/poweredby_mediawiki_132x47.png 1.5x, /w/resources/assets/poweredby_mediawiki_176x62.png 2x" width="88" height="31" /></a>
															<a href="https://www.semantic-mediawiki.org/wiki/Semantic_MediaWiki"><img src="/w/extensions/SemanticMediaWiki/includes/../res/images/smw_button.png" alt="Powered by Semantic MediaWiki" width="88" height="31" /></a>
													</li>
									</ul>
						<div style="clear:both"></div>
		</div>
		<script>if(window.jQuery)jQuery.ready();</script><script>if(window.mw){
mw.loader.state({"site":"loading","user":"ready","user.groups":"ready"});
}</script>
<script>if(window.mw){
mw.loader.load(["ext.smw.tooltips","mediawiki.action.view.postEdit","mediawiki.user","mediawiki.hidpi","mediawiki.page.ready","mediawiki.searchSuggest"],null,true);
}</script>
<script>if(window.mw){
document.write("\u003Cscript src=\"http://en.wikichip.org/w/load.php?debug=false\u0026amp;lang=en\u0026amp;modules=site\u0026amp;only=scripts\u0026amp;skin=vector\u0026amp;*\"\u003E\u003C/script\u003E");
}</script>
<script>if(window.mw){
mw.config.set({"wgBackendResponseTime":885});
}</script>
	</body>
</html>
