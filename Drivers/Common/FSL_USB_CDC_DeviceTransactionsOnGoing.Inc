%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (TransactionsOnGoing)
%;**     Description :
%;**         Returns true if USB transactions are going on. Means that
%;**         the COM port is open on the host.
%include Common\GeneralParametersNone.inc
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine