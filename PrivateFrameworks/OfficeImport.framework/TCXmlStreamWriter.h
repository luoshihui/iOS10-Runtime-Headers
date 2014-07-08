/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSMutableSet;

@interface TCXmlStreamWriter : NSObject  {
    struct _xmlTextWriter { } *mStreamAPI;
    unsigned int mCurrentDepth;
    boolmContentAdded;
    NSMutableSet *mAddedIds;
}

+ (bool)cleanUpXmlTextWriter:(struct _xmlTextWriter { }*)arg1;
+ (struct _xmlTextWriter { }*)createXmlTextWriterWithContext:(id)arg1;
+ (void)resetElementIds;
+ (struct _xmlTextWriter { }*)createXmlTextWriterWithBuffer:(struct _xmlOutputBuffer { void *x1; int (*x2)(); int (*x3)(); struct _xmlCharEncodingHandler {} *x4; struct _xmlBuf {} *x5; struct _xmlBuf {} *x6; int x7; int x8; }*)arg1;
+ (bool)writePlainAttributeToStream:(struct _xmlTextWriter { }*)arg1 name:(id)arg2 content:(id)arg3;
+ (bool)startPlainElementInStream:(struct _xmlTextWriter { }*)arg1 name:(id)arg2;
+ (bool)writeAnchorTargetToStream:(struct _xmlTextWriter { }*)arg1 name:(id)arg2;
+ (bool)writeDtdToStream:(struct _xmlTextWriter { }*)arg1 name:(id)arg2 pubid:(id)arg3 sysid:(id)arg4 subset:(id)arg5;
+ (bool)writeNamespaceToStream:(struct _xmlTextWriter { }*)arg1 prefix:(id)arg2 uri:(const char *)arg3;
+ (bool)writeAttributeToStream:(struct _xmlTextWriter { }*)arg1 name:(id)arg2 content:(id)arg3 prefix:(id)arg4 ns:(const char *)arg5;
+ (bool)writeStringToStream:(struct _xmlTextWriter { }*)arg1 text:(id)arg2;
+ (bool)endElementInStream:(struct _xmlTextWriter { }*)arg1;
+ (bool)startElementInStream:(struct _xmlTextWriter { }*)arg1 name:(id)arg2 prefix:(id)arg3 ns:(const char *)arg4;
+ (struct _xmlTextWriter { }*)createXmlTextWriterAtEntry:(id)arg1 inOutputStream:(id)arg2 isCompressed:(bool)arg3;

- (bool)writeAnchorTarget:(id)arg1;
- (bool)writeDtd:(id)arg1 pubid:(id)arg2 sysid:(id)arg3 subset:(id)arg4;
- (bool)writeNamespace:(id)arg1 uri:(const char *)arg2;
- (bool)writeElementId:(id)arg1;
- (bool)writePlainAttribute:(id)arg1 doubleContent:(double)arg2;
- (bool)writePlainAttribute:(id)arg1 enumContent:(int)arg2 map:(id)arg3;
- (bool)writePlainAttribute:(id)arg1 boolContent:(bool)arg2;
- (bool)writePlainAttribute:(id)arg1 intContent:(long long)arg2;
- (bool)endElementsToBase;
- (bool)startPlainElement:(id)arg1;
- (bool)contentAdded;
- (struct _xmlTextWriter { }*)textWriter;
- (bool)writePlainAttribute:(id)arg1 content:(id)arg2;
- (bool)writeAttribute:(id)arg1 doubleContent:(double)arg2 prefix:(id)arg3 ns:(const char *)arg4;
- (bool)writeAttribute:(id)arg1 enumContent:(int)arg2 map:(id)arg3 prefix:(id)arg4 ns:(const char *)arg5;
- (bool)writeAttribute:(id)arg1 boolContent:(bool)arg2 prefix:(id)arg3 ns:(const char *)arg4;
- (bool)writeAttribute:(id)arg1 intContent:(long long)arg2 prefix:(id)arg3 ns:(const char *)arg4;
- (bool)writeAttribute:(id)arg1 content:(id)arg2 prefix:(id)arg3 ns:(const char *)arg4;
- (bool)startElement:(id)arg1 prefix:(id)arg2 ns:(const char *)arg3;
- (id)initWithTextWriter:(struct _xmlTextWriter { }*)arg1;
- (bool)writeString:(id)arg1;
- (bool)endElement;
- (void)dealloc;

@end