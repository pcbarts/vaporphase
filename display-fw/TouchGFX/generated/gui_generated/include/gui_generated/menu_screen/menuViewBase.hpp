/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef MENUVIEWBASE_HPP
#define MENUVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/menu_screen/menuPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/containers/SwipeContainer.hpp>
#include <touchgfx/containers/Container.hpp>
#include <touchgfx/widgets/ButtonWithLabel.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/graph/GraphWrapAndOverwrite.hpp>
#include <touchgfx/widgets/graph/GraphElements.hpp>
#include <touchgfx/widgets/canvas/PainterRGB888.hpp>
#include <touchgfx/widgets/graph/GraphLabels.hpp>
#include <touchgfx/widgets/AnimationTextureMapper.hpp>
#include <touchgfx/widgets/canvas/Circle.hpp>
#include <touchgfx/widgets/Button.hpp>
#include <touchgfx/containers/scrollers/ScrollWheel.hpp>
#include <gui/containers/custom_container_profile_select.hpp>
#include <touchgfx/widgets/ToggleButton.hpp>
#include <touchgfx/containers/ModalWindow.hpp>
#include <touchgfx/Color.hpp>
#include <touchgfx/canvas_widget_renderer/CanvasWidgetRenderer.hpp>

class menuViewBase : public touchgfx::View<menuPresenter>
{
public:
    menuViewBase();
    virtual ~menuViewBase() {}
    virtual void setupScreen();

    virtual void options_solder_profile_wheelUpdateItem(custom_container_profile_select& item, int16_t itemIndex)
    {
        // Override and implement this function in menu
    }

    /*
     * Virtual Action Handlers
     */
    virtual void StartButtonPush()
    {
        // Override and implement this function in menu
    }

    virtual void SetSolderProfile()
    {
        // Override and implement this function in menu
    }

    virtual void TempUnitToggled()
    {
        // Override and implement this function in menu
    }

    virtual void StopReflowPush()
    {
        // Override and implement this function in menu
    }

    virtual void OpenLidPush()
    {
        // Override and implement this function in menu
    }

    virtual void CloseLidPush()
    {
        // Override and implement this function in menu
    }

    virtual void EjectPush()
    {
        // Override and implement this function in menu
    }

    virtual void ModalInformationClose()
    {
        // Override and implement this function in menu
    }

    virtual void ModalDecisionYes()
    {
        // Override and implement this function in menu
    }

    virtual void ModalDecisionNo()
    {
        // Override and implement this function in menu
    }

    virtual void btn_eco_open_temp_clicked()
    {
        // Override and implement this function in menu
    }

    virtual void btn_standard_open_temp_clicked()
    {
        // Override and implement this function in menu
    }

    virtual void btn_fast_open_temp_clicked()
    {
        // Override and implement this function in menu
    }

    virtual void MountPush()
    {
        // Override and implement this function in menu
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Box background;
    touchgfx::SwipeContainer menu_container;
    touchgfx::Container start_stop;
    touchgfx::ButtonWithLabel Close_Lid;
    touchgfx::ButtonWithLabel Open_Lid;
    touchgfx::ButtonWithLabel Stop_Reflow;
    touchgfx::ButtonWithLabel Start_Reflow;
    touchgfx::TextArea vapor_phase_one;
    touchgfx::Container graphs;
    touchgfx::TextArea x_axis_naming;
    touchgfx::TextAreaWithOneWildcard y_axis_naming;
    touchgfx::TextAreaWithTwoWildcards galden_tmp;
    touchgfx::Image galden;
    touchgfx::GraphWrapAndOverwrite<600> dynamicGraph_soll;
    touchgfx::GraphElementLine dynamicGraph_sollLine1;
    touchgfx::PainterRGB888 dynamicGraph_sollLine1Painter;
    touchgfx::GraphWrapAndOverwrite<600> dynamicGraph_ist;
    touchgfx::GraphElementLine dynamicGraph_istLine1;
    touchgfx::PainterRGB888 dynamicGraph_istLine1Painter;
    touchgfx::GraphElementGridX dynamicGraph_istMajorXAxisGrid;
    touchgfx::GraphElementGridY dynamicGraph_istMajorYAxisGrid;
    touchgfx::GraphLabelsX dynamicGraph_istMajorXAxisLabel;
    touchgfx::GraphLabelsY dynamicGraph_istMajorYAxisLabel;
touchgfx::GraphElementVerticalGapLine dynamicGraph_istVerticalFrontline;
    touchgfx::TextAreaWithTwoWildcards watersystem_tmp;
    touchgfx::Box abortedProfileBackground;
    touchgfx::TextArea abortedProfileText;
    touchgfx::TextAreaWithTwoWildcards pcb_tmp;
    touchgfx::Image galden_1;
    touchgfx::TextAreaWithOneWildcard current_stateT;
    touchgfx::Image Info;
    touchgfx::AnimationTextureMapper textureMapper;
    touchgfx::Container options;
    touchgfx::Circle options_solder_profile_wheel_indicator;
    touchgfx::PainterRGB888 options_solder_profile_wheel_indicatorPainter;
    touchgfx::Button options_solder_button_set;
    touchgfx::ScrollWheel options_solder_profile_wheel;
    touchgfx::DrawableListItems<custom_container_profile_select, 5> options_solder_profile_wheelListItems;

    touchgfx::Box options_solder_profile_whell_overlay_bottom;
    touchgfx::Box options_solder_profile_whell_overlay_top;
    touchgfx::TextArea options_solder_profile_label;
    touchgfx::Button options_openlid_button_high;
    touchgfx::Button options_openlid_button_medium;
    touchgfx::Button options_openlid_button_low;
    touchgfx::TextArea lid_temp_label;
    touchgfx::ButtonWithLabel options_sd_card_button_mount;
    touchgfx::ButtonWithLabel options_sd_card_button;
    touchgfx::TextArea options_sd_card_label;
    touchgfx::ToggleButton options_temp_unit_toggle;
    touchgfx::TextArea options_temp_unit_label;
    touchgfx::ModalWindow modalWindowInformation;
    touchgfx::Button modalWindowsInformationClose;
    touchgfx::TextArea modalWindowInformationBody;
    touchgfx::TextArea modalWindowInformationTitle;
    touchgfx::ModalWindow modalWindowDecision;
    touchgfx::Button modalWindowDecisionYes;
    touchgfx::Button modalWindowDecisionNo;
    touchgfx::TextArea modalWindowDecisionBody;
    touchgfx::TextArea modalWindowDecisionTitle;

    /*
     * Wildcard Buffers
     */
    static const uint16_t Y_AXIS_NAMING_SIZE = 2;
    touchgfx::Unicode::UnicodeChar y_axis_namingBuffer[Y_AXIS_NAMING_SIZE];
    static const uint16_t GALDEN_TMPBUFFER1_SIZE = 4;
    touchgfx::Unicode::UnicodeChar galden_tmpBuffer1[GALDEN_TMPBUFFER1_SIZE];
    static const uint16_t GALDEN_TMPBUFFER2_SIZE = 2;
    touchgfx::Unicode::UnicodeChar galden_tmpBuffer2[GALDEN_TMPBUFFER2_SIZE];
    static const uint16_t WATERSYSTEM_TMPBUFFER1_SIZE = 4;
    touchgfx::Unicode::UnicodeChar watersystem_tmpBuffer1[WATERSYSTEM_TMPBUFFER1_SIZE];
    static const uint16_t WATERSYSTEM_TMPBUFFER2_SIZE = 2;
    touchgfx::Unicode::UnicodeChar watersystem_tmpBuffer2[WATERSYSTEM_TMPBUFFER2_SIZE];
    static const uint16_t PCB_TMPBUFFER1_SIZE = 4;
    touchgfx::Unicode::UnicodeChar pcb_tmpBuffer1[PCB_TMPBUFFER1_SIZE];
    static const uint16_t PCB_TMPBUFFER2_SIZE = 2;
    touchgfx::Unicode::UnicodeChar pcb_tmpBuffer2[PCB_TMPBUFFER2_SIZE];
    static const uint16_t CURRENT_STATET_SIZE = 32;
    touchgfx::Unicode::UnicodeChar current_stateTBuffer[CURRENT_STATET_SIZE];

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<menuViewBase, const touchgfx::AbstractButton&> buttonCallback;
    touchgfx::Callback<menuViewBase, touchgfx::DrawableListItemsInterface*, int16_t, int16_t> updateItemCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);
    void updateItemCallbackHandler(touchgfx::DrawableListItemsInterface* items, int16_t containerIndex, int16_t itemIndex);

    /*
     * Canvas Buffer Size
     */
    static const uint16_t CANVAS_BUFFER_SIZE = 32767;
    uint8_t canvasBuffer[CANVAS_BUFFER_SIZE];
};

#endif // MENUVIEWBASE_HPP
