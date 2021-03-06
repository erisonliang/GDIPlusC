#include "stdafx.h"

Metafile * WINAPI
Metafile_CreateFromWmf(IN HMETAFILE hWmf,
                       IN const WmfPlaceableFileHeader * wmfPlaceableFileHeader,
                       IN BOOL deleteWmf
)
{
    Metafile * metafile;

    if (Gdiplus::DllExports::GdipCreateMetafileFromWmf(
        hWmf, deleteWmf,
        (GDIPCONST Gdiplus::WmfPlaceableFileHeader *)wmfPlaceableFileHeader,
        (Gdiplus::GpMetafile **)&metafile) == Gdiplus::Ok)
    {
        return metafile;
    }
    else
    {
        return NULL;
    }
}

Metafile * WINAPI
Metafile_CreateFromEmf(IN HENHMETAFILE hEmf,
                       IN BOOL deleteEmf
)
{
    Metafile * metafile;

    if (Gdiplus::DllExports::GdipCreateMetafileFromEmf(
        hEmf, deleteEmf,
        (Gdiplus::GpMetafile **)&metafile) == Gdiplus::Ok)
    {
        return metafile;
    }
    else
    {
        return NULL;
    }
}

Metafile * WINAPI
Metafile_CreateFromFile(IN const WCHAR * filename)
{
    Metafile * metafile;

    if (Gdiplus::DllExports::GdipCreateMetafileFromFile(
        filename,
        (Gdiplus::GpMetafile **)&metafile) == Gdiplus::Ok)
    {
        return metafile;
    }
    else
    {
        return NULL;
    }
}

Metafile * WINAPI
Metafile_CreateFromWmfFile(IN const WCHAR * filename,
                           IN const WmfPlaceableFileHeader * wmfPlaceableFileHeader
)
{
    Metafile * metafile;

    if (Gdiplus::DllExports::GdipCreateMetafileFromWmfFile(
        filename,
        (GDIPCONST Gdiplus::WmfPlaceableFileHeader *)wmfPlaceableFileHeader,
        (Gdiplus::GpMetafile **)&metafile) == Gdiplus::Ok)
    {
        return metafile;
    }
    else
    {
        return NULL;
    }
}

Metafile * WINAPI
Metafile_CreateFromStream(IN IStream * stream)
{
    Metafile * metafile;

    if (Gdiplus::DllExports::GdipCreateMetafileFromStream(
        stream,
        (Gdiplus::GpMetafile **)&metafile) == Gdiplus::Ok)
    {
        return metafile;
    }
    else
    {
        return NULL;
    }
}

Metafile * WINAPI
Metafile_CreateRecord(IN HDC referenceHdc,
                      IN const RectF * frameRect,
                      IN MetafileFrameUnit frameUnit,
                      IN EmfType type,
                      IN const WCHAR * description
)
{
    Metafile * metafile;

    if (Gdiplus::DllExports::GdipRecordMetafile(
        referenceHdc,
        (Gdiplus::EmfType)type,
        (GDIPCONST Gdiplus::GpRectF *)frameRect,
        (Gdiplus::MetafileFrameUnit)frameUnit,
        description,
        (Gdiplus::GpMetafile **)&metafile) == Gdiplus::Ok)
    {
        return metafile;
    }
    else
    {
        return NULL;
    }
}

Metafile * WINAPI
Metafile_CreateRecordI(IN HDC referenceHdc,
                       IN const Rect * frameRect,
                       IN MetafileFrameUnit frameUnit,
                       IN EmfType type,
                       IN const WCHAR * description
)
{
    Metafile * metafile;

    if (Gdiplus::DllExports::GdipRecordMetafileI(
        referenceHdc,
        (Gdiplus::EmfType)type,
        (GDIPCONST Gdiplus::GpRect *)frameRect,
        (Gdiplus::MetafileFrameUnit)frameUnit,
        description,
        (Gdiplus::GpMetafile **)&metafile) == Gdiplus::Ok)
    {
        return metafile;
    }
    else
    {
        return NULL;
    }
}

Metafile * WINAPI
Metafile_CreateRecordFileName(IN const WCHAR * fileName,
                              IN HDC referenceHdc,
                              IN const RectF * frameRect,
                              IN MetafileFrameUnit frameUnit,
                              IN EmfType type,
                              IN const WCHAR * description
)
{
    Metafile * metafile;

    if (Gdiplus::DllExports::GdipRecordMetafileFileName(
        fileName,
        referenceHdc,
        (Gdiplus::EmfType)type,
        (GDIPCONST Gdiplus::GpRectF *)frameRect,
        (Gdiplus::MetafileFrameUnit)frameUnit,
        description,
        (Gdiplus::GpMetafile **)&metafile) == Gdiplus::Ok)
    {
        return metafile;
    }
    else
    {
        return NULL;
    }
}

Metafile * WINAPI
Metafile_CreateRecordFileNameI(IN const WCHAR * fileName,
                               IN HDC referenceHdc,
                               IN const Rect * frameRect,
                               IN MetafileFrameUnit frameUnit,
                               IN EmfType type,
                               IN const WCHAR * description
)
{
    Metafile * metafile;

    if (Gdiplus::DllExports::GdipRecordMetafileFileNameI(
        fileName,
        referenceHdc,
        (Gdiplus::EmfType)type,
        (GDIPCONST Gdiplus::GpRect *)frameRect,
        (Gdiplus::MetafileFrameUnit)frameUnit,
        description,
        (Gdiplus::GpMetafile **)&metafile) == Gdiplus::Ok)
    {
        return metafile;
    }
    else
    {
        return NULL;
    }
}

Metafile * WINAPI
Metafile_CreateRecordStream(IN IStream * stream,
                            IN HDC referenceHdc,
                            IN const RectF * frameRect,
                            IN MetafileFrameUnit frameUnit,
                            IN EmfType type,
                            IN const WCHAR * description
)
{
    Metafile * metafile;

    if (Gdiplus::DllExports::GdipRecordMetafileStream(
        stream,
        referenceHdc,
        (Gdiplus::EmfType)type,
        (GDIPCONST Gdiplus::GpRectF *)frameRect,
        (Gdiplus::MetafileFrameUnit)frameUnit,
        description,
        (Gdiplus::GpMetafile **)&metafile) == Gdiplus::Ok)
    {
        return metafile;
    }
    else
    {
        return NULL;
    }
}

Metafile * WINAPI
Metafile_CreateRecordStreamI(IN IStream * stream,
                             IN HDC referenceHdc,
                             IN const Rect * frameRect,
                             IN MetafileFrameUnit frameUnit,
                             IN EmfType type,
                             IN const WCHAR * description
)
{
    Metafile * metafile;

    if (Gdiplus::DllExports::GdipRecordMetafileStreamI(
        stream,
        referenceHdc,
        (Gdiplus::EmfType)type,
        (GDIPCONST Gdiplus::GpRect *)frameRect,
        (Gdiplus::MetafileFrameUnit)frameUnit,
        description,
        (Gdiplus::GpMetafile **)&metafile) == Gdiplus::Ok)
    {
        return metafile;
    }
    else
    {
        return NULL;
    }
}


Status WINAPI
Metafile_GetMetafileHeaderFromEmf(IN HENHMETAFILE hEmf,
                                  OUT MetafileHeader * header
)
{
    return (Status)Gdiplus::DllExports::GdipGetMetafileHeaderFromEmf(
        hEmf,
        (Gdiplus::MetafileHeader *)header
    );
}

Status WINAPI
Metafile_GetMetafileHeaderFromFile(IN const WCHAR * filename,
                                   OUT MetafileHeader * header
)
{
    return (Status)Gdiplus::DllExports::GdipGetMetafileHeaderFromFile(
        filename,
        (Gdiplus::MetafileHeader *)header
    );
}

Status WINAPI
Metafile_GetMetafileHeaderFromStream(IN IStream * stream,
                                     OUT MetafileHeader * header
)
{
    return (Status)Gdiplus::DllExports::GdipGetMetafileHeaderFromStream(
        stream,
        (Gdiplus::MetafileHeader *)header
    );
}

Status WINAPI
Metafile_GetMetafileHeaderFromMetafile(IN Metafile * metafile,
                                       OUT MetafileHeader * header
)
{
    return (Status)Gdiplus::DllExports::GdipGetMetafileHeaderFromMetafile(
        (Gdiplus::GpMetafile *)metafile,
        (Gdiplus::MetafileHeader *)header
    );
}

HENHMETAFILE WINAPI
Metafile_GetHENHMETAFILE(IN Metafile * metafile)
{
    HENHMETAFILE hEmf;

    Gdiplus::DllExports::GdipGetHemfFromMetafile(
        (Gdiplus::GpMetafile *)metafile,
        &hEmf
    );

    return hEmf;
}

Status WINAPI
Metafile_PlayRecord(IN Metafile * metafile,
                    IN EmfPlusRecordType recordType,
                    IN UINT flags,
                    IN UINT dataSize,
                    IN const BYTE * data
)
{
    return (Status)Gdiplus::DllExports::GdipPlayMetafileRecord(
        (Gdiplus::GpMetafile *)metafile,
        (Gdiplus::EmfPlusRecordType)recordType,
        flags,
        dataSize,
        data
    );
}

Status WINAPI
Metafile_SetDownLevelRasterizationLimit(IN Metafile * metafile,
                                        IN UINT metafileRasterizationLimitDpi
)
{
    return (Status)Gdiplus::DllExports::
        GdipSetMetafileDownLevelRasterizationLimit(
        (Gdiplus::GpMetafile *)metafile,
            metafileRasterizationLimitDpi
        );
}

UINT WINAPI
Metafile_GetDownLevelRasterizationLimit(IN Metafile * metafile)
{
    UINT metafileRasterizationLimitDpi = 0;

    Gdiplus::DllExports::GdipGetMetafileDownLevelRasterizationLimit(
        (Gdiplus::GpMetafile *)metafile,
        &metafileRasterizationLimitDpi
    );

    return metafileRasterizationLimitDpi;
}

UINT WINAPI
Metafile_EmfToWmfBits(IN HENHMETAFILE hemf,
                      IN UINT cbData16,
                      OUT LPBYTE pData16,
                      IN INT iMapMode,
                      IN INT eFlags
)
{
    return Gdiplus::DllExports::GdipEmfToWmfBits(
        hemf,
        cbData16,
        pData16,
        iMapMode,
        eFlags
    );
}