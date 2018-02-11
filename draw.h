

void drawButtons(MiniGrafx *gfx);
void drawDivLines(MiniGrafx *gfx);

void drawButtons(MiniGrafx *gfx)
{
    gfx->setColor(MINI_BLACK);

    uint16_t third = SCREEN_WIDTH / 3;
    gfx->setColor(MINI_BLACK);
    //gfx->fillRect(0, SCREEN_HEIGHT - 12, SCREEN_WIDTH, 12);
    gfx->drawLine(0, SCREEN_HEIGHT - 12, SCREEN_WIDTH, SCREEN_HEIGHT - 12);
    gfx->drawLine(2 * third, SCREEN_HEIGHT - 12, 2 * third, SCREEN_HEIGHT);
    gfx->setTextAlignment(TEXT_ALIGN_CENTER);
    gfx->setFont(ArialMT_Plain_10);
    gfx->drawString(0.5 * third, SCREEN_HEIGHT - 12, FPSTR(TEXT_CONFIG_BUTTON));
    gfx->drawString(2.5 * third, SCREEN_HEIGHT - 12, FPSTR(TEXT_REFRESH_BUTTON));
}

void drawDivLines(MiniGrafx *gfx)
{
    gfx->drawLine(0, SCREEN_HEIGHT - 12, SCREEN_WIDTH, SCREEN_HEIGHT - 12);
    gfx->drawLine(0, 11, SCREEN_WIDTH, 11);
}
