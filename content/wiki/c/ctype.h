<!DOCTYPE html>
<html lang="en" dir="ltr" class="client-nojs">
<head>
<meta charset="UTF-8" />
<title>&lt;ctype.h> Header - C - WikiChip</title>
<meta name="generator" content="MediaWiki 1.25.3" />
<link rel="ExportRDF" type="application/rdf+xml" title="c/ctype.h" href="/w/index.php?title=Special:ExportRDF/c/ctype.h&amp;xmlmime=rdf" />
<link rel="alternate" type="application/x-wiki" title="Edit" href="/w/index.php?title=c/ctype.h&amp;action=edit" />
<link rel="edit" title="Edit" href="/w/index.php?title=c/ctype.h&amp;action=edit" />
<link rel="shortcut icon" href="/w/resources/assets/wikichip.png" />
<link rel="search" type="application/opensearchdescription+xml" href="/w/opensearch_desc.php" title="WikiChip (en)" />
<link rel="EditURI" type="application/rsd+xml" href="http://en.wikichip.org/w/api.php?action=rsd" />
<link rel="alternate" hreflang="x-default" href="/wiki/c/ctype.h" />
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
mw.config.set({"wgCanonicalNamespace":"","wgCanonicalSpecialPageName":false,"wgNamespaceNumber":0,"wgPageName":"c/ctype.h","wgTitle":"c/ctype.h","wgCurRevisionId":11651,"wgRevisionId":11651,"wgArticleId":99,"wgIsArticle":true,"wgIsRedirect":false,"wgAction":"view","wgUserName":null,"wgUserGroups":["*"],"wgCategories":["ctype.h"],"wgBreakFrames":false,"wgPageContentLanguage":"en","wgPageContentModel":"wikitext","wgSeparatorTransformTable":["",""],"wgDigitTransformTable":["",""],"wgDefaultDateFormat":"dmy","wgMonthNames":["","January","February","March","April","May","June","July","August","September","October","November","December"],"wgMonthNamesShort":["","Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"],"wgRelevantPageName":"c/ctype.h","wgRelevantArticleId":99,"wgIsProbablyEditable":true,"wgRestrictionEdit":[],"wgRestrictionMove":[],"sfgAutocompleteValues":[],"sfgAutocompleteOnAllChars":false,"sfgFieldProperties":[],"sfgCargoFields":[],"sfgDependentFields":[],"sfgShowOnSelect":[],"sfgScriptPath":"/w/extensions/SemanticForms","edgValues":null,"sfgEDSettings":null,"wgWikiEditorEnabledModules":{"toolbar":true,"dialogs":true,"hidesig":true,"preview":true,"publish":true},"wgCategoryTreePageCategoryOptions":"{\"mode\":0,\"hideprefix\":20,\"showcount\":true,\"namespaces\":false}"});
}</script><script>if(window.mw){
mw.loader.implement("user.options",function($,jQuery){mw.user.options.set({"variant":"en"});});mw.loader.implement("user.tokens",function($,jQuery){mw.user.tokens.set({"editToken":"+\\","patrolToken":"+\\","watchToken":"+\\"});});
/* cache key: wikichip:resourceloader:filter:minify-js:7:a5c52c063dc436c1ca7c9f456936a5e9 */
}</script>
<script>if(window.mw){
mw.loader.load(["ext.smw.style","mediawiki.page.startup","mediawiki.legacy.wikibits","mediawiki.legacy.ajax","skins.vector.js"]);
}</script>
<!--[if lt IE 7]><style type="text/css">body{behavior:url("/w/skins/Vector/csshover.min.htc")}</style><![endif]-->
</head>
<body class="mediawiki ltr sitedir-ltr ns-0 ns-subject page-c_ctype_h skin-vector action-view">
		<div id="mw-page-base" class="noprint"></div>
		<div id="mw-head-base" class="noprint"></div>
		<div id="content" class="mw-body" role="main">
			<a id="top"></a>

						<div class="mw-indicators">
</div>
			<h1 id="firstHeading" class="firstHeading" lang="en">&lt;ctype.h&gt; Header - C</h1>
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
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><strong class="selflink">&lt;ctype.h&gt;</strong><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/c/c89" title="c/c89">C89</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/wiki/c/errno.h" title="c/errno.h">&lt;errno.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/c/c89" title="c/c89">C89</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/w/index.php?title=c/fenv.h&amp;action=edit&amp;redlink=1" class="new" title="c/fenv.h (page does not exist)">&lt;fenv.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/c/c99" title="c/c99">C99</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/w/index.php?title=c/float.h&amp;action=edit&amp;redlink=1" class="new" title="c/float.h (page does not exist)">&lt;float.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/c/c89" title="c/c89">C89</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/w/index.php?title=c/inttypes.h&amp;action=edit&amp;redlink=1" class="new" title="c/inttypes.h (page does not exist)">&lt;inttypes.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/c/c99" title="c/c99">C99</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/wiki/c/iso646.h" title="c/iso646.h">&lt;iso646.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/c/normative_addendum_1" title="c/normative addendum 1">NA1</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/w/index.php?title=c/limits.h&amp;action=edit&amp;redlink=1" class="new" title="c/limits.h (page does not exist)">&lt;limits.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/c/c89" title="c/c89">C89</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/w/index.php?title=c/locale.h&amp;action=edit&amp;redlink=1" class="new" title="c/locale.h (page does not exist)">&lt;locale.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/c/c89" title="c/c89">C89</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/w/index.php?title=c/math.h&amp;action=edit&amp;redlink=1" class="new" title="c/math.h (page does not exist)">&lt;math.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/c/c89" title="c/c89">C89</a>)</span></span>
<span style="display: block; line-height: 25px; margin-left: 10px; width: 160px;"><a href="/wiki/c/setjmp.h" title="c/setjmp.h">&lt;setjmp.h&gt;</a><span style="height: 23px; display: inline-block; float: right; text-align: left; width: 39px;">(<a href="/wiki/c/c89" title="c/c89">C89</a>)</span></span>
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
<p>The <b>&lt;ctype.h&gt; header</b> is part of the <a href="/wiki/standard_library" title="standard library">standard library</a> of the <a href="/wiki/C_programming_language" title="C programming language" class="mw-redirect">C programming language</a> that declares several functions useful for classifying and mapping characters.
</p><p>Some of the functions in this header are local-specific. That is, depending on the locale chosen, some functions behave slightly differently. The minimum locale that must be provided is the "C" locale.
</p>
<h2><span class="mw-headline" id="Functions">Functions</span><span class="mw-editsection"><span class="mw-editsection-bracket">[</span><a href="/w/index.php?title=c/ctype.h&amp;action=edit&amp;section=1" title="Edit section: Functions">edit</a><span class="mw-editsection-bracket">]</span></span></h2>
<p>All functions in this header take a single argument of type <b><a href="/wiki/c/data_types#Signed_Integer_Types" title="c/data types">int</a></b> which should be representable as an <b><a href="/wiki/c/data_types#Character_Types" title="c/data types">unsigned char</a></b> or be equal to the value of the macro <b><a href="/w/index.php?title=c/eof&amp;action=edit&amp;redlink=1" class="new" title="c/eof (page does not exist)">EOF</a></b>. All other values result in <i><a href="/w/index.php?title=undefined_behavior&amp;action=edit&amp;redlink=1" class="new" title="undefined behavior (page does not exist)">undefined behavior</a></i>.
</p><p>Functions in this header falls under two categories:
</p>
<ul><li> <a href="#Character_classification_functions">Character classification functions</a></li>
<li> <a href="#Character_case_mapping_functions">Character case mapping functions</a></li></ul>
<h3><span class="mw-headline" id="Character_classification_functions">Character classification functions</span><span class="mw-editsection"><span class="mw-editsection-bracket">[</span><a href="/w/index.php?title=c/ctype.h&amp;action=edit&amp;section=2" title="Edit section: Character classification functions">edit</a><span class="mw-editsection-bracket">]</span></span></h3>
<table class="wikitable">

<tr>
<th> Function Prototype     </th>
<th> Description </th>
<th> Since
</th></tr>
<tr>
<td> <a href="/w/index.php?title=c/ctype.h/isalnum&amp;action=edit&amp;redlink=1" class="new" title="c/ctype.h/isalnum (page does not exist)">int isalnum(int c);</a> </td>
<td> Checks if c is alphanumeric. </td>
<td> <a href="/wiki/c/c89" title="c/c89">C89</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=c/ctype.h/isalpha&amp;action=edit&amp;redlink=1" class="new" title="c/ctype.h/isalpha (page does not exist)">int isalpha(int c);</a> </td>
<td> Checks if c is alphabetic. </td>
<td> <a href="/wiki/c/c89" title="c/c89">C89</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=c/ctype.h/isblank&amp;action=edit&amp;redlink=1" class="new" title="c/ctype.h/isblank (page does not exist)">int isblank(int c);</a> </td>
<td> Checks if c is blank. </td>
<td> <a href="/wiki/C99" title="C99" class="mw-redirect">C99</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=c/ctype.h/iscntrl&amp;action=edit&amp;redlink=1" class="new" title="c/ctype.h/iscntrl (page does not exist)">int iscntrl(int c);</a> </td>
<td> Checks if c is a control character. </td>
<td> <a href="/wiki/c/c89" title="c/c89">C89</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=c/ctype.h/isdigit&amp;action=edit&amp;redlink=1" class="new" title="c/ctype.h/isdigit (page does not exist)">int isdigit(int c);</a> </td>
<td> Checks if c is a decimal digit. </td>
<td> <a href="/wiki/c/c89" title="c/c89">C89</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=c/ctype.h/isgraph&amp;action=edit&amp;redlink=1" class="new" title="c/ctype.h/isgraph (page does not exist)">int isgraph(int c);</a> </td>
<td> Checks if c has a graphical representation. </td>
<td> <a href="/wiki/c/c89" title="c/c89">C89</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=c/ctype.h/islower&amp;action=edit&amp;redlink=1" class="new" title="c/ctype.h/islower (page does not exist)">int islower(int c);</a> </td>
<td> Checks if c is a lowercase letter. </td>
<td> <a href="/wiki/c/c89" title="c/c89">C89</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=c/ctype.h/isprint&amp;action=edit&amp;redlink=1" class="new" title="c/ctype.h/isprint (page does not exist)">int isprint(int c);</a> </td>
<td> Checks if c is printable. </td>
<td> <a href="/wiki/c/c89" title="c/c89">C89</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=c/ctype.h/ispunct&amp;action=edit&amp;redlink=1" class="new" title="c/ctype.h/ispunct (page does not exist)">int ispunct(int c);</a> </td>
<td> Checks if c is a punctuation character. </td>
<td> <a href="/wiki/c/c89" title="c/c89">C89</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=c/ctype.h/isspace&amp;action=edit&amp;redlink=1" class="new" title="c/ctype.h/isspace (page does not exist)">int isspace(int c);</a> </td>
<td> Checks if c is a white-space character. </td>
<td> <a href="/wiki/c/c89" title="c/c89">C89</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=c/ctype.h/isupper&amp;action=edit&amp;redlink=1" class="new" title="c/ctype.h/isupper (page does not exist)">int isupper(int c);</a> </td>
<td> Checks if c is an uppercase letter. </td>
<td> <a href="/wiki/c/c89" title="c/c89">C89</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=c/ctype.h/isxdigit&amp;action=edit&amp;redlink=1" class="new" title="c/ctype.h/isxdigit (page does not exist)">int isxdigit(int c);</a> </td>
<td> Checks if c is a hexadecimal digit. </td>
<td> <a href="/wiki/c/c89" title="c/c89">C89</a>
</td></tr></table>
<h3><span class="mw-headline" id="Character_case_mapping_functions">Character case mapping functions</span><span class="mw-editsection"><span class="mw-editsection-bracket">[</span><a href="/w/index.php?title=c/ctype.h&amp;action=edit&amp;section=3" title="Edit section: Character case mapping functions">edit</a><span class="mw-editsection-bracket">]</span></span></h3>
<p>Two functions that deal with character case mapping is provided.
</p>
<table class="wikitable">

<tr>
<th> Function Prototype	 </th>
<th> Description </th>
<th> Since
</th></tr>
<tr>
<td> <a href="/w/index.php?title=c/ctype.h/tolower&amp;action=edit&amp;redlink=1" class="new" title="c/ctype.h/tolower (page does not exist)">int tolower(int c);</a> </td>
<td> Converts an uppercase letter to a corresponding lowercase letter. </td>
<td> <a href="/wiki/c/c89" title="c/c89">C89</a>
</td></tr>
<tr>
<td> <a href="/w/index.php?title=c/ctype.h/toupper&amp;action=edit&amp;redlink=1" class="new" title="c/ctype.h/toupper (page does not exist)">int toupper(int c);</a> </td>
<td> Converts a lowercase letter to a corresponding uppercase letter. </td>
<td> <a href="/wiki/c/c89" title="c/c89">C89</a>
</td></tr>
</table>

<!-- 
NewPP limit report
CPU time usage: 0.430 seconds
Real time usage: 0.493 seconds
Preprocessor visited node count: 2437/1000000
Preprocessor generated node count: 2196/1000000
Post‐expand include size: 13261/2097152 bytes
Template argument size: 4544/2097152 bytes
Highest expansion depth: 8/40
Expensive parser function count: 0/100
-->

<!-- 
Transclusion expansion time report (%,ms,calls,template)
100.00%  242.710      1 - -total
 82.50%  200.246     89 - Template:C
 65.05%  157.883      1 - Template:C_Standard_Library
 25.65%   62.251     89 - Template:url_parse_article
 22.82%   55.396     89 - Template:url_parse_anchor
  3.21%    7.783      1 - Template:c_title
  3.10%    7.531      1 - Template:Navbar
  0.85%    2.056      1 - Template:c_menu
-->

<!-- Saved in parser cache with key wikichip:pcache:idhash:99-0!*!0!!*!*!* and timestamp 20160830063306 and revision id 11651
 -->
</div>									<div class="printfooter">
						Retrieved from "<a dir="ltr" href="http://en.wikichip.org/w/index.php?title=c/ctype.h&amp;oldid=11651">http://en.wikichip.org/w/index.php?title=c/ctype.h&amp;oldid=11651</a>"					</div>
													<div id='catlinks' class='catlinks'><div id="mw-normal-catlinks" class="mw-normal-catlinks"><a href="/wiki/Special:Categories" title="Special:Categories">Category</a>: <ul><li><a href="/w/index.php?title=Category:ctype.h&amp;action=edit&amp;redlink=1" class="new" title="Category:ctype.h (page does not exist)">ctype.h</a></li></ul></div></div>												<div class="visualClear"></div>
							</div>
		</div>
		<div id="mw-navigation">
			<h2>Navigation menu</h2>

			<div id="mw-head">
									<div id="p-personal" role="navigation" class="" aria-labelledby="p-personal-label">
						<h3 id="p-personal-label">Personal tools</h3>
						<ul>
							<li id="pt-createaccount"><a href="/w/index.php?title=Special:UserLogin&amp;returnto=c%2Fctype.h&amp;type=signup" title="You are encouraged to create an account and log in; however, it is not mandatory">Create account</a></li><li id="pt-login"><a href="/w/index.php?title=Special:UserLogin&amp;returnto=c%2Fctype.h" title="You are encouraged to log in; however, it is not mandatory [o]" accesskey="o">Log in</a></li>						</ul>
					</div>
									<div id="left-navigation">
										<div id="p-namespaces" role="navigation" class="vectorTabs" aria-labelledby="p-namespaces-label">
						<h3 id="p-namespaces-label">Namespaces</h3>
						<ul>
															<li  id="ca-nstab-main" class="selected"><span><a href="/wiki/c/ctype.h"  title="View the content page [c]" accesskey="c">Page</a></span></li>
															<li  id="ca-talk" class="new"><span><a href="/w/index.php?title=Talk:c/ctype.h&amp;action=edit&amp;redlink=1"  title="Discussion about the content page [t]" accesskey="t">Discussion</a></span></li>
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
															<li id="ca-view" class="selected"><span><a href="/wiki/c/ctype.h" >Read</a></span></li>
															<li id="ca-edit"><span><a href="/w/index.php?title=c/ctype.h&amp;action=edit"  title="You can edit this page. Please use the preview button before saving [e]" accesskey="e">Edit</a></span></li>
															<li id="ca-history" class="collapsible"><span><a href="/w/index.php?title=c/ctype.h&amp;action=history"  title="Past revisions of this page [h]" accesskey="h">View history</a></span></li>
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
			<div class="portal" role="navigation" id='p-C' aria-labelledby='p-C-label'>
			<h3 id='p-C-label'>C</h3>

			<div class="body">
									<ul>
													<li id="n-Introduction"><a href="/wiki/c/introduction">Introduction</a></li>
													<li id="n-Program-structure"><a href="/wiki/c/program_structure">Program structure</a></li>
											</ul>
							</div>
		</div>
			<div class="portal" role="navigation" id='p-Basics' aria-labelledby='p-Basics-label'>
			<h3 id='p-Basics-label'>Basics</h3>

			<div class="body">
									<ul>
													<li id="n-Variables"><a href="/wiki/c/variables">Variables</a></li>
													<li id="n-Basic-I/O"><a href="/wiki/c/basic_i/o">Basic I/O</a></li>
											</ul>
							</div>
		</div>
			<div class="portal" role="navigation" id='p-Math' aria-labelledby='p-Math-label'>
			<h3 id='p-Math-label'>Math</h3>

			<div class="body">
									<ul>
													<li id="n-Basic-Arithmetics"><a href="/wiki/c/basic_arithmetics">Basic Arithmetics</a></li>
													<li id="n-Math-functions"><a href="/wiki/c/math_functions">Math functions</a></li>
													<li id="n-Complex-Numbers"><a href="/wiki/c/complex_numbers">Complex Numbers</a></li>
											</ul>
							</div>
		</div>
			<div class="portal" role="navigation" id='p-Control_Structures' aria-labelledby='p-Control_Structures-label'>
			<h3 id='p-Control_Structures-label'>Control Structures</h3>

			<div class="body">
									<ul>
													<li id="n-Conditional-statements"><a href="/wiki/c/conditional_statements">Conditional statements</a></li>
													<li id="n-Loop-Constructs"><a href="/wiki/c/loop_constructs">Loop Constructs</a></li>
													<li id="n-Goto-Statements"><a href="/wiki/c/goto_statements">Goto Statements</a></li>
													<li id="n-Nonlocal-Jumps"><a href="/wiki/c/Nonlocal_jumps">Nonlocal Jumps</a></li>
													<li id="n-Functions"><a href="/wiki/c/functions">Functions</a></li>
													<li id="n-Error-Handling"><a href="/wiki/c/error_handling">Error Handling</a></li>
											</ul>
							</div>
		</div>
			<div class="portal" role="navigation" id='p-Operators' aria-labelledby='p-Operators-label'>
			<h3 id='p-Operators-label'>Operators</h3>

			<div class="body">
									<ul>
													<li id="n-Operators"><a href="/wiki/c/operators">Operators</a></li>
											</ul>
							</div>
		</div>
			<div class="portal" role="navigation" id='p-Arrays_.26_Pointers' aria-labelledby='p-Arrays_.26_Pointers-label'>
			<h3 id='p-Arrays_.26_Pointers-label'>Arrays &amp; Pointers</h3>

			<div class="body">
									<ul>
													<li id="n-Arrays"><a href="/wiki/c/arrays">Arrays</a></li>
													<li id="n-Pointers"><a href="/wiki/c/pointers">Pointers</a></li>
													<li id="n-Memory-management"><a href="/wiki/c/memory_management">Memory management</a></li>
											</ul>
							</div>
		</div>
			<div class="portal" role="navigation" id='p-Strings' aria-labelledby='p-Strings-label'>
			<h3 id='p-Strings-label'>Strings</h3>

			<div class="body">
									<ul>
													<li id="n-Character-Handling"><a href="/wiki/c/character_handling">Character Handling</a></li>
													<li id="n-Strings-Handling"><a href="/wiki/c/strings_handling">Strings Handling</a></li>
													<li id="n-Wide-Strings"><a href="/wiki/c/wide_strings">Wide Strings</a></li>
													<li id="n-Unicode"><a href="/wiki/c/unicode">Unicode</a></li>
											</ul>
							</div>
		</div>
			<div class="portal" role="navigation" id='p-Date_and_Time' aria-labelledby='p-Date_and_Time-label'>
			<h3 id='p-Date_and_Time-label'>Date and Time</h3>

			<div class="body">
									<ul>
													<li id="n-Date-and-Time"><a href="/wiki/c/date_and_time">Date and Time</a></li>
											</ul>
							</div>
		</div>
			<div class="portal" role="navigation" id='p-Structured_Types' aria-labelledby='p-Structured_Types-label'>
			<h3 id='p-Structured_Types-label'>Structured Types</h3>

			<div class="body">
									<ul>
													<li id="n-Structures"><a href="/wiki/c/structures">Structures</a></li>
													<li id="n-Unions"><a href="/wiki/c/unions">Unions</a></li>
													<li id="n-Bitfields"><a href="/wiki/c/bitfields">Bitfields</a></li>
													<li id="n-Enums"><a href="/wiki/c/enumerated_types">Enums</a></li>
											</ul>
							</div>
		</div>
			<div class="portal" role="navigation" id='p-I.2FO' aria-labelledby='p-I.2FO-label'>
			<h3 id='p-I.2FO-label'>I/O</h3>

			<div class="body">
									<ul>
													<li id="n-Standard-Streams"><a href="/wiki/c/Standard_Streams">Standard Streams</a></li>
													<li id="n-File-I/O"><a href="/wiki/c/file_i/o">File I/O</a></li>
											</ul>
							</div>
		</div>
			<div class="portal" role="navigation" id='p-Concurrency' aria-labelledby='p-Concurrency-label'>
			<h3 id='p-Concurrency-label'>Concurrency</h3>

			<div class="body">
									<ul>
													<li id="n-Concurrency"><a href="/wiki/c/concurrency">Concurrency</a></li>
													<li id="n-Inter‐Thread-Communication"><a href="/wiki/c/inter%E2%80%90thread_communication">Inter‐Thread Communication</a></li>
											</ul>
							</div>
		</div>
			<div class="portal" role="navigation" id='p-Other' aria-labelledby='p-Other-label'>
			<h3 id='p-Other-label'>Other</h3>

			<div class="body">
									<ul>
													<li id="n-Data-Types"><a href="/wiki/c/data_types">Data Types</a></li>
													<li id="n-Static-Assertions"><a href="/wiki/c/static_assertions">Static Assertions</a></li>
													<li id="n-Generic-Selections"><a href="/wiki/c/generic_selections">Generic Selections</a></li>
													<li id="n-Preprocessor"><a href="/wiki/c/preprocessor">Preprocessor</a></li>
													<li id="n-Standard-Library"><a href="/wiki/c/standard_library">Standard Library</a></li>
											</ul>
							</div>
		</div>
			<div class="portal" role="navigation" id='p-tb' aria-labelledby='p-tb-label'>
			<h3 id='p-tb-label'>Tools</h3>

			<div class="body">
									<ul>
													<li id="t-whatlinkshere"><a href="/wiki/Special:WhatLinksHere/c/ctype.h" title="A list of all wiki pages that link here [j]" accesskey="j">What links here</a></li>
													<li id="t-recentchangeslinked"><a href="/wiki/Special:RecentChangesLinked/c/ctype.h" title="Recent changes in pages linked from this page [k]" accesskey="k">Related changes</a></li>
													<li id="t-specialpages"><a href="/wiki/Special:SpecialPages" title="A list of all special pages [q]" accesskey="q">Special pages</a></li>
													<li id="t-print"><a href="/w/index.php?title=c/ctype.h&amp;printable=yes" rel="alternate" title="Printable version of this page [p]" accesskey="p">Printable version</a></li>
													<li id="t-permalink"><a href="/w/index.php?title=c/ctype.h&amp;oldid=11651" title="Permanent link to this revision of the page">Permanent link</a></li>
													<li id="t-info"><a href="/w/index.php?title=c/ctype.h&amp;action=info" title="More information about this page">Page information</a></li>
													<li id="t-smwbrowselink"><a href="/wiki/Special:Browse/c-2Fctype.h" rel="smw-browse">Browse properties</a></li>
											</ul>
							</div>
		</div>
				</div>
		</div>
		<div id="footer" role="contentinfo">
							<ul id="footer-info">
											<li id="footer-info-lastmod"> This page was last modified on 7 January 2015, at 10:53.</li>
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
mw.config.set({"wgBackendResponseTime":1109});
}</script>
	</body>
</html>
