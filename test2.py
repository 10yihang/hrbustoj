from PyQt5.QtWidgets import QApplication, QTextBrowser
import sys

app = QApplication(sys.argv)

html_code = """<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
    <head>
        <script type="text/javascript">
            var _speedMark = new Date();
        </script>
        <link rel="shortcut icon" type="image/x-icon" href="images/favicon.ico"/>
        <link href="css/style.css" rel="stylesheet" type="text/css" media="screen"/>
        <link href="js/prettify/prettify.css" type="text/css" rel="stylesheet"/>
        <script language="javascript" type="text/javascript" src="js/prettify/prettify.js"/></script>
        <script language="javascript" type="text/javascript" src="js/jquery-1.7.1.min.js"></script>
        <script language="javascript" type="text/javascript" src="js/global.js"></script>
        <meta http-equiv="Content-Type" content="text/html; charset=utf-8"/>
        <title>D.Bitwise Master @ Hrbust Online Judge</title>
    </head>
    <body>
        <table id="navigation">
            <tr>
                <td>
                    <a href="index.php">
                        <img src="images/logo.jpg" width="147" height="35"/>
                    </a>
                </td>
                <td class="nav_button_first">
                    <a href="index.php?act=problems&cid=2085">Problems</a>
                </td>
                <td class="nav_button">
                    <a href="index.php?act=status&cid=2085">Status</a>
                </td>
                <td class="nav_button">
                    <a href="index.php?act=statistics&cid=2085">Statistics</a>
                </td>
                <td class="nav_button">
                    <a href="index.php?act=messages&cid=2085">Messages</a>
                </td>
                <td class="nav_button">
                    <a href="index.php?act=ranklist&cid=2085&page=1">Ranklist</a>
                </td>
                <td width="100%"></td>
                <td class="nav_button_other">2204010110</td>
                <td class="nav_button_other_last">
                    <a href="index.php?act=modifypassword&cid=2085">ModifyPassword</a>
                </td>
                <td class="nav_button_other_last">
                    <a href="index.php?act=logout&cid=2085">Logout</a>
                </td>
            </tr>
        </table>
        <table class="body_table">
            <tr>
                <td class="left_table">
                    <table>
                        <tr>
                            <td>
                                <a href="index.php?act=userinfo&cid=2085&u=2204010110">
                                    <img src=images/avatar/avatar.jpg class="avatar_left">
                                </a>
                            </td>
                        </tr>
                    </table>
                    <table class="left_info">
                        <tr>
                            <td class="left_info_left">Name</td>
                            <td class="left_info_right">
                                <a href="index.php?act=userinfo&cid=2085&u=2204010110">2204010110</a>
                            </td>
                        </tr>
                        <tr>
                            <td class="left_info_left">Rank</td>
                            <td class="left_info_right">7</td>
                        </tr>
                        <tr>
                            <td class="left_info_left">AC</td>
                            <td class="left_info_right">3</td>
                        </tr>
                        <tr>
                            <td class="left_info_left">Submit</td>
                            <td class="left_info_right">11</td>
                        </tr>
                    </table>
                    <table class="left_mod">
                        <tr>
                            <td style="padding:10px; color: #1A5CC8;font-size:12pt; font-weight: bold; font-family:Arial, Helvetica, sans-serif">
                                <a href="index.php?act=faq&cid=2085">F.A.Q</a>
                            </td>
                        </tr>
                    </table>
                    <table class="left_mod">
                        <tr>
                            <td class="left_mod_header">Left Time</td>
                        </tr>
                        <tr>
                            <td class="left_mod_body">
                                <span id="countdown"></span>
                            </td>
                        </tr>
                    </table>
                    <table class="left_mod">
                        <tr>
                            <td class="left_mod_header">Notice</td>
                        </tr>
                        <tr>
                            <td class="left_mod_body">
                                <table>
                                    <tr>
                                        <td></td>
                                    </tr>
                                </table>
                            </td>
                        </tr>
                    </table>
                    <script type="text/javascript" src="js/left.js"></script>
                    <script>
                        start_countdown(-15664405);
                    </script>
                </td>
                <td class="right_table">
                    <table class="problem_mod">
                        <tr>
                            <td class="problem_mod_name">D.Bitwise Master</td>
                        </tr>
                        <tr>
                            <td>
                                <table class="problem_mod_info">
                                    <tr>
                                        <td>Time Limit: 2000 MS</td>
                                        <td>Memory Limit: 32768 K</td>
                                    </tr>
                                </table>
                                <table class="problem_mod_info">
                                    <tr>
                                        <td>
                                            Total Submit: 17									<span class="problem_mod_info_user">(11 users)</span>
                                        </td>
                                        <td>
                                            Total Accepted: 4									<span class="problem_mod_info_user">(4 users)</span>
                                        </td>
                                        <td>
                                            Special Judge: <span class="problem_mod_info_sj_no">No</span>
                                        </td>
                                    </tr>
                                </table>
                            </td>
                        </tr>
                        <tr>
                            <td class="problem_mod_title">Description</td>
                        </tr>
                        <tr>
                            <td class="problem_mod_content">
                                <style>
                                    p {
                                        font-family: helvetica neue,Helvetica,Arial,sans-serif;
                                    }
                                </style>
                                <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/katex@0.10.2/dist/katex.min.css" integrity="sha384-yFRtMMDnQtDRO8rLpMIKrtPCD5jdktao2TV19YiZYWMDkUR5GQZR/NOVTdquEx1j" crossorigin="anonymous"/>
                                <link href="https://cdn.jsdelivr.net/npm/katex-copytex@latest/dist/katex-copytex.min.css" rel="stylesheet" type="text/css"/>
                                <p>
                                    Calculate 
                                    <span class="katex">
                                        <span class="katex-mathml">
                                            <math xmlns="http://www.w3.org/1998/Math/MathML">
                                                <semantics>
                                                    <mrow>
                                                        <msubsup>
                                                            <mo>∑</mo>
                                                            <mrow>
                                                                <mi>i</mi>
                                                                <mo>=</mo>
                                                                <msub>
                                                                    <mi>l</mi>
                                                                    <mn>1</mn>
                                                                </msub>
                                                            </mrow>
                                                            <msub>
                                                                <mi>r</mi>
                                                                <mn>1</mn>
                                                            </msub>
                                                        </msubsup>
                                                        <msubsup>
                                                            <mo>∑</mo>
                                                            <mrow>
                                                                <mi>j</mi>
                                                                <mo>=</mo>
                                                                <msub>
                                                                    <mi>l</mi>
                                                                    <mn>2</mn>
                                                                </msub>
                                                            </mrow>
                                                            <msub>
                                                                <mi>r</mi>
                                                                <mn>2</mn>
                                                            </msub>
                                                        </msubsup>
                                                        <mo stretchy="false">(</mo>
                                                        <mi>i</mi>
                                                        <mo>⊕</mo>
                                                        <mi>j</mi>
                                                        <mo stretchy="false">)</mo>
                                                        <mo>+</mo>
                                                        <mn>2</mn>
                                                        <mo>×</mo>
                                                        <mo stretchy="false">(</mo>
                                                        <mo stretchy="false">(</mo>
                                                        <mi>i</mi>
                                                        <mi mathvariant="normal">&amp;</mi>
                                                        <mi>j</mi>
                                                        <mo stretchy="false">)</mo>
                                                        <mi mathvariant="normal">∣</mi>
                                                        <mn>1</mn>
                                                        <mo stretchy="false">)</mo>
                                                    </mrow>
                                                    <annotation encoding="application/x-tex">\sum_{i=l_1}^{r_1}\sum_{j=l_2}^{r_2}(i\oplus j)+2\times((i \&amp;j)|1)</annotation>
                                                </semantics>
                                            </math>
                                        </span>
                                        <span class="katex-html" aria-hidden="true">
                                            <span class="base">
                                                <span class="strut" style="height:1.2401em;vertical-align:-0.4358em;"></span>
                                                <span class="mop">
                                                    <span class="mop op-symbol small-op" style="position:relative;top:0em;">∑</span>
                                                    <span class="msupsub">
                                                        <span class="vlist-t vlist-t2">
                                                            <span class="vlist-r">
                                                                <span class="vlist" style="height:0.8043em;">
                                                                    <span style="top:-2.4003em;margin-left:0em;margin-right:0.05em;">
                                                                        <span class="pstrut" style="height:2.7em;"></span>
                                                                        <span class="sizing reset-size6 size3 mtight">
                                                                            <span class="mord mtight">
                                                                                <span class="mord mathnormal mtight">i</span>
                                                                                <span class="mrel mtight">=</span>
                                                                                <span class="mord mtight">
                                                                                    <span class="mord mathnormal mtight" style="margin-right:0.01968em;">l</span>
                                                                                    <span class="msupsub">
                                                                                        <span class="vlist-t vlist-t2">
                                                                                            <span class="vlist-r">
                                                                                                <span class="vlist" style="height:0.3173em;">
                                                                                                    <span style="top:-2.357em;margin-left:-0.0197em;margin-right:0.0714em;">
                                                                                                        <span class="pstrut" style="height:2.5em;"></span>
                                                                                                        <span class="sizing reset-size3 size1 mtight">
                                                                                                            <span class="mord mtight">1</span>
                                                                                                        </span>
                                                                                                    </span>
                                                                                                </span>
                                                                                                <span class="vlist-s"></span>
                                                                                            </span>
                                                                                            <span class="vlist-r">
                                                                                                <span class="vlist" style="height:0.143em;">
                                                                                                    <span></span>
                                                                                                </span>
                                                                                            </span>
                                                                                        </span>
                                                                                    </span>
                                                                                </span>
                                                                            </span>
                                                                        </span>
                                                                    </span>
                                                                    <span style="top:-3.2029em;margin-right:0.05em;">
                                                                        <span class="pstrut" style="height:2.7em;"></span>
                                                                        <span class="sizing reset-size6 size3 mtight">
                                                                            <span class="mord mtight">
                                                                                <span class="mord mtight">
                                                                                    <span class="mord mathnormal mtight" style="margin-right:0.02778em;">r</span>
                                                                                    <span class="msupsub">
                                                                                        <span class="vlist-t vlist-t2">
                                                                                            <span class="vlist-r">
                                                                                                <span class="vlist" style="height:0.3173em;">
                                                                                                    <span style="top:-2.357em;margin-left:-0.0278em;margin-right:0.0714em;">
                                                                                                        <span class="pstrut" style="height:2.5em;"></span>
                                                                                                        <span class="sizing reset-size3 size1 mtight">
                                                                                                            <span class="mord mtight">1</span>
                                                                                                        </span>
                                                                                                    </span>
                                                                                                </span>
                                                                                                <span class="vlist-s"></span>
                                                                                            </span>
                                                                                            <span class="vlist-r">
                                                                                                <span class="vlist" style="height:0.143em;">
                                                                                                    <span></span>
                                                                                                </span>
                                                                                            </span>
                                                                                        </span>
                                                                                    </span>
                                                                                </span>
                                                                            </span>
                                                                        </span>
                                                                    </span>
                                                                </span>
                                                                <span class="vlist-s"></span>
                                                            </span>
                                                            <span class="vlist-r">
                                                                <span class="vlist" style="height:0.3998em;">
                                                                    <span></span>
                                                                </span>
                                                            </span>
                                                        </span>
                                                    </span>
                                                </span>
                                                <span class="mspace" style="margin-right:0.1667em;"></span>
                                                <span class="mop">
                                                    <span class="mop op-symbol small-op" style="position:relative;top:0em;">∑</span>
                                                    <span class="msupsub">
                                                        <span class="vlist-t vlist-t2">
                                                            <span class="vlist-r">
                                                                <span class="vlist" style="height:0.8043em;">
                                                                    <span style="top:-2.4003em;margin-left:0em;margin-right:0.05em;">
                                                                        <span class="pstrut" style="height:2.7em;"></span>
                                                                        <span class="sizing reset-size6 size3 mtight">
                                                                            <span class="mord mtight">
                                                                                <span class="mord mathnormal mtight" style="margin-right:0.05724em;">j</span>
                                                                                <span class="mrel mtight">=</span>
                                                                                <span class="mord mtight">
                                                                                    <span class="mord mathnormal mtight" style="margin-right:0.01968em;">l</span>
                                                                                    <span class="msupsub">
                                                                                        <span class="vlist-t vlist-t2">
                                                                                            <span class="vlist-r">
                                                                                                <span class="vlist" style="height:0.3173em;">
                                                                                                    <span style="top:-2.357em;margin-left:-0.0197em;margin-right:0.0714em;">
                                                                                                        <span class="pstrut" style="height:2.5em;"></span>
                                                                                                        <span class="sizing reset-size3 size1 mtight">
                                                                                                            <span class="mord mtight">2</span>
                                                                                                        </span>
                                                                                                    </span>
                                                                                                </span>
                                                                                                <span class="vlist-s"></span>
                                                                                            </span>
                                                                                            <span class="vlist-r">
                                                                                                <span class="vlist" style="height:0.143em;">
                                                                                                    <span></span>
                                                                                                </span>
                                                                                            </span>
                                                                                        </span>
                                                                                    </span>
                                                                                </span>
                                                                            </span>
                                                                        </span>
                                                                    </span>
                                                                    <span style="top:-3.2029em;margin-right:0.05em;">
                                                                        <span class="pstrut" style="height:2.7em;"></span>
                                                                        <span class="sizing reset-size6 size3 mtight">
                                                                            <span class="mord mtight">
                                                                                <span class="mord mtight">
                                                                                    <span class="mord mathnormal mtight" style="margin-right:0.02778em;">r</span>
                                                                                    <span class="msupsub">
                                                                                        <span class="vlist-t vlist-t2">
                                                                                            <span class="vlist-r">
                                                                                                <span class="vlist" style="height:0.3173em;">
                                                                                                    <span style="top:-2.357em;margin-left:-0.0278em;margin-right:0.0714em;">
                                                                                                        <span class="pstrut" style="height:2.5em;"></span>
                                                                                                        <span class="sizing reset-size3 size1 mtight">
                                                                                                            <span class="mord mtight">2</span>
                                                                                                        </span>
                                                                                                    </span>
                                                                                                </span>
                                                                                                <span class="vlist-s"></span>
                                                                                            </span>
                                                                                            <span class="vlist-r">
                                                                                                <span class="vlist" style="height:0.143em;">
                                                                                                    <span></span>
                                                                                                </span>
                                                                                            </span>
                                                                                        </span>
                                                                                    </span>
                                                                                </span>
                                                                            </span>
                                                                        </span>
                                                                    </span>
                                                                </span>
                                                                <span class="vlist-s"></span>
                                                            </span>
                                                            <span class="vlist-r">
                                                                <span class="vlist" style="height:0.4358em;">
                                                                    <span></span>
                                                                </span>
                                                            </span>
                                                        </span>
                                                    </span>
                                                </span>
                                                <span class="mopen">(</span>
                                                <span class="mord mathnormal">i</span>
                                                <span class="mspace" style="margin-right:0.2222em;"></span>
                                                <span class="mbin">⊕</span>
                                                <span class="mspace" style="margin-right:0.2222em;"></span>
                                            </span>
                                            <span class="base">
                                                <span class="strut" style="height:1em;vertical-align:-0.25em;"></span>
                                                <span class="mord mathnormal" style="margin-right:0.05724em;">j</span>
                                                <span class="mclose">)</span>
                                                <span class="mspace" style="margin-right:0.2222em;"></span>
                                                <span class="mbin">+</span>
                                                <span class="mspace" style="margin-right:0.2222em;"></span>
                                            </span>
                                            <span class="base">
                                                <span class="strut" style="height:0.7278em;vertical-align:-0.0833em;"></span>
                                                <span class="mord">2</span>
                                                <span class="mspace" style="margin-right:0.2222em;"></span>
                                                <span class="mbin">×</span>
                                                <span class="mspace" style="margin-right:0.2222em;"></span>
                                            </span>
                                            <span class="base">
                                                <span class="strut" style="height:1em;vertical-align:-0.25em;"></span>
                                                <span class="mopen">((</span>
                                                <span class="mord mathnormal">i</span>
                                                <span class="mord">&amp;</span>
                                                <span class="mord mathnormal" style="margin-right:0.05724em;">j</span>
                                                <span class="mclose">)</span>
                                                <span class="mord">∣1</span>
                                                <span class="mclose">)</span>
                                            </span>
                                        </span>
                                    </span>
                                    .

                                </p>
                                <p>
                                    where 
                                    <span class="katex">
                                        <span class="katex-mathml">
                                            <math xmlns="http://www.w3.org/1998/Math/MathML">
                                                <semantics>
                                                    <mrow>
                                                        <mo>⊕</mo>
                                                    </mrow>
                                                    <annotation encoding="application/x-tex">\oplus</annotation>
                                                </semantics>
                                            </math>
                                        </span>
                                        <span class="katex-html" aria-hidden="true">
                                            <span class="base">
                                                <span class="strut" style="height:0.6667em;vertical-align:-0.0833em;"></span>
                                                <span class="mord">⊕</span>
                                            </span>
                                        </span>
                                    </span>
                                    denotes the bitwise 
                                    <span class="katex">
                                        <span class="katex-mathml">
                                            <math xmlns="http://www.w3.org/1998/Math/MathML">
                                                <semantics>
                                                    <mrow>
                                                        <mi>X</mi>
                                                        <mi>O</mi>
                                                        <mi>R</mi>
                                                    </mrow>
                                                    <annotation encoding="application/x-tex">XOR</annotation>
                                                </semantics>
                                            </math>
                                        </span>
                                        <span class="katex-html" aria-hidden="true">
                                            <span class="base">
                                                <span class="strut" style="height:0.6833em;"></span>
                                                <span class="mord mathnormal" style="margin-right:0.00773em;">XOR</span>
                                            </span>
                                        </span>
                                    </span>
                                    operation, 
                                    <span class="katex">
                                        <span class="katex-mathml">
                                            <math xmlns="http://www.w3.org/1998/Math/MathML">
                                                <semantics>
                                                    <mrow>
                                                        <mi mathvariant="normal">&amp;</mi>
                                                    </mrow>
                                                    <annotation encoding="application/x-tex">\&amp;</annotation>
                                                </semantics>
                                            </math>
                                        </span>
                                        <span class="katex-html" aria-hidden="true">
                                            <span class="base">
                                                <span class="strut" style="height:0.6944em;"></span>
                                                <span class="mord">&amp;</span>
                                            </span>
                                        </span>
                                    </span>
                                    denotes the bitwise 
                                    <span class="katex">
                                        <span class="katex-mathml">
                                            <math xmlns="http://www.w3.org/1998/Math/MathML">
                                                <semantics>
                                                    <mrow>
                                                        <mi>A</mi>
                                                        <mi>N</mi>
                                                        <mi>D</mi>
                                                    </mrow>
                                                    <annotation encoding="application/x-tex">AND</annotation>
                                                </semantics>
                                            </math>
                                        </span>
                                        <span class="katex-html" aria-hidden="true">
                                            <span class="base">
                                                <span class="strut" style="height:0.6833em;"></span>
                                                <span class="mord mathnormal">A</span>
                                                <span class="mord mathnormal" style="margin-right:0.10903em;">N</span>
                                                <span class="mord mathnormal" style="margin-right:0.02778em;">D</span>
                                            </span>
                                        </span>
                                    </span>
                                    operation and 
                                    <span class="katex">
                                        <span class="katex-mathml">
                                            <math xmlns="http://www.w3.org/1998/Math/MathML">
                                                <semantics>
                                                    <mrow>
                                                        <mi mathvariant="normal">∣</mi>
                                                    </mrow>
                                                    <annotation encoding="application/x-tex">|</annotation>
                                                </semantics>
                                            </math>
                                        </span>
                                        <span class="katex-html" aria-hidden="true">
                                            <span class="base">
                                                <span class="strut" style="height:1em;vertical-align:-0.25em;"></span>
                                                <span class="mord">∣</span>
                                            </span>
                                        </span>
                                    </span>
                                    denotes the bitwise 
                                    <span class="katex">
                                        <span class="katex-mathml">
                                            <math xmlns="http://www.w3.org/1998/Math/MathML">
                                                <semantics>
                                                    <mrow>
                                                        <mi>O</mi>
                                                        <mi>R</mi>
                                                    </mrow>
                                                    <annotation encoding="application/x-tex">OR</annotation>
                                                </semantics>
                                            </math>
                                        </span>
                                        <span class="katex-html" aria-hidden="true">
                                            <span class="base">
                                                <span class="strut" style="height:0.6833em;"></span>
                                                <span class="mord mathnormal" style="margin-right:0.00773em;">OR</span>
                                            </span>
                                        </span>
                                    </span>
                                    operation.

                                </p>
                                <script async="" src="https://cdn.jsdelivr.net/npm/katex-copytex@latest/dist/katex-copytex.min.js"></script>
                            </td>
                        </tr>
                        <tr>
                            <td class="problem_mod_title">Input</td>
                        </tr>
                        <tr>
                            <td class="problem_mod_content">
                                <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/katex@0.10.2/dist/katex.min.css" integrity="sha384-yFRtMMDnQtDRO8rLpMIKrtPCD5jdktao2TV19YiZYWMDkUR5GQZR/NOVTdquEx1j" crossorigin="anonymous"/>
                                <link href="https://cdn.jsdelivr.net/npm/katex-copytex@latest/dist/katex-copytex.min.css" rel="stylesheet" type="text/css"/>
                                <p>
                                    The first line contains a single integer 
                                    <span class="katex">
                                        <span class="katex-mathml">
                                            <math xmlns="http://www.w3.org/1998/Math/MathML">
                                                <semantics>
                                                    <mrow>
                                                        <mi>T</mi>
                                                        <mo stretchy="false">(</mo>
                                                        <mn>1</mn>
                                                        <mo>≤</mo>
                                                        <mi>T</mi>
                                                        <mo>≤</mo>
                                                        <mn>2</mn>
                                                        <mo>×</mo>
                                                        <mn>1</mn>
                                                        <msup>
                                                            <mn>0</mn>
                                                            <mn>5</mn>
                                                        </msup>
                                                        <mo stretchy="false">)</mo>
                                                    </mrow>
                                                    <annotation encoding="application/x-tex">T(1 \le T \le 2\times 10^5)</annotation>
                                                </semantics>
                                            </math>
                                        </span>
                                        <span class="katex-html" aria-hidden="true">
                                            <span class="base">
                                                <span class="strut" style="height:1em;vertical-align:-0.25em;"></span>
                                                <span class="mord mathnormal" style="margin-right:0.13889em;">T</span>
                                                <span class="mopen">(</span>
                                                <span class="mord">1</span>
                                                <span class="mspace" style="margin-right:0.2778em;"></span>
                                                <span class="mrel">≤</span>
                                                <span class="mspace" style="margin-right:0.2778em;"></span>
                                            </span>
                                            <span class="base">
                                                <span class="strut" style="height:0.8193em;vertical-align:-0.136em;"></span>
                                                <span class="mord mathnormal" style="margin-right:0.13889em;">T</span>
                                                <span class="mspace" style="margin-right:0.2778em;"></span>
                                                <span class="mrel">≤</span>
                                                <span class="mspace" style="margin-right:0.2778em;"></span>
                                            </span>
                                            <span class="base">
                                                <span class="strut" style="height:0.7278em;vertical-align:-0.0833em;"></span>
                                                <span class="mord">2</span>
                                                <span class="mspace" style="margin-right:0.2222em;"></span>
                                                <span class="mbin">×</span>
                                                <span class="mspace" style="margin-right:0.2222em;"></span>
                                            </span>
                                            <span class="base">
                                                <span class="strut" style="height:1.0641em;vertical-align:-0.25em;"></span>
                                                <span class="mord">1</span>
                                                <span class="mord">
                                                    <span class="mord">0</span>
                                                    <span class="msupsub">
                                                        <span class="vlist-t">
                                                            <span class="vlist-r">
                                                                <span class="vlist" style="height:0.8141em;">
                                                                    <span style="top:-3.063em;margin-right:0.05em;">
                                                                        <span class="pstrut" style="height:2.7em;"></span>
                                                                        <span class="sizing reset-size6 size3 mtight">
                                                                            <span class="mord mtight">5</span>
                                                                        </span>
                                                                    </span>
                                                                </span>
                                                            </span>
                                                        </span>
                                                    </span>
                                                </span>
                                                <span class="mclose">)</span>
                                            </span>
                                        </span>
                                    </span>
                                    , --- the number of test cases.The description of the test cases follows.

                                </p>
                                <p>
                                    The only line of each test case contains four intergers 
                                    <span class="katex">
                                        <span class="katex-mathml">
                                            <math xmlns="http://www.w3.org/1998/Math/MathML">
                                                <semantics>
                                                    <mrow>
                                                        <msub>
                                                            <mi>l</mi>
                                                            <mn>1</mn>
                                                        </msub>
                                                        <mo separator="true">,</mo>
                                                        <msub>
                                                            <mi>r</mi>
                                                            <mn>1</mn>
                                                        </msub>
                                                        <mo separator="true">,</mo>
                                                        <msub>
                                                            <mi>l</mi>
                                                            <mn>2</mn>
                                                        </msub>
                                                        <mo separator="true">,</mo>
                                                        <msub>
                                                            <mi>r</mi>
                                                            <mn>2</mn>
                                                        </msub>
                                                        <mo stretchy="false">(</mo>
                                                        <mn>1</mn>
                                                        <mo>≤</mo>
                                                        <msub>
                                                            <mi>l</mi>
                                                            <mn>1</mn>
                                                        </msub>
                                                        <mo>≤</mo>
                                                        <msub>
                                                            <mi>r</mi>
                                                            <mn>1</mn>
                                                        </msub>
                                                        <mo>≤</mo>
                                                        <mn>1</mn>
                                                        <msup>
                                                            <mn>0</mn>
                                                            <mn>6</mn>
                                                        </msup>
                                                        <mo separator="true">,</mo>
                                                        <mn>1</mn>
                                                        <mo>≤</mo>
                                                        <msub>
                                                            <mi>l</mi>
                                                            <mn>2</mn>
                                                        </msub>
                                                        <mo>≤</mo>
                                                        <msub>
                                                            <mi>r</mi>
                                                            <mn>2</mn>
                                                        </msub>
                                                        <mo>≤</mo>
                                                        <mn>1</mn>
                                                        <msup>
                                                            <mn>0</mn>
                                                            <mn>6</mn>
                                                        </msup>
                                                        <mo stretchy="false">)</mo>
                                                    </mrow>
                                                    <annotation encoding="application/x-tex">l_1,r_1,l_2,r_2 (1 \le l_1 \le r_1 \le 10^6, 1 \le l_2 \le r_2 \le 10^6)</annotation>
                                                </semantics>
                                            </math>
                                        </span>
                                        <span class="katex-html" aria-hidden="true">
                                            <span class="base">
                                                <span class="strut" style="height:1em;vertical-align:-0.25em;"></span>
                                                <span class="mord">
                                                    <span class="mord mathnormal" style="margin-right:0.01968em;">l</span>
                                                    <span class="msupsub">
                                                        <span class="vlist-t vlist-t2">
                                                            <span class="vlist-r">
                                                                <span class="vlist" style="height:0.3011em;">
                                                                    <span style="top:-2.55em;margin-left:-0.0197em;margin-right:0.05em;">
                                                                        <span class="pstrut" style="height:2.7em;"></span>
                                                                        <span class="sizing reset-size6 size3 mtight">
                                                                            <span class="mord mtight">1</span>
                                                                        </span>
                                                                    </span>
                                                                </span>
                                                                <span class="vlist-s"></span>
                                                            </span>
                                                            <span class="vlist-r">
                                                                <span class="vlist" style="height:0.15em;">
                                                                    <span></span>
                                                                </span>
                                                            </span>
                                                        </span>
                                                    </span>
                                                </span>
                                                <span class="mpunct">,</span>
                                                <span class="mspace" style="margin-right:0.1667em;"></span>
                                                <span class="mord">
                                                    <span class="mord mathnormal" style="margin-right:0.02778em;">r</span>
                                                    <span class="msupsub">
                                                        <span class="vlist-t vlist-t2">
                                                            <span class="vlist-r">
                                                                <span class="vlist" style="height:0.3011em;">
                                                                    <span style="top:-2.55em;margin-left:-0.0278em;margin-right:0.05em;">
                                                                        <span class="pstrut" style="height:2.7em;"></span>
                                                                        <span class="sizing reset-size6 size3 mtight">
                                                                            <span class="mord mtight">1</span>
                                                                        </span>
                                                                    </span>
                                                                </span>
                                                                <span class="vlist-s"></span>
                                                            </span>
                                                            <span class="vlist-r">
                                                                <span class="vlist" style="height:0.15em;">
                                                                    <span></span>
                                                                </span>
                                                            </span>
                                                        </span>
                                                    </span>
                                                </span>
                                                <span class="mpunct">,</span>
                                                <span class="mspace" style="margin-right:0.1667em;"></span>
                                                <span class="mord">
                                                    <span class="mord mathnormal" style="margin-right:0.01968em;">l</span>
                                                    <span class="msupsub">
                                                        <span class="vlist-t vlist-t2">
                                                            <span class="vlist-r">
                                                                <span class="vlist" style="height:0.3011em;">
                                                                    <span style="top:-2.55em;margin-left:-0.0197em;margin-right:0.05em;">
                                                                        <span class="pstrut" style="height:2.7em;"></span>
                                                                        <span class="sizing reset-size6 size3 mtight">
                                                                            <span class="mord mtight">2</span>
                                                                        </span>
                                                                    </span>
                                                                </span>
                                                                <span class="vlist-s"></span>
                                                            </span>
                                                            <span class="vlist-r">
                                                                <span class="vlist" style="height:0.15em;">
                                                                    <span></span>
                                                                </span>
                                                            </span>
                                                        </span>
                                                    </span>
                                                </span>
                                                <span class="mpunct">,</span>
                                                <span class="mspace" style="margin-right:0.1667em;"></span>
                                                <span class="mord">
                                                    <span class="mord mathnormal" style="margin-right:0.02778em;">r</span>
                                                    <span class="msupsub">
                                                        <span class="vlist-t vlist-t2">
                                                            <span class="vlist-r">
                                                                <span class="vlist" style="height:0.3011em;">
                                                                    <span style="top:-2.55em;margin-left:-0.0278em;margin-right:0.05em;">
                                                                        <span class="pstrut" style="height:2.7em;"></span>
                                                                        <span class="sizing reset-size6 size3 mtight">
                                                                            <span class="mord mtight">2</span>
                                                                        </span>
                                                                    </span>
                                                                </span>
                                                                <span class="vlist-s"></span>
                                                            </span>
                                                            <span class="vlist-r">
                                                                <span class="vlist" style="height:0.15em;">
                                                                    <span></span>
                                                                </span>
                                                            </span>
                                                        </span>
                                                    </span>
                                                </span>
                                                <span class="mopen">(</span>
                                                <span class="mord">1</span>
                                                <span class="mspace" style="margin-right:0.2778em;"></span>
                                                <span class="mrel">≤</span>
                                                <span class="mspace" style="margin-right:0.2778em;"></span>
                                            </span>
                                            <span class="base">
                                                <span class="strut" style="height:0.8444em;vertical-align:-0.15em;"></span>
                                                <span class="mord">
                                                    <span class="mord mathnormal" style="margin-right:0.01968em;">l</span>
                                                    <span class="msupsub">
                                                        <span class="vlist-t vlist-t2">
                                                            <span class="vlist-r">
                                                                <span class="vlist" style="height:0.3011em;">
                                                                    <span style="top:-2.55em;margin-left:-0.0197em;margin-right:0.05em;">
                                                                        <span class="pstrut" style="height:2.7em;"></span>
                                                                        <span class="sizing reset-size6 size3 mtight">
                                                                            <span class="mord mtight">1</span>
                                                                        </span>
                                                                    </span>
                                                                </span>
                                                                <span class="vlist-s"></span>
                                                            </span>
                                                            <span class="vlist-r">
                                                                <span class="vlist" style="height:0.15em;">
                                                                    <span></span>
                                                                </span>
                                                            </span>
                                                        </span>
                                                    </span>
                                                </span>
                                                <span class="mspace" style="margin-right:0.2778em;"></span>
                                                <span class="mrel">≤</span>
                                                <span class="mspace" style="margin-right:0.2778em;"></span>
                                            </span>
                                            <span class="base">
                                                <span class="strut" style="height:0.786em;vertical-align:-0.15em;"></span>
                                                <span class="mord">
                                                    <span class="mord mathnormal" style="margin-right:0.02778em;">r</span>
                                                    <span class="msupsub">
                                                        <span class="vlist-t vlist-t2">
                                                            <span class="vlist-r">
                                                                <span class="vlist" style="height:0.3011em;">
                                                                    <span style="top:-2.55em;margin-left:-0.0278em;margin-right:0.05em;">
                                                                        <span class="pstrut" style="height:2.7em;"></span>
                                                                        <span class="sizing reset-size6 size3 mtight">
                                                                            <span class="mord mtight">1</span>
                                                                        </span>
                                                                    </span>
                                                                </span>
                                                                <span class="vlist-s"></span>
                                                            </span>
                                                            <span class="vlist-r">
                                                                <span class="vlist" style="height:0.15em;">
                                                                    <span></span>
                                                                </span>
                                                            </span>
                                                        </span>
                                                    </span>
                                                </span>
                                                <span class="mspace" style="margin-right:0.2778em;"></span>
                                                <span class="mrel">≤</span>
                                                <span class="mspace" style="margin-right:0.2778em;"></span>
                                            </span>
                                            <span class="base">
                                                <span class="strut" style="height:1.0085em;vertical-align:-0.1944em;"></span>
                                                <span class="mord">1</span>
                                                <span class="mord">
                                                    <span class="mord">0</span>
                                                    <span class="msupsub">
                                                        <span class="vlist-t">
                                                            <span class="vlist-r">
                                                                <span class="vlist" style="height:0.8141em;">
                                                                    <span style="top:-3.063em;margin-right:0.05em;">
                                                                        <span class="pstrut" style="height:2.7em;"></span>
                                                                        <span class="sizing reset-size6 size3 mtight">
                                                                            <span class="mord mtight">6</span>
                                                                        </span>
                                                                    </span>
                                                                </span>
                                                            </span>
                                                        </span>
                                                    </span>
                                                </span>
                                                <span class="mpunct">,</span>
                                                <span class="mspace" style="margin-right:0.1667em;"></span>
                                                <span class="mord">1</span>
                                                <span class="mspace" style="margin-right:0.2778em;"></span>
                                                <span class="mrel">≤</span>
                                                <span class="mspace" style="margin-right:0.2778em;"></span>
                                            </span>
                                            <span class="base">
                                                <span class="strut" style="height:0.8444em;vertical-align:-0.15em;"></span>
                                                <span class="mord">
                                                    <span class="mord mathnormal" style="margin-right:0.01968em;">l</span>
                                                    <span class="msupsub">
                                                        <span class="vlist-t vlist-t2">
                                                            <span class="vlist-r">
                                                                <span class="vlist" style="height:0.3011em;">
                                                                    <span style="top:-2.55em;margin-left:-0.0197em;margin-right:0.05em;">
                                                                        <span class="pstrut" style="height:2.7em;"></span>
                                                                        <span class="sizing reset-size6 size3 mtight">
                                                                            <span class="mord mtight">2</span>
                                                                        </span>
                                                                    </span>
                                                                </span>
                                                                <span class="vlist-s"></span>
                                                            </span>
                                                            <span class="vlist-r">
                                                                <span class="vlist" style="height:0.15em;">
                                                                    <span></span>
                                                                </span>
                                                            </span>
                                                        </span>
                                                    </span>
                                                </span>
                                                <span class="mspace" style="margin-right:0.2778em;"></span>
                                                <span class="mrel">≤</span>
                                                <span class="mspace" style="margin-right:0.2778em;"></span>
                                            </span>
                                            <span class="base">
                                                <span class="strut" style="height:0.786em;vertical-align:-0.15em;"></span>
                                                <span class="mord">
                                                    <span class="mord mathnormal" style="margin-right:0.02778em;">r</span>
                                                    <span class="msupsub">
                                                        <span class="vlist-t vlist-t2">
                                                            <span class="vlist-r">
                                                                <span class="vlist" style="height:0.3011em;">
                                                                    <span style="top:-2.55em;margin-left:-0.0278em;margin-right:0.05em;">
                                                                        <span class="pstrut" style="height:2.7em;"></span>
                                                                        <span class="sizing reset-size6 size3 mtight">
                                                                            <span class="mord mtight">2</span>
                                                                        </span>
                                                                    </span>
                                                                </span>
                                                                <span class="vlist-s"></span>
                                                            </span>
                                                            <span class="vlist-r">
                                                                <span class="vlist" style="height:0.15em;">
                                                                    <span></span>
                                                                </span>
                                                            </span>
                                                        </span>
                                                    </span>
                                                </span>
                                                <span class="mspace" style="margin-right:0.2778em;"></span>
                                                <span class="mrel">≤</span>
                                                <span class="mspace" style="margin-right:0.2778em;"></span>
                                            </span>
                                            <span class="base">
                                                <span class="strut" style="height:1.0641em;vertical-align:-0.25em;"></span>
                                                <span class="mord">1</span>
                                                <span class="mord">
                                                    <span class="mord">0</span>
                                                    <span class="msupsub">
                                                        <span class="vlist-t">
                                                            <span class="vlist-r">
                                                                <span class="vlist" style="height:0.8141em;">
                                                                    <span style="top:-3.063em;margin-right:0.05em;">
                                                                        <span class="pstrut" style="height:2.7em;"></span>
                                                                        <span class="sizing reset-size6 size3 mtight">
                                                                            <span class="mord mtight">6</span>
                                                                        </span>
                                                                    </span>
                                                                </span>
                                                            </span>
                                                        </span>
                                                    </span>
                                                </span>
                                                <span class="mclose">)</span>
                                            </span>
                                        </span>
                                    </span>
                                </p>
                            </td>
                        </tr>
                        <tr>
                            <td class="problem_mod_title">Output</td>
                        </tr>
                        <tr>
                            <td class="problem_mod_content">
                                <p>For each test case, print a single line containing answer.
</p>
                            </td>
                        </tr>
                        <tr>
                            <td class="problem_mod_title">Sample Input</td>
                        </tr>
                        <tr>
                            <td class="problem_mod_content">
                                <p>
                                    4<br/>
                                    1 14 5 14<br/>
                                    19 19 8 10<br/>
                                    3 13 13 136<br/>4 95 27 167

                                </p>
                                <div>
                                    <br/>
                                </div>
                                <p>
                                    <br/>
                                </p>
                            </td>
                        </tr>
                        <tr>
                            <td class="problem_mod_title">Sample Output</td>
                        </tr>
                        <tr>
                            <td class="problem_mod_content">
                                2590<br/>
                                88<br/>
                                114514<br/>
                                1919810<br/>
                                <div>
                                    <br/>
                                </div>
                            </td>
                        </tr>
                        <tr>
                            <td class="problem_mod_title">Author</td>
                        </tr>
                        <tr>
                            <td class="problem_mod_content">Kaibad</td>
                        </tr>
                    </table>
                    <table>
                        <tr>
                            <td class="button_table">
                                <a href="index.php?act=submitcode&cid=2085&p=D" class="link_button">Submit</a>
                            </td>
                            <td class="button_table">
                                <a href="index.php?act=messages&cid=2085&page=1&p=D" class="link_button">Message</a>
                            </td>
                        </tr>
                    </table>
                </td>
            </tr>
        </table>
        <table id="copyright">
            <tr>
                <td class="bottom_left">HrbustOJ@2012
					</td>
                <td class="server">Total time:0.015136(s), Server Time:2023-09-16 23:43:25 (62)					</td>
                <td class="bottom_right">
                    <a href="index.php?act=faq&cid=2085#about">About</a>
                    | <a href="index.php?act=faq&cid=2085">F.A.Q</a>
                    | <a href="mailto:acm@hrbust.edu.cn">Contact Us</a>
                    | <a href="admin.php?act=login">Administration</a>
                </td>
            </tr>
        </table>
        <div class="bottom-bar" style="visibility:hidden;">
            <table height="50" width="100%">
                <tr height="50">
                    <td class="bottom-bar-center">
                        <div class="bottom-bar-inner" id="live_div_test"></div>
                    </td>
                </tr>
            </table>
        </div>
        <div class="bottom-bar">
            <table height="50" width="100%">
                <tr height="50">
                    <td class="bottom-bar-center">
                        <div class="bottom-bar-inner" id="live_div">
                            <table align="left" class="bottom-bar-inner-table">
                                <tr height="50">
                                    <td>
                                        <div id="bottom-bar-animate" style="width:1px;display:block;"></div>
                                    </td>
                                </tr>
                            </table>
                        </div>
                    </td>
                </tr>
            </table>
        </div>
        <script type="text/javascript" src="js/jquery.blockUI.js"></script>
        <div id="alert_box" style="display:none">
            <div class="alert_div">
                <div id="alert_div_inner"></div>
                <table width="500">
                    <tr>
                        <td align="center">
                            <a href="#" id="close_alert_div" class="link_button">Close</a>
                        </td>
                    </tr>
                </table>
            </div>
        </div>
        <script type="text/javascript" src="js/bottom-bar.js"></script>
        <script>
            set_live_f('2085', '2023-09-16 23:43:25', '1');
        </script>
        <div id="to-top" name="to-top">
            <a href="#top" onclick="window.scrollTo(0,0);return false;"></a>
        </div>
    </body>
</html>
"""

# 创建一个 QTextBrowser
browser = QTextBrowser()
# 使用 setHtml 加载HTML内容
browser.setHtml(html_code)

# 显示窗口
browser.show()

sys.exit(app.exec_())
