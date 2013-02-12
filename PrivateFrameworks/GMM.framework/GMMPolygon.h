/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSData, NSMutableArray;

@interface GMMPolygon : PBCodable {
    NSInteger _fillColor;
    BOOL _hasFillColor;
    BOOL _hasLineColor;
    BOOL _hasLineWidth;
    NSMutableArray *_innerBoundarys;
    NSData *_line;
    NSInteger _lineColor;
    NSInteger _lineWidth;
}

@property(retain) NSMutableArray *innerBoundarys; /* unknown property attribute: V_innerBoundarys */
@property(readonly) BOOL hasFillColor; /* unknown property attribute: V_hasFillColor */
@property NSInteger fillColor; /* unknown property attribute: V_fillColor */
@property(retain) NSData *line; /* unknown property attribute: V_line */
@property(readonly) BOOL hasLineColor; /* unknown property attribute: V_hasLineColor */
@property NSInteger lineColor; /* unknown property attribute: V_lineColor */
@property(readonly) BOOL hasLineWidth; /* unknown property attribute: V_hasLineWidth */
@property NSInteger lineWidth; /* unknown property attribute: V_lineWidth */
@property(readonly) BOOL hasLine;
@property(readonly) NSInteger innerBoundarysCount;

- (void)addInnerBoundary:(id)arg1;
- (void)dealloc;
- (id)description;
- (NSInteger)fillColor;
- (BOOL)hasFillColor;
- (BOOL)hasLine;
- (BOOL)hasLineColor;
- (BOOL)hasLineWidth;
- (id)init;
- (id)innerBoundaryAtIndex:(NSUInteger)arg1;
- (id)innerBoundarys;
- (NSInteger)innerBoundarysCount;
- (id)line;
- (NSInteger)lineColor;
- (NSInteger)lineWidth;
- (BOOL)readFrom:(id)arg1;
- (void)setFillColor:(NSInteger)arg1;
- (void)setInnerBoundary:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)setInnerBoundarys:(id)arg1;
- (void)setLine:(id)arg1;
- (void)setLineColor:(NSInteger)arg1;
- (void)setLineWidth:(NSInteger)arg1;
- (void)writeTo:(id)arg1;

@end