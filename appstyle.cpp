#include "appstyle.h"

#include <QColor>
#include <QPalette>
#include <QStyleFactory>

void applyModernAppStyle(QApplication *app)
{
    app->setStyle(QStyleFactory::create(QStringLiteral("Fusion")));

    const QColor windowBg(QStringLiteral("#1a1c1f"));
    const QColor panelBg(QStringLiteral("#252830"));
    const QColor border(QStringLiteral("#3d424d"));
    const QColor text(QStringLiteral("#e8e9ec"));
    const QColor mutedText(QStringLiteral("#9aa0ae"));
    const QColor accent(QStringLiteral("#3b82f6"));
    const QColor accentMuted(QStringLiteral("#1e3a5f"));

    QPalette p;
    p.setColor(QPalette::Window, windowBg);
    p.setColor(QPalette::WindowText, text);
    p.setColor(QPalette::Base, panelBg);
    p.setColor(QPalette::AlternateBase, windowBg);
    p.setColor(QPalette::Text, text);
    p.setColor(QPalette::Button, panelBg);
    p.setColor(QPalette::ButtonText, text);
    p.setColor(QPalette::Highlight, accent);
    p.setColor(QPalette::HighlightedText, QColor(QStringLiteral("#ffffff")));
    p.setColor(QPalette::Link, accent);
    p.setColor(QPalette::PlaceholderText, mutedText);
    p.setColor(QPalette::ToolTipBase, panelBg);
    p.setColor(QPalette::ToolTipText, text);
    app->setPalette(p);

    app->setStyleSheet(QStringLiteral(
        "QMainWindow { background-color: %1; }"
        "QMenuBar { background-color: %2; border-bottom: 1px solid %3; padding: 2px; }"
        "QMenuBar::item { spacing: 8px; padding: 4px 10px; border-radius: 4px; }"
        "QMenuBar::item:selected { background-color: %4; }"
        "QMenu { background-color: %2; border: 1px solid %3; padding: 4px; }"
        "QMenu::item { padding: 6px 28px 6px 12px; border-radius: 4px; }"
        "QMenu::item:selected { background-color: %4; }"
        "QMenu::separator { height: 1px; margin: 4px 8px; background-color: %3; }"
        "QScrollArea { border: none; background-color: %1; }"
        "QFrame#frameGraphics { background-color: %1; border: none; }"
        "QFrame#frameTools { background-color: %2; border-left: 1px solid %3; }"
        "QStatusBar { background-color: %2; border-top: 1px solid %3; color: %5; }"
        ).arg(windowBg.name(), panelBg.name(), border.name(), accentMuted.name(), mutedText.name()));
}
