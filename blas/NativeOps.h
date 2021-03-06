//
// Created by agibsonccc on 2/21/16.
//

#ifndef NATIVEOPERATIONS_NATIVEOPS_H
#define NATIVEOPERATIONS_NATIVEOPS_H

#ifndef thread_local
# if __STDC_VERSION__ >= 201112 && !defined __STDC_NO_THREADS__
#  define thread_local _Thread_local
# elif defined _WIN32 && ( \
       defined _MSC_VER || \
       defined __ICL || \
       defined __DMC__ || \
       defined __BORLANDC__ )
#  define thread_local __declspec(thread)
/* note that ICC (linux) and Clang are covered by __GNUC__ */
# elif defined __GNUC__ || \
       defined __SUNPRO_C || \
       defined __xlC__
#  define thread_local __thread
# else
#  error "Cannot define thread_local"
# endif
#endif

#include <pointercast.h>

//DO NOT REMOVE: THIS IS AN EDITOR SEMANTICS THING FOR CLION
//IT DEFINES THE EXPORT MACRO FOR THE EDITOR AND THEN
//RE ADDS THE DEFINITION VIA dll.h
#ifdef  _WIN32
#define ND4J_EXPORT __declspec(dllexport)
#else
#define ND4J_EXPORT
#endif
#include <dll.h>

class ND4J_EXPORT NativeOps {


public:
    /**
       *
       * @param opNum
       * @param x
       * @param xShapeInfo
       * @param extraParams
       */
    double   execIndexReduceScalarDouble(Nd4jPointer *extraPointers,int opNum,
                                         Nd4jPointer x,
                                         Nd4jPointer xShapeInfo,
                                         Nd4jPointer extraParams);

    /**
     *
     * @param opNum
     * @param x
     * @param xShapeInfo
     * @param extraParams
     * @param result
     * @param resultShapeInfoBuffer
     * @param dimension
     * @param dimensionLength
     */
    void   execIndexReduceDouble(Nd4jPointer *extraPointers,int opNum,
                                 Nd4jPointer x,
                                 Nd4jPointer xShapeInfo,
                                 Nd4jPointer extraParams,
                                 Nd4jPointer result,
                                 Nd4jPointer resultShapeInfoBuffer,
                                 Nd4jPointer dimension, int dimensionLength);
    /**
     *
     * @param opNum
     * @param x
     * @param xShapeInfo
     * @param y
     * @param yShapeInfo
     * @param result
     * @param resultShapeInfo
     * @param dimension
     * @param dimensionLength
     */
    void   execBroadcastDouble(
            Nd4jPointer *extraPointers,
            int opNum,
            Nd4jPointer x,
            Nd4jPointer xShapeInfo,
            Nd4jPointer y,
            Nd4jPointer yShapeInfo,
            Nd4jPointer result,
            Nd4jPointer resultShapeInfo,
            Nd4jPointer dimension, int dimensionLength);



    /**
     *
     * @param opNum
     * @param dx
     * @param xStride
     * @param y
     * @param yStride
     * @param result
     * @param resultStride
     * @param extraParams
     * @param n
     */
    void   execPairwiseTransformDouble(Nd4jPointer *extraPointers,int opNum,
                                       Nd4jPointer dx,
                                       int xStride,
                                       Nd4jPointer y,
                                       int yStride,
                                       Nd4jPointer result,
                                       int resultStride,
                                       Nd4jPointer extraParams, Nd4jIndex n);

    /**
     *
     * @param opNum
     * @param dx
     * @param xShapeInfo
     * @param y
     * @param yShapeInfo
     * @param result
     * @param resultShapeInfo
     * @param extraParams
     * @param n
     * @param xIndexes
     * @param yIndexes
     * @param resultIndexes
     */
    void execPairwiseTransformDouble(Nd4jPointer *extraPointers,
                                     int opNum,
                                     Nd4jPointer dx,
                                     Nd4jPointer xShapeInfo,
                                     Nd4jPointer y,
                                     Nd4jPointer yShapeInfo,
                                     Nd4jPointer result,
                                     Nd4jPointer resultShapeInfo,
                                     Nd4jPointer extraParams,
                                     Nd4jPointer xIndexes,
                                     Nd4jPointer yIndexes,
                                     Nd4jPointer resultIndexes);

    /**
     *
     * @param opNum
     * @param dx
     * @param xShapeInfo
     * @param y
     * @param yShapeInfo
     * @param result
     * @param resultShapeInfo
     * @param extraParams
     * @param n
     */
    void execPairwiseTransformDouble(
            Nd4jPointer *extraPointers,
            int opNum,
            Nd4jPointer dx,
            Nd4jPointer  xShapeInfo,
            Nd4jPointer y,
            Nd4jPointer  yShapeInfo,
            Nd4jPointer result,
            Nd4jPointer  resultShapeInfo,
            Nd4jPointer extraParams);

    /**
     *
     * @param opNum
     * @param x
     * @param xShapeInfo
     * @param extraParams
     * @param result
     * @param resultShapeInfo
     */
    void   execReduceDouble(Nd4jPointer *extraPointers,int opNum,
                            Nd4jPointer x,
                            Nd4jPointer xShapeInfo,
                            Nd4jPointer extraParams,
                            Nd4jPointer result,
                            Nd4jPointer resultShapeInfo);

    /**
     *
     * @param opNum
     * @param x
     * @param xShapeInfo
     * @param extraParams
     * @param result
     * @param resultShapeInfo
     */
    void   execReduceDouble(Nd4jPointer *extraPointers,int opNum,
                            Nd4jPointer x,
                            Nd4jPointer xShapeInfo,
                            Nd4jPointer extraParams,
                            Nd4jPointer result,
                            Nd4jPointer resultShapeInfo,
                            Nd4jPointer dimension,int dimensionLength);

    /**
     *
     * @param opNum
     * @param x
     * @param xShapeInfo
     * @param extraParams
     * @return
     */
    double execReduceScalarDouble(Nd4jPointer *extraPointers,int opNum,
                                  Nd4jPointer x,
                                  Nd4jPointer xShapeInfo,
                                  Nd4jPointer extraParams);

    /**
     *
     * @param opNum
     * @param x
     * @param xShapeInfo
     * @param extraParamsVals
     * @param y
     * @param yShapeInfo
     * @param result
     * @param resultShapeInfo
     */
    void   execReduce3Double(Nd4jPointer *extraPointers,int opNum,
                             Nd4jPointer x,
                             Nd4jPointer xShapeInfo,
                             Nd4jPointer extraParamsVals,
                             Nd4jPointer y,
                             Nd4jPointer yShapeInfo,
                             Nd4jPointer result,
                             Nd4jPointer resultShapeInfo);

    /**
     *
     * @param opNum
     * @param x
     * @param xShapeInfo
     * @param extraParamsVals
     * @param y
     * @param yShapeInfo
     */
    double   execReduce3ScalarDouble(Nd4jPointer *extraPointers,int opNum,
                                     Nd4jPointer x,
                                     Nd4jPointer xShapeInfo,
                                     Nd4jPointer extraParamsVals,
                                     Nd4jPointer y,
                                     Nd4jPointer yShapeInfo);
    /**
     *
     * @param opNum
     * @param x
     * @param xShapeInfo
     * @param extraParamsVals
     * @param y
     * @param yShapeInfo
     * @param result
     * @param resultShapeInfoBuffer
     * @param dimension
     * @param dimensionLength
     */
    void   execReduce3Double(Nd4jPointer *extraPointers,int opNum,
                             Nd4jPointer x,
                             Nd4jPointer xShapeInfo,
                             Nd4jPointer extraParamsVals,
                             Nd4jPointer y,
                             Nd4jPointer yShapeInfo,
                             Nd4jPointer result,
                             Nd4jPointer resultShapeInfoBuffer,
                             Nd4jPointer dimension,
                             int dimensionLength);
    /**
     *
     * @param opNum
     * @param x
     * @param xStride
     * @param result
     * @param resultStride
     * @param scalar
     * @param extraParams
     * @param n
     */
    void   execScalarDouble(Nd4jPointer *extraPointers,int opNum,
                            Nd4jPointer x,
                            int xStride,
                            Nd4jPointer result,
                            int resultStride,
                            double scalar,
                            Nd4jPointer extraParams,
                            Nd4jIndex n);

    /**
     *
     * @param opNum
     * @param x
     * @param xShapeInfo
     * @param result
     * @param resultShapeInfo
     * @param scalar
     * @param extraParams
     * @param n
     */
    void execScalarDouble(Nd4jPointer *extraPointers,int opNum,
                          Nd4jPointer x,
                          Nd4jPointer xShapeInfo,
                          Nd4jPointer result,
                          Nd4jPointer resultShapeInfo,
                          double scalar,
                          Nd4jPointer extraParams);

    /**
     *
     * @param opNum
     * @param x
     * @param xShapeInfo
     * @param result
     * @param resultShapeInfo
     * @param scalar
     * @param extraParams
     * @param n
     * @param xIndexes
     * @param resultIndexes
     */
    void execScalarDouble(Nd4jPointer *extraPointers,int opNum,
                          Nd4jPointer x,
                          Nd4jPointer xShapeInfo,
                          Nd4jPointer result,
                          Nd4jPointer resultShapeInfo,
                          double scalar,
                          Nd4jPointer extraParams,
                          Nd4jIndex n,
                          Nd4jPointer xIndexes,
                          Nd4jPointer resultIndexes);
    /**
     *
     * @param opNum
     * @param x
     * @param xShapeInfo
     * @param extraParams
     */
    double   execSummaryStatsScalarDouble(Nd4jPointer *extraPointers,int opNum,Nd4jPointer x,
                                          Nd4jPointer xShapeInfo,
                                          Nd4jPointer extraParams,bool biasCorrected);
    /**
     *
     * @param opNum
     * @param x
     * @param xShapeInfo
     * @param extraParams
     * @param result
     * @param resultShapeInfo
     */
    void   execSummaryStatsDouble(Nd4jPointer *extraPointers,int opNum,
                                  Nd4jPointer x,
                                  Nd4jPointer xShapeInfo,
                                  Nd4jPointer extraParams,
                                  Nd4jPointer result,
                                  Nd4jPointer resultShapeInfo,bool biasCorrected);
    /**
     *
     * @param opNum
     * @param x
     * @param xShapeInfo
     * @param extraParams
     * @param result
     * @param resultShapeInfoBuffer
     * @param dimension
     * @param dimensionLength
     */
    void   execSummaryStatsDouble(Nd4jPointer *extraPointers,int opNum,Nd4jPointer x,
                                  Nd4jPointer xShapeInfo,
                                  Nd4jPointer extraParams,
                                  Nd4jPointer result,
                                  Nd4jPointer resultShapeInfoBuffer,
                                  Nd4jPointer dimension, int dimensionLength,bool biasCorrected);
    /**
     *
     * @param opNum
     * @param dx
     * @param xStride
     * @param result
     * @param resultStride
     * @param extraParams
     * @param n
     */
    void   execTransformDouble(Nd4jPointer *extraPointers,int opNum,
                               Nd4jPointer dx,
                               int xStride,
                               Nd4jPointer result,
                               int resultStride,
                               Nd4jPointer extraParams, Nd4jIndex n);

    /**
     *
     * @param opNum
     * @param dx
     * @param xShapeInfo
     * @param result
     * @param resultShapeInfo
     * @param extraParams
     * @param n
     */
    void   execTransformDouble(Nd4jPointer *extraPointers,int opNum,
                               Nd4jPointer dx,
                               Nd4jPointer xShapeInfo,
                               Nd4jPointer result,
                               Nd4jPointer resultShapeInfo,
                               Nd4jPointer extraParams);

    /**
     *
     * @param opNum
     * @param dx
     * @param xShapeInfo
     * @param result
     * @param resultShapeInfo
     * @param extraParams
     * @param n
     */
    void   execTransformDouble(Nd4jPointer *extraPointers,int opNum,
                               Nd4jPointer dx,
                               Nd4jPointer xShapeInfo,
                               Nd4jPointer result,
                               Nd4jPointer resultShapeInfo,
                               Nd4jPointer extraParams,
                               Nd4jPointer xIndexes,
                               Nd4jPointer resultIndexes);

    /**
    *
    * @param opNum
    * @param x
    * @param xShapeInfo
    * @param extraParams
    */
    float   execIndexReduceScalarFloat(Nd4jPointer *extraPointers,
                                       int opNum,
                                       Nd4jPointer x,
                                       Nd4jPointer xShapeInfo,
                                       Nd4jPointer extraParams);

    float execIndexReduceScalarHalf(Nd4jPointer *extraPointers,
                                       int opNum,
                                       Nd4jPointer x,
                                       Nd4jPointer xShapeInfo,
                                       Nd4jPointer extraParams);

    /**
     *
     * @param opNum
     * @param x
     * @param xShapeInfo
     * @param extraParams
     * @param result
     * @param resultShapeInfoBuffer
     * @param dimension
     * @param dimensionLength
     */
    void   execIndexReduceFloat(Nd4jPointer *extraPointers,int opNum,
                                Nd4jPointer x,
                                Nd4jPointer xShapeInfo,
                                Nd4jPointer extraParams,
                                Nd4jPointer result,
                                Nd4jPointer resultShapeInfoBuffer,
                                Nd4jPointer dimension, int dimensionLength);

    void   execIndexReduceHalf(Nd4jPointer *extraPointers,int opNum,
                                Nd4jPointer x,
                                Nd4jPointer xShapeInfo,
                                Nd4jPointer extraParams,
                                Nd4jPointer result,
                                Nd4jPointer resultShapeInfoBuffer,
                                Nd4jPointer dimension, int dimensionLength);
    /**
     *
     * @param opNum
     * @param x
     * @param xShapeInfo
     * @param y
     * @param yShapeInfo
     * @param result
     * @param resultShapeInfo
     * @param dimension
     * @param dimensionLength
     */
    void   execBroadcastFloat(
            Nd4jPointer *extraPointers,
            int opNum,
            Nd4jPointer x,
            Nd4jPointer xShapeInfo,
            Nd4jPointer y,
            Nd4jPointer yShapeInfo,
            Nd4jPointer result,
            Nd4jPointer resultShapeInfo,
            Nd4jPointer dimension, int dimensionLength);

    void   execBroadcastHalf(
            Nd4jPointer *extraPointers,
            int opNum,
            Nd4jPointer x,
            Nd4jPointer xShapeInfo,
            Nd4jPointer y,
            Nd4jPointer yShapeInfo,
            Nd4jPointer result,
            Nd4jPointer resultShapeInfo,
            Nd4jPointer dimension, int dimensionLength);



    /**
     *
     * @param opNum
     * @param dx
     * @param xStride
     * @param y
     * @param yStride
     * @param result
     * @param resultStride
     * @param extraParams
     * @param n
     */
    void   execPairwiseTransformFloat(Nd4jPointer *extraPointers,int opNum,
                                      Nd4jPointer dx,
                                      int xStride,
                                      Nd4jPointer y,
                                      int yStride,
                                      Nd4jPointer result,
                                      int resultStride,
                                      Nd4jPointer extraParams, Nd4jIndex n);

    void   execPairwiseTransformHalf(Nd4jPointer *extraPointers,int opNum,
                                      Nd4jPointer dx,
                                      int xStride,
                                      Nd4jPointer y,
                                      int yStride,
                                      Nd4jPointer result,
                                      int resultStride,
                                      Nd4jPointer extraParams, Nd4jIndex n);

    /**
     *
     * @param opNum
     * @param dx
     * @param xShapeInfo
     * @param y
     * @param yShapeInfo
     * @param result
     * @param resultShapeInfo
     * @param extraParams
     * @param n
     * @param xIndexes
     * @param yIndexes
     * @param resultIndexes
     */
    void execPairwiseTransformFloat(Nd4jPointer *extraPointers,int opNum,
                                    Nd4jPointer dx,
                                    Nd4jPointer xShapeInfo,
                                    Nd4jPointer y,
                                    Nd4jPointer yShapeInfo,
                                    Nd4jPointer result,
                                    Nd4jPointer resultShapeInfo,
                                    Nd4jPointer extraParams,
                                    Nd4jPointer xIndexes,
                                    Nd4jPointer yIndexes,
                                    Nd4jPointer resultIndexes);

    void execPairwiseTransformHalf(Nd4jPointer *extraPointers,int opNum,
                                    Nd4jPointer dx,
                                    Nd4jPointer xShapeInfo,
                                    Nd4jPointer y,
                                    Nd4jPointer yShapeInfo,
                                    Nd4jPointer result,
                                    Nd4jPointer resultShapeInfo,
                                    Nd4jPointer extraParams,
                                    Nd4jPointer xIndexes,
                                    Nd4jPointer yIndexes,
                                    Nd4jPointer resultIndexes);

    /**
     *
     * @param opNum
     * @param dx
     * @param xShapeInfo
     * @param y
     * @param yShapeInfo
     * @param result
     * @param resultShapeInfo
     * @param extraParams
     * @param n
     */
    void execPairwiseTransformFloat(Nd4jPointer *extraPointers,int opNum,
                                    Nd4jPointer dx,
                                    Nd4jPointer  xShapeInfo,
                                    Nd4jPointer y,
                                    Nd4jPointer  yShapeInfo,
                                    Nd4jPointer result,
                                    Nd4jPointer  resultShapeInfo,
                                    Nd4jPointer extraParams);

    void execPairwiseTransformHalf(Nd4jPointer *extraPointers,int opNum,
                                    Nd4jPointer dx,
                                    Nd4jPointer  xShapeInfo,
                                    Nd4jPointer y,
                                    Nd4jPointer  yShapeInfo,
                                    Nd4jPointer result,
                                    Nd4jPointer  resultShapeInfo,
                                    Nd4jPointer extraParams);

    /**
     *
     * @param opNum
     * @param x
     * @param xShapeInfo
     * @param extraParams
     * @param result
     * @param resultShapeInfo
     */
    void   execReduceFloat(Nd4jPointer *extraPointers,int opNum,
                           Nd4jPointer x,
                           Nd4jPointer xShapeInfo,
                           Nd4jPointer extraParams,
                           Nd4jPointer result,
                           Nd4jPointer resultShapeInfo);

    void   execReduceHalf(Nd4jPointer *extraPointers,int opNum,
                           Nd4jPointer x,
                           Nd4jPointer xShapeInfo,
                           Nd4jPointer extraParams,
                           Nd4jPointer result,
                           Nd4jPointer resultShapeInfo);

    /**
     *
     * @param opNum
     * @param x
     * @param xShapeInfo
     * @param extraParams
     * @param result
     * @param resultShapeInfo
     */
    void   execReduceFloat(Nd4jPointer *extraPointers,int opNum,
                           Nd4jPointer x,
                           Nd4jPointer xShapeInfo,
                           Nd4jPointer extraParams,
                           Nd4jPointer result,
                           Nd4jPointer resultShapeInfo,
                           Nd4jPointer dimension,int dimensionLength);

    void   execReduceHalf(Nd4jPointer *extraPointers,int opNum,
                           Nd4jPointer x,
                           Nd4jPointer xShapeInfo,
                           Nd4jPointer extraParams,
                           Nd4jPointer result,
                           Nd4jPointer resultShapeInfo,
                           Nd4jPointer dimension,int dimensionLength);

    /**
     *
     * @param opNum
     * @param x
     * @param xShapeInfo
     * @param extraParams
     * @return
     */
    float execReduceScalarFloat(Nd4jPointer *extraPointers,int opNum,
                                Nd4jPointer x,
                                Nd4jPointer xShapeInfo,
                                Nd4jPointer extraParams);

    float execReduceScalarHalf(Nd4jPointer *extraPointers,int opNum,
                                Nd4jPointer x,
                                Nd4jPointer xShapeInfo,
                                Nd4jPointer extraParams);

    /**
     *
     * @param opNum
     * @param x
     * @param xShapeInfo
     * @param extraParamsVals
     * @param y
     * @param yShapeInfo
     * @param result
     * @param resultShapeInfo
     */
    void   execReduce3Float(Nd4jPointer *extraPointers,int opNum,
                            Nd4jPointer x,
                            Nd4jPointer xShapeInfo,
                            Nd4jPointer extraParamsVals,
                            Nd4jPointer y,
                            Nd4jPointer yShapeInfo,
                            Nd4jPointer result,
                            Nd4jPointer resultShapeInfo);

    void   execReduce3Half(Nd4jPointer *extraPointers,int opNum,
                            Nd4jPointer x,
                            Nd4jPointer xShapeInfo,
                            Nd4jPointer extraParamsVals,
                            Nd4jPointer y,
                            Nd4jPointer yShapeInfo,
                            Nd4jPointer result,
                            Nd4jPointer resultShapeInfo);

    /**
     *
     * @param opNum
     * @param x
     * @param xShapeInfo
     * @param extraParamsVals
     * @param y
     * @param yShapeInfo
     */
    float   execReduce3ScalarFloat(Nd4jPointer *extraPointers,int opNum,
                                   Nd4jPointer x,
                                   Nd4jPointer xShapeInfo,
                                   Nd4jPointer extraParamsVals,
                                   Nd4jPointer y,
                                   Nd4jPointer yShapeInfo);

    float   execReduce3ScalarHalf(Nd4jPointer *extraPointers,int opNum,
                                   Nd4jPointer x,
                                   Nd4jPointer xShapeInfo,
                                   Nd4jPointer extraParamsVals,
                                   Nd4jPointer y,
                                   Nd4jPointer yShapeInfo);

    /**
     *
     * @param opNum
     * @param x
     * @param xShapeInfo
     * @param extraParamsVals
     * @param y
     * @param yShapeInfo
     * @param result
     * @param resultShapeInfoBuffer
     * @param dimension
     * @param dimensionLength
     */
    void   execReduce3Float(Nd4jPointer *extraPointers,int opNum,
                            Nd4jPointer x,
                            Nd4jPointer xShapeInfo,
                            Nd4jPointer extraParamsVals,
                            Nd4jPointer y,
                            Nd4jPointer yShapeInfo,
                            Nd4jPointer result,
                            Nd4jPointer resultShapeInfoBuffer,
                            Nd4jPointer dimension,
                            int dimensionLength);

    void   execReduce3Half(Nd4jPointer *extraPointers,int opNum,
                            Nd4jPointer x,
                            Nd4jPointer xShapeInfo,
                            Nd4jPointer extraParamsVals,
                            Nd4jPointer y,
                            Nd4jPointer yShapeInfo,
                            Nd4jPointer result,
                            Nd4jPointer resultShapeInfoBuffer,
                            Nd4jPointer dimension,
                            int dimensionLength);
    /**
     *
     * @param opNum
     * @param x
     * @param xStride
     * @param result
     * @param resultStride
     * @param scalar
     * @param extraParams
     * @param n
     */
    void   execScalarFloat(Nd4jPointer *extraPointers,int opNum,
                           Nd4jPointer x,
                           int xStride,
                           Nd4jPointer result,
                           int resultStride,
                           double scalar,
                           Nd4jPointer extraParams,
                           Nd4jIndex n);

    /**
     *
     * @param opNum
     * @param x
     * @param xShapeInfo
     * @param result
     * @param resultShapeInfo
     * @param scalar
     * @param extraParams
     * @param n
     */
    void execScalarFloat(Nd4jPointer *extraPointers,int opNum,
                         Nd4jPointer x,
                         Nd4jPointer xShapeInfo,
                         Nd4jPointer result,
                         Nd4jPointer resultShapeInfo,
                         float scalar,
                         Nd4jPointer extraParams);


    void execScalarHalf(Nd4jPointer *extraPointers,int opNum,
                         Nd4jPointer x,
                         Nd4jPointer xShapeInfo,
                         Nd4jPointer result,
                         Nd4jPointer resultShapeInfo,
                         float scalar,
                         Nd4jPointer extraParams);

    /**
     *
     * @param opNum
     * @param x
     * @param xShapeInfo
     * @param result
     * @param resultShapeInfo
     * @param scalar
     * @param extraParams
     * @param n
     * @param xIndexes
     * @param resultIndexes
     */
    void execScalarFloat(Nd4jPointer *extraPointers,int opNum,
                         Nd4jPointer x,
                         Nd4jPointer xShapeInfo,
                         Nd4jPointer result,
                         Nd4jPointer resultShapeInfo,
                         double scalar,
                         Nd4jPointer extraParams,
                         Nd4jPointer xIndexes,
                         Nd4jPointer resultIndexes);
    /**
     *
     * @param opNum
     * @param x
     * @param xShapeInfo
     * @param extraParams
     */
    float   execSummaryStatsScalarFloat(Nd4jPointer *extraPointers,int opNum,Nd4jPointer x,
                                        Nd4jPointer xShapeInfo,
                                        Nd4jPointer extraParams,bool biasCorrected);

    float   execSummaryStatsScalarHalf(Nd4jPointer *extraPointers,int opNum,Nd4jPointer x,
                                        Nd4jPointer xShapeInfo,
                                        Nd4jPointer extraParams,bool biasCorrected);

    /**
     *
     * @param opNum
     * @param x
     * @param xShapeInfo
     * @param extraParams
     * @param result
     * @param resultShapeInfo
     */
    void   execSummaryStatsFloat(Nd4jPointer *extraPointers,int opNum,
                                 Nd4jPointer x,
                                 Nd4jPointer xShapeInfo,
                                 Nd4jPointer extraParams,
                                 Nd4jPointer result,
                                 Nd4jPointer resultShapeInfo,bool biasCorrected);


    void   execSummaryStatsHalf(Nd4jPointer *extraPointers,int opNum,
                                 Nd4jPointer x,
                                 Nd4jPointer xShapeInfo,
                                 Nd4jPointer extraParams,
                                 Nd4jPointer result,
                                 Nd4jPointer resultShapeInfo,bool biasCorrected);

    /**
     *
     * @param opNum
     * @param x
     * @param xShapeInfo
     * @param extraParams
     * @param result
     * @param resultShapeInfoBuffer
     * @param dimension
     * @param dimensionLength
     */
    void   execSummaryStatsFloat(Nd4jPointer *extraPointers,int opNum,Nd4jPointer x,
                                 Nd4jPointer xShapeInfo,
                                 Nd4jPointer extraParams,
                                 Nd4jPointer result,
                                 Nd4jPointer resultShapeInfoBuffer,
                                 Nd4jPointer dimension, int dimensionLength,bool biasCorrected);


    void   execSummaryStatsHalf(Nd4jPointer *extraPointers,int opNum,Nd4jPointer x,
                                 Nd4jPointer xShapeInfo,
                                 Nd4jPointer extraParams,
                                 Nd4jPointer result,
                                 Nd4jPointer resultShapeInfoBuffer,
                                 Nd4jPointer dimension, int dimensionLength,bool biasCorrected);

    /**
     *
     * @param opNum
     * @param dx
     * @param xStride
     * @param result
     * @param resultStride
     * @param extraParams
     * @param n
     */
    void   execTransformFloat(Nd4jPointer *extraPointers,int opNum,
                              Nd4jPointer dx,
                              int xStride,
                              Nd4jPointer result,
                              int resultStride,
                              Nd4jPointer extraParams, Nd4jIndex n);


    void   execTransformHalf(Nd4jPointer *extraPointers,int opNum,
                              Nd4jPointer dx,
                              int xStride,
                              Nd4jPointer result,
                              int resultStride,
                              Nd4jPointer extraParams, Nd4jIndex n);

    /**
     *
     * @param opNum
     * @param dx
     * @param xShapeInfo
     * @param result
     * @param resultShapeInfo
     * @param extraParams
     * @param n
     */
    void   execTransformFloat(Nd4jPointer *extraPointers,int opNum,
                              Nd4jPointer dx,
                              Nd4jPointer xShapeInfo,
                              Nd4jPointer result,
                              Nd4jPointer resultShapeInfo,
                              Nd4jPointer extraParams);

    void   execTransformHalf(Nd4jPointer *extraPointers,int opNum,
                              Nd4jPointer dx,
                              Nd4jPointer xShapeInfo,
                              Nd4jPointer result,
                              Nd4jPointer resultShapeInfo,
                              Nd4jPointer extraParams);

    /**
     *
     * @param opNum
     * @param dx
     * @param xShapeInfo
     * @param result
     * @param resultShapeInfo
     * @param extraParams
     * @param n
     */
    void   execTransformFloat(Nd4jPointer *extraPointers,int opNum,
                              Nd4jPointer dx,
                              Nd4jPointer xShapeInfo,
                              Nd4jPointer result,
                              Nd4jPointer resultShapeInfo,
                              Nd4jPointer extraParams,
                              Nd4jPointer xIndexes,
                              Nd4jPointer resultIndexes);

    void   execTransformHalf(Nd4jPointer *extraPointers,int opNum,
                              Nd4jPointer dx,
                              Nd4jPointer xShapeInfo,
                              Nd4jPointer result,
                              Nd4jPointer resultShapeInfo,
                              Nd4jPointer extraParams,
                              Nd4jPointer xIndexes,
                              Nd4jPointer resultIndexes);


    /**
* Append an input array
* to the end of a flat array
* in a particular order
* @param offset the offset of the array to start at
* @param order the order
* @param result the result array
* @param resultShapeInfo the shape info for te array
* @param input the input for the array
* @param inputShapeInfo the shape information for that array
*/
    void flattenFloat(
            Nd4jPointer *extraPointers,
            int offset,
            char order,
            Nd4jPointer result,
            Nd4jPointer resultShapeInfo,
            Nd4jPointer input,
            Nd4jPointer inputShapeInfo);


    void flattenHalf(
            Nd4jPointer *extraPointers,
            int offset,
            char order,
            Nd4jPointer result,
            Nd4jPointer resultShapeInfo,
            Nd4jPointer input,
            Nd4jPointer inputShapeInfo);

    /**
* Append an input array
* to the end of a flat array
* in a particular order
* @param offset the offset of the array to start at
* @param order the order
* @param result the result array
* @param resultShapeInfo the shape info for te array
* @param input the input for the array
* @param inputShapeInfo the shape information for that array
*/
    void flattenDouble(
            Nd4jPointer *extraPointers,
            int offset,
            char order,
            Nd4jPointer result,
            Nd4jPointer resultShapeInfo,
            Nd4jPointer input,
            Nd4jPointer inputShapeInfo);

   /**
    * Concatneate multi array of the same shape together
    * along a particular dimension
    */
    void concatFloat(
            Nd4jPointer *extraPointers,
            int dimension,
            int numArrays,
            Nd4jPointer *data,
            Nd4jPointer *inputShapeInfo,
            Nd4jPointer result,
            Nd4jPointer resultShapeInfo, Nd4jPointer *tadPointers, Nd4jPointer *offsetPointers);
/**
    * Concatneate multi array of the same shape together
    * along a particular dimension
    */
    void concatDouble(
            Nd4jPointer *extraPointers,
            int dimension,
            int numArrays,
            Nd4jPointer *data,
            Nd4jPointer *inputShapeInfo,
            Nd4jPointer result,
            Nd4jPointer resultShapeInfo, Nd4jPointer *tadPointers, Nd4jPointer *offsetPointers);

    void concatHalf(
            Nd4jPointer *extraPointers,
            int dimension,
            int numArrays,
            Nd4jPointer *data,
            Nd4jPointer *inputShapeInfo,
            Nd4jPointer result,
            Nd4jPointer resultShapeInfo, Nd4jPointer *tadPointers, Nd4jPointer *offsetPointers);

    /**
     * This method implementation exists only for cuda.
     * The other backends should have dummy method for JNI compatibility reasons.
     */
    void initializeDevicesAndFunctions();


    /**
     * This method acquires memory chunk of requested size on host side
     *
     * @param pointer pointer that'll be used for allocation
     * @param memorySize memory size, in bytes
     * @param flags optional parameter
     */
    Nd4jPointer mallocHost(Nd4jIndex memorySize, int flags);

    /**
     * This method acquires memory chunk of requested size on specified device
     *
     * @param pointer pointer that'll be used for allocation
     * @param memorySize memory size, in bytes
     * @param ptrToDeviceId pointer to deviceId. For cuda that's just and int, for OpenCL that's pointer to device_id, etc
     * @param flags optional parameter
     */
    Nd4jPointer mallocDevice(Nd4jIndex memorySize, Nd4jPointer ptrToDeviceId, int flags);

    /**
     * This method releases previously allocated host memory space
     *
     * @param pointer pointer that'll be freed
     */
    int freeHost(Nd4jPointer pointer);

    /**
     * This method releases previously allocated memory space on device
     *
     * @param pointer pointer that'll be freed
     * @param ptrToDeviceId pointer to deviceId.
     */
    int freeDevice(Nd4jPointer pointer, Nd4jPointer ptrToDeviceId);

    int ompGetMaxThreads();

    int ompGetNumThreads();

    void setOmpNumThreads(int threads);



    Nd4jPointer createContext();

    Nd4jPointer createStream();

    Nd4jPointer createEvent();

    Nd4jPointer createBlasHandle();

    int registerEvent(Nd4jPointer event, Nd4jPointer stream);

    int destroyEvent(Nd4jPointer event);

    int setBlasStream(Nd4jPointer handle, Nd4jPointer stream);

    int setDevice(Nd4jPointer ptrToDeviceId);

    int streamSynchronize(Nd4jPointer stream);

    int eventSynchronize(Nd4jPointer event);

    Nd4jIndex getDeviceFreeMemory(Nd4jPointer ptrToDeviceId);

    Nd4jIndex getDeviceTotalMemory(Nd4jPointer ptrToDeviceId);

    int memcpy(Nd4jPointer dst, Nd4jPointer src, Nd4jIndex size, int flags, Nd4jPointer reserved);

    int memcpyAsync(Nd4jPointer dst, Nd4jPointer src, Nd4jIndex size, int flags, Nd4jPointer reserved);

    int memset(Nd4jPointer dst, int value, Nd4jIndex size, int flags, Nd4jPointer reserved);

    int memsetAsync(Nd4jPointer dst, int value, Nd4jIndex size, int flags, Nd4jPointer reserved);

    int memcpyConstantAsync(Nd4jIndex dst, Nd4jPointer src, Nd4jIndex size, int flags, Nd4jPointer reserved);

    Nd4jPointer getConstantSpace();

    int getAvailableDevices();

    void enableDebugMode(bool reallyEnable);

    void enableVerboseMode(bool reallyEnable);

    void setGridLimit(int gridSize);

    void tadOnlyShapeInfo(Nd4jPointer xShapeInfo, Nd4jPointer dimension, int dimensionLength, Nd4jPointer targetBuffer, Nd4jPointer offsetsBuffer);

    /*
     * PullRow special op
     */

    void pullRowsHalf(Nd4jPointer *extraPointers, Nd4jPointer x, Nd4jPointer xShapeInfo, Nd4jPointer z, Nd4jPointer zShapeInfo, int n, Nd4jPointer indexes,  Nd4jPointer tadShapeInfo, Nd4jPointer tadOffsets);

    void pullRowsFloat(Nd4jPointer *extraPointers, Nd4jPointer x, Nd4jPointer xShapeInfo, Nd4jPointer z, Nd4jPointer zShapeInfo, int n, Nd4jPointer indexes,  Nd4jPointer tadShapeInfo, Nd4jPointer tadOffsets);

    void pullRowsDouble(Nd4jPointer *extraPointers, Nd4jPointer x, Nd4jPointer xShapeInfo, Nd4jPointer z, Nd4jPointer zShapeInfo, int n, Nd4jPointer indexes, Nd4jPointer tadShapeInfo, Nd4jPointer tadOffsets);

    /*
         Four methods below are supposed to be used for runtime conversions between Single/Double precision and Half precision
     */

    void convertDoublesToHalfs(Nd4jPointer *extras, Nd4jPointer dx, int n, Nd4jPointer dz);

    void convertFloatsToHalfs(Nd4jPointer *extras, Nd4jPointer dx, int n, Nd4jPointer dz);

    void convertHalfsToDoubles(Nd4jPointer *extras, Nd4jPointer dx, int n, Nd4jPointer dz);

    void convertHalfsToFloats(Nd4jPointer *extras, Nd4jPointer dx, int n, Nd4jPointer dz);

    /**
     * Array averaging op
     */
    void averageHalf(Nd4jPointer *extras, Nd4jPointer dx, Nd4jPointer dz, int n, Nd4jIndex length, bool propagate);

    void averageFloat(Nd4jPointer *extras, Nd4jPointer dx, Nd4jPointer dz, int n, Nd4jIndex length, bool propagate);

    void averageDouble(Nd4jPointer *extras, Nd4jPointer dx, Nd4jPointer dz, int n, Nd4jIndex length, bool propagate);


    /**
     * P2P enabler
     */
    void enableP2P(bool enable);
};


#endif //NATIVEOPERATIONS_NATIVEOPS_H
